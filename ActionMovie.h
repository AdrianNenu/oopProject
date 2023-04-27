#pragma once
#include <iostream>
#include <string>
#include "Movie.h"
#include "MovieTrailer.h"
using namespace std;

class ActionMovie: public Movie {
protected:
	string studio;
	
public:
	int budget;
	int boxOffice;

	void Display() {
		cout << "Action Movie class called:" << endl;
		cout << "Movie budget: " << budget << endl;
		cout << "Movie box office " << boxOffice << endl;
		cout << "Movie Studio: " << studio << '\n' << endl;
	}

	//default constructor:
	ActionMovie();

	//constructor with 2 parameters:
	ActionMovie(int moviebudget, int movieBoxOffice, string movieStudio) {
		budget = moviebudget;
		boxOffice = movieBoxOffice;
		studio = movieStudio;
	}

	//method inherited from movieTrailer class:
	void ActionMovieMethod() {
		MovieTrailer::MovieTrailerMethod();
	}

	//destructor:
	virtual ~ActionMovie() {};
};
