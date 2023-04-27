#pragma once
#include <iostream>
#include <string>
#include "MovieTrailer.h"
using namespace std;

class Movie {
private:
    string name;
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
    void setName(string s) {
        name = s;
    }
    string getName() {
        return name;
    }

    // static attribute
    static int objectCount;


    //Default constructor
    Movie(){
        objectCount++;
    }

    // Constructor that uses 5 parameters
    Movie(string movie_name, int movie_lenght, int movie_year, double movie_price, int movie_freeSeats) :
    name{ "Null" }, lenght{ 0 }, year{ 0 }, price{ 0 }, freeSeats{ 0 } {
        name = movie_name;
        lenght = movie_lenght;
        year = movie_year;
        price = movie_price;
        freeSeats = movie_freeSeats;

        //incrementing the static attribute:
        objectCount++;
    }
    //constructor that uses 3 parameters, delegation, and the pointer this:
    Movie(string movie_name, int movie_lenght, int year) : Movie() {
        cout << "constructor cu 3 parametrii: " << endl;
        name = movie_name;
        lenght = movie_lenght;
        this->year = year;
        price = 0;
        freeSeats = 0;

        //incrementing the static attribute:
        objectCount++;
    }



    //display function
    void Display() {
        cout << "Name of movie: " << name << endl;
        cout << "lenght: " << lenght << endl;
        cout << "year :" << year << endl;
        cout << "price: " << price << endl;
        cout << "number of free seats: " << freeSeats << endl << endl;
    }

    //destructor:
    ~Movie() {
        cout << "apelarea destructorului de catre: " << name << endl;
    }
};
