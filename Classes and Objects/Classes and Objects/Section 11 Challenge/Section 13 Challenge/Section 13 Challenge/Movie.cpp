#include <iostream>
#include "Movie.h"
#include <string>

using namespace std;

Movie::Movie(string name, string rating, int watched)
	: name{ name }, movie_rating{ rating }, watched{ watched }{};

Movie::Movie(const Movie& source)
	: name(source.name), movie_rating(source.movie_rating), watched(source.watched) {};

Movie::~Movie() {};

void Movie::display () const {
	cout << name << ", " << movie_rating << ", " << watched << endl;
}