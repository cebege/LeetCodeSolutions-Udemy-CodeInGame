#include <iostream>
#include "Movies.h"

using namespace std;

void increment_watched(Movies& movies, string name);
void add_movie(Movies& movies, string name, string rating, int watched);

void increment_watched(Movies& movies, string name)
{
	if (movies.increment_watched1(name)) {
		cout << name << " watch incremented." << endl;
	}
	else {
		cout << name << " not found " << endl;
	}
}

void add_movie(Movies& movies, string name, string rating, int watched)
{
	if (movies.add_movie1(name, rating, watched)) {
		cout << name << " added." << endl;
	}
	else {
		cout << name << " already exists." << endl;
	}
}

int main() {

	Movies my_movies;

	add_movie(my_movies, "Big", "PG-13", 2);
	add_movie(my_movies, "Star Wars", "PG", 5);
	add_movie(my_movies, "Cinderella", "PG", 7);
	add_movie(my_movies, "Cinderella", "PG", 7);
	add_movie(my_movies, "Titanic", "PG", 7);


	my_movies.display();

	increment_watched(my_movies, "Cinderella");

	my_movies.display();


	return 0;
}