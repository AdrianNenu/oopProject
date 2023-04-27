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
        Movie SetGetObject;
        SetGetObject.setName("2001: A Space Oddysey");
        cout << SetGetObject.getName() << endl;

        Movie MovieClassObject;
        //constructors for the class "Movie":
        Movie InceptionMovie{ "Inception", 148, 2010, 24.99, 150 };
        InceptionMovie.display();

        Movie TheDarkKnightObject("The Dark Knight", 152, 2008);
        TheDarkKnightObject.display();

        //Display the static attribute:
        cout << "Total objects: " << Movie::objectCount << '\n' << '\n';

        //Constructors and displaying for the other classes:
        ActionMovie ActionMovieObject{ 1000000, 3500000, "20th Century Fox" };
        ActionMovieObject.display();
        SciFiMovie SciFiMovieObject{ "Stanley Kubrik", "English" };
        SciFiMovieObject.display();
        ActionAdventureMovie ActionAdventureObject{ "Indiana Jones", "Best visual" };
        ActionAdventureObject.display();
        MovieTrailer MovieTrailerObject;

        //Calling the method from MovieTrailer class through the ActionMovie class, using inheritance and composition:
        ActionMovieObject.ActionMovieMethod();
    }
};

int main() {
    //creating an Object of the class Main, and calling the main function:
    Main myProject;
    myProject.main();
}
