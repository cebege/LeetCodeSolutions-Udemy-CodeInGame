

#include <iostream>

using namespace std;

int main() {

	int high_score{ 100 };
	int low_score{ 65 };

	// Pointers to Const

	const int* score_ptr{ &high_score };

	*score_ptr = 86; // ERROR
	score_ptr = &low_score;

	// Constant Pointers

	int high_temp{ 100 };
	int low_temp{ 30 };

	int *const temp_ptr{ &high_temp };

	*temp_ptr = 86;
	temp_ptr = &low_score; // ERROR

	// Constant pointer to constants

	int high_length{ 100 };
	int low_length{ 30 };

	const int* const length_ptr{ &high_length };

	*length_ptr = 86; // ERROR
	length_ptr = &low_score; // ERROR



}