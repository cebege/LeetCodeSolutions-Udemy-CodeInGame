#include <iostream>
#include <vector>

using namespace std;

class Move
{
private:
	int* data;

public:
	void set_data(int data_value) { *data = data_value; }
	int get_data() { return *data; }
	Move(int data_value = 100);
	Move(const Move& source);
	Move(Move&& source);
	~Move();
}

Move::Move(int data_value)
{
	data = new int;
	*data = data_value;
}

Move::Move(const Move& source)
{
	Move{ *source.data };
}

Move::Move(Move&& source)
{
	data = source.data;
	source.data = nullptr;
}