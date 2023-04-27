#pragma once
#include <iostream>
#include <string>
#include "Movie.h"
#include "MovieTrailer.h"
using namespace std;

class SciFiMovie: public Movie {
public:
	string director;
	string language;

	//display function:
	void Display() {
		cout << "Sci-Fi class called:" << endl;
		cout << "Movie director: " << director << endl;
		cout << "Movie language: " << language << '\n' << endl;
	}

	//default constructor:
	SciFiMovie();

	//constructor with 2 parameters:
	SciFiMovie(string movieDirector, string movieLanguage) {
		director = movieDirector;
		language = movieLanguage;
	}

	//destructor:
	~SciFiMovie() {}
};
