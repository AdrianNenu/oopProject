#pragma once
#include <iostream>
#include <string>
#include "Movie.h"
#include "MovieTrailer.h"

class ActionMovie: public Movie {
protected:
	std::string studio;
	
public:
	int budget;
	int boxOffice;

	void Display() {
		std::cout << "Action Movie class called:" << std::endl;
		std::cout << "Movie budget: " << budget << std::endl;
		std::cout << "Movie box office " << boxOffice << std::endl;
		std::cout << "Movie Studio: " << studio << '\n' << std::endl;
	}

	//default constructor:
	ActionMovie();

	//constructor with 2 parameters:
	ActionMovie(int moviebudget, int movieBoxOffice, std::string movieStudio) {
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
