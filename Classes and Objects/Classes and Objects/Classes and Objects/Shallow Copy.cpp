#include <iostream>

using namespace std;

class Shallow {
private:
	int* data;

public:
	void set_data_value(int data_value) { *data = data_value; }
	int get_data_value() { return *data; }

	// Constructor

	Shallow(int data_value);

	// Copy Constructor

	Shallow(const Shallow& source);

	// Deconstructor

	~Shallow();

};

Shallow::Shallow(int data_value) {
	data = new int;
	*data = data_value;
}

Shallow::Shallow(const Shallow& source) // 2) source is obj1 , created a copy of obj1 pointing to the same area of memory
	: data(source.data) {
	cout << "Copy Constructor has been called." << endl;
}

Shallow::~Shallow() {
	delete data;
	cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s) { // 3) points to the same area of data as object 1. SAME MEMORY LOCATION.
	cout << s.get_data_value() << endl;
}

int main() {

	Shallow obj1{ 100 }; // 1) obj1 has pointer data, that points to an area in memory (line 29), 100 is *data (pointer) of location X
	display_shallow(obj1); // Copy is made to like 32

	Shallow obj2(obj1);
	obj2.set_data_value(1000); // sets both values to 1000, because it is a shallow copy pointing to the same space in memory.
	// when destructor is called, this will cause a compiler error.

	return 0;
}
