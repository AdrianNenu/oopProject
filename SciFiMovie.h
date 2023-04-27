#pragma once
#include <iostream>
#include <string>
#include "Movie.h"
#include "MovieTrailer.h"

class SciFiMovie: public Movie {
public:
	std::string director;
	std::string language;

	//display function:
	void Display() {
		std::cout << "Sci-Fi class called:" << std::endl;
		std::cout << "Movie director: " << director << std::endl;
		std::cout << "Movie language: " << language << '\n' << std::endl;
	}

	//default constructor:
	SciFiMovie();

	//constructor with 2 parameters:
	SciFiMovie(std::string movieDirector, std::string movieLanguage) {
		director = movieDirector;
		language = movieLanguage;
	}

	//destructor:
	~SciFiMovie() {}
};
