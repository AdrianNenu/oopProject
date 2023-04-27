#pragma once
#include <iostream>
#include <string>

class MovieTrailer {
public:
	int trailerLenght;
	int trailerViews;

	//display function:
	void displayTrailer() {
		std::cout << "Trailer lenght: " << trailerLenght << std::endl;
		std::cout << "Trailer views: " << trailerViews << std::endl;
	}

	//method that gets passed down to the other classes:
	static void MovieTrailerMethod() {
		std::cout << "Method called in the movieTrailer class " << std::endl;
	}

	//destructor:
	MovieTrailer();
};