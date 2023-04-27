#pragma once
#include <iostream>
#include <string>
using namespace std;

class MovieTrailer {
public:
	int trailerLenght;
	int trailerViews;

	//display function:
	void DisplayTrailer() {
		cout << "Trailer lenght: " << trailerLenght << endl;
		cout << "Trailer views: " << trailerViews << endl;
	}

	//method that gets passed down to the other classes:
	static void MovieTrailerMethod() {
		cout << "Method called in the movieTrailer class " << endl;
	}

	//destructor:
	MovieTrailer();
};
