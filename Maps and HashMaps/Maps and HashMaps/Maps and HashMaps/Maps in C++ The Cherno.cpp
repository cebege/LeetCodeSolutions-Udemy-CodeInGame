// Creating a map using functions.

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

struct city_record // function to hold city data types
{
	string name; // i.e. the key.
	int population;
	double latitude, longitude;
};

int main()
{
	unordered_map <string, city_record> city_map;

	city_map["Melbourne"] = city_record{ "Melbourne", 500000, 2.4, 2.6 };
	city_map["Lol-town"] = city_record{ "Lol-town", 500000, 2.4, 2.6 };
	city_map["London"] = city_record{ "London", 500000, 2.4, 2.6 };
	city_map["Paris"] = city_record{ "Paris", 500000, 2.4, 2.6 };
	city_map["Berlin"] = city_record{ "Berlin", 500, 2.4, 2.6 };


	city_record berlin_data = city_map["Berlin"];
	cout << berlin_data.latitude;

}