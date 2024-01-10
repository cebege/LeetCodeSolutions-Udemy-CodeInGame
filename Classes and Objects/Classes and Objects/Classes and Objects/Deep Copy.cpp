#include <iostream>

using namespace std;

class Deep
{
private:
	int* data; // pointer, same as shallow.

public:
	void set_data_value(int data_value) { *data = data_value; }
	int get_data_value() { return *data; }
	Deep(int data_value);
	Deep(const Deep& source);
	void display_deep(Deep s);
	~Deep();
};

Deep::Deep(int data_value) {
	data = new int;
	*data = data_value;
}

Deep::Deep(const Deep& source)
//data = new int; // CREATES NEW STORAGE 
//*data = *source.data; // CREATES NEW STORAGE FOR THE COPY, THEN MAKES COPY VALUES, NOT POINTING TO SAME DIRECTION.
// 	data = new int;
//* data = *source.data;
	:Deep{ *source.data } {
	cout << "Copy Constructor called - deep" << endl;
	}


Deep::~Deep() {
	delete data;
	cout << "Destructor has been called, freeing the data";
}

void display_deep(Deep s) {
	cout << s.get_data_value() << endl;
}

int main() {
	Deep data1{ 100 }; // Source, 
	display_deep(data1); // Copy, Source, Display Function, Get Data Function, Delete Data (Copy)
	data1.set_data_value(1000); // Set data function
	Deep data2{ data1 }; // Copy, Source


	return 0; // Data 2 deleted first, then data 1.
}