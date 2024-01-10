#include <iostream>
#include <vector>

using namespace std;

class Move {
private:
	int* data;

public:
	void set_data_value(int d) { *data = d; }
	int get_data_value() { return *data; }

	// Constructor
	Move(int d);

	// Copy Constructor
	Move(const Move& source);

	//Move Constructor
	Move(Move&& source) noexcept;

	//Destructor
	~Move();
};

//Constructor
Move::Move(int d) {
	data = new int;
	*data = d;
	cout << "Constructor for: " << d << endl;
}

//Copy Constructor
Move::Move(const Move&source) 
	:Move{ *source.data }{
	cout << "Copy constructor - deep copy for " << *data << endl;
}

// Move Constructor
Move::Move(Move&& source) noexcept
	//: data{ source.data } // COPYING THE SOURCE DATA 
{
	data = source.data;
	source.data = nullptr; // AND NULLING OUT THE POINTER.
	cout << "Move constructor - moving resource: " << *data << endl;
}

Move::~Move() {
	if (data != nullptr) {
		cout << "Descructor freeing data for: " << *data << endl;
	}
	else {
		cout << "Destructor freeing data for nullptr. " << endl;
	}
	delete data;
}

int main() {

	vector <Move> vec;

	vec.push_back(Move{ 20 }); // STEP 1) creates a temporary object through the constructor i.e. an R VALUE.
	                           // STEP 2) Without Move Constructors, the temporary object must be copied 
	                           //         through the copy constructor into the vector.
	                           // STEP 2*) As the data is temporary/r value it will move to the move constructor
	vec.push_back(Move{ 50 });
	vec.push_back(Move{ 10 });
	vec.push_back(Move{ 40 });
	vec.push_back(Move{ 50 });
	vec.push_back(Move{ 60 });
	vec.push_back(Move{ 70 });
	vec.push_back(Move{ 80 });
	
	return 0;
}
