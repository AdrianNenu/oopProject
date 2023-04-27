#pragma once
#include <iostream>
#include <string>
#include "ActionMovie.h"
#include "MovieTrailer.h"
using namespace std;

class ActionAdventureMovie: public ActionMovie {
public:
	string franchise;
	string awards;
	void Display() {
		cout << "Action-Adventure Movie class called." << endl;
		cout << "Movie franchise: " << franchise << endl;
		cout << "Awards recieved: " << awards << '\n' << endl;
	}

	//default constructor:
	ActionAdventureMovie();

	//constructor with 2 parameters:
	ActionAdventureMovie(string movieFranchise, string movieAwards) {
		franchise = movieFranchise;
		awards = movieAwards;

	}

	//destructor:
	~ActionAdventureMovie() {}
};
