#pragma once
#include <iostream>
#include <string>
#include "Movie.h"
#include "ActionMovie.h"
#include "MovieTrailer.h"
#include "SciFi.h"
#include "ActionAdventureMovie.h"
using namespace std;

//static attribute initialization:
int Movie::objectCount = 0;

class Main
{
public:
    void main()
    {
        //using set and get methods:
        Movie setGetObject;
        SetGetObject.setName("2001: A Space Oddysey");
        cout << setGetObject.getName() << endl;

        Movie movieClassObject;
        //constructors for the class "Movie":
        Movie inceptionMovie{ "Inception", 148, 2010, 24.99, 150 };
        inceptionMovie.Display();

        Movie theDarkKnightObject("The Dark Knight", 152, 2008);
        theDarkKnightObject.Display();

        //Display the static attribute:
        cout << "Total objects: " << Movie::objectCount << '\n' << '\n';

        //Constructors and displaying for the other classes:
        ActionMovie actionMovieObject{ 1000000, 3500000, "20th Century Fox" };
        actionMovieObject.Display();
        SciFiMovie sciFiMovieObject{ "Stanley Kubrik", "English" };
        sciFiMovieObject.Display();
        ActionAdventureMovie actionAdventureObject{ "Indiana Jones", "Best visual" };
        actionAdventureObject.Display();
        MovieTrailer movieTrailerObject;
        movieTrailerObject.DisplayTrailer();

        //Calling the method from MovieTrailer class through the ActionMovie class, using inheritance and composition:
        actionMovieObject.ActionMovieMethod();
    }
};

int main() {
    //creating an Object of the class Main, and calling the main function:
    Main myProject;
    myProject.main();
}
