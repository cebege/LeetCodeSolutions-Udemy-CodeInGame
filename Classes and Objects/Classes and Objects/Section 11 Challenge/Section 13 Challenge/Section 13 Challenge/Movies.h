#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include <string>
#include "Movie.h"

// Movies is a collection of movie objects in a standard vector class.

using namespace std;

class Movies
{
private:
	vector <Movie> movies;

public:
	Movies();
	~Movies();

	bool add_movie1(string name, string movie_rating, int watched);
	bool increment_watched1(string name);
	void display()const;
};

#endif