#pragma once
#include <iostream>
#include <string>
#include "actionmovie.h"
#include "trailer.h"

class ActionAdventureMovie: public ActionMovie {
public:
	std::string franchise;
	std::string awards;
	void display() {
		std::cout << "Action-Adventure Movie class called." << std::endl;
		std::cout << "Movie franchise: " << franchise << std::endl;
		std::cout << "Awards recieved: " << awards << '\n' << std::endl;
	}

	//default constructor:
	ActionAdventureMovie();

	//constructor with 2 parameters:
	ActionAdventureMovie(std::string movieFranchise, std::string movieAwards) {
		franchise = movieFranchise;
		awards = movieAwards;

	}

	//destructor:
	~ActionAdventureMovie() {}
};