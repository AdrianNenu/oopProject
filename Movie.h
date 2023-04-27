#pragma once
#include <iostream>
#include <string>
#include "MovieTrailer.h"

class Movie {
private:
    std::string name;
    int lenght;
    int year;
    double price;
    int freeSeats;

protected:
    int imdbRating;
    int boxOffice;
    MovieTrailer trailerLenght; // movie has-a trailer (composition)

public:
    int roomNumber;
    int screeningDate;

    //setters and getters:
    void setName(std::string s) {
        name = s;
    }
    std::string getName() {
        return name;
    }

    // static attribute
    static int objectCount;


    //Default constructor
    Movie(){
        objectCount++;
    }

    // Constructor that uses 5 parameters
    Movie(std::string movie_name, int movie_lenght, int movie_year, double movie_price, int movie_freeSeats) : name{ "Null" }, lenght{ 0 }, year{ 0 }, price{ 0 }, freeSeats{ 0 } {
        name = movie_name;
        lenght = movie_lenght;
        year = movie_year;
        price = movie_price;
        freeSeats = movie_freeSeats;

        //incrementing the static attribute:
        objectCount++;
    }
    //constructor that uses 3 parameters, delegation, and the pointer this:
    Movie(std::string movie_name, int movie_lenght, int year) : Movie() {
        std::cout << "constructor cu 3 parametrii: " << std::endl;
        name = movie_name;
        lenght = movie_lenght;
        this->year = year;
        price = 0;
        freeSeats = 0;

        //incrementing the static attribute:
        objectCount++;
    }



    //display function
    void display() {
        std::cout << "Name of movie: " << name << std::endl;
        std::cout << "lenght: " << lenght << std::endl;
        std::cout << "year :" << year << std::endl;
        std::cout << "price: " << price << std::endl;
        std::cout << "number of free seats: " << freeSeats << std::endl << std::endl;
    }

    //destructor:
    ~Movie() {
        std::cout << "apelarea destructorului de catre: " << name << std::endl;
    }
};
