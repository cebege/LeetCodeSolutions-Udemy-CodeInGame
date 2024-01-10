#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	string alphabet{ "[ abcdefghoijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string key{ " [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwbebgjhqdyvtkfuompciasr" };
	string secret_message{};
	string encrypted_message{};

	
	cout << "Please enter a secret message: ";
	getline(cin, secret_message);

	for (char c : secret_message) { // c = set current character in the secret message.
		size_t position = alphabet.find(c); // create a position and locater
		if (position != string::npos)
		{
			char new_char{ key.at(position) }; // new character from key to insert at position
			encrypted_message += new_char; // input new character
		}
		else
		{
			encrypted_message += c; // remains new character
		}
	}

	cout << "Your secret message was: ";
	cout << encrypted_message;
	cout << endl;

	string decrypted_message{};

	cout << "Decrypting message..." << endl;

	for (char c : encrypted_message)
	{
		size_t position = key.find(c);
		if (position != string::npos)
		{
			char new_char{ alphabet.at(position) };
			decrypted_message += new_char;
		}
		else
		{
			decrypted_message += c;
		}
	}
	
	cout << decrypted_message;




}