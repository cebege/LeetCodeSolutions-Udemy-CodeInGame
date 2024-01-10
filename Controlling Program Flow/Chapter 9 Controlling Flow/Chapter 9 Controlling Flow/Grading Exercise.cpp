#include <iostream>

using namespace std;

int main() {
	cout << "Please enter your exam score: "; 
	int exam_score;
	cin >> exam_score;
	char letter_grade;

	if (exam_score >= 0 && exam_score <= 100)
	{
		if (exam_score >= 80)
		{
			letter_grade = 'A';
		}
		else if (exam_score >= 70)
		{
			letter_grade = 'B';
		}
		else if (exam_score >= 60)
		{
			letter_grade = 'C';
		}
		else
		{
			letter_grade = 'F';
		}
		
		cout << "You achieved an " << letter_grade << "." << endl;

		if (letter_grade == 'A')
		{
			cout << "Congratulations you have passed the test!" << endl;
		}
		else if (letter_grade == 'B')
		{
			cout << "Congratulations you have passed the test!" << endl;
		}
		else if (letter_grade == 'C')
		{
			cout << "Congratulations you have passed the test!" << endl;
		}
		else
		{
			cout << "I am sorry, you have failed the test." << endl;
		}
	}
	else
	{
		cout << "The score you have entered is outside the exam score range.";
	}
}