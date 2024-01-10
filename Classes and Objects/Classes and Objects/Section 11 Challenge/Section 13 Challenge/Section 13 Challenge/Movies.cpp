#include <iostream>
#include "Movies.h"
#include "Movie.h"

using namespace std;

Movies::Movies() {};

Movies::~Movies() {};

bool Movies::add_movie1(string name, string movie_rating, int watched)
{
	for (const Movie &movie : movies) // making sure the name and details of the movie cannot be changed.
	{
		if (movie.get_name() == name)
			return false; // the movie was found, we dont want to add again.
	}
	Movie temp{ name, movie_rating, watched };
	movies.push_back(temp);
	return true;
}

bool Movies::increment_watched1(string name)
{
	for (Movie& movie : movies) // a reference so we can change the movie i.e. the variable of how many times the movie has been watched.
	{
		if (movie.get_name() == name)
		{
			movie.increment_watched();
			return true;
		}
	}
	return false; // was not able to find the movie in the database.
}

void Movies::display()const {
	if (movies.size() == 0)
	{
		cout << "There are no movies to display." << endl;
	}
	else {
		cout << "The following movies are included in the database: " << endl;
		for (const auto & movie : movies)
		{
			movie.display();
		}
	}

}