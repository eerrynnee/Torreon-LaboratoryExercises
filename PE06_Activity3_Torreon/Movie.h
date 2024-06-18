/* File: Movie.h
    This file define the 'Movie' class which represents a movie with attributes such as title, synopsis, MPAA rating,
    genre, directors, and actors. It includes constructors, setter methods, and getter methods. It also contains a built-in list
    to allow for flexible management of varying numbers of directors and actors.
*/
#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <list> // Include list header
#include "Person.h" // Inlcude Person.h as a library
using namespace std;

// Define class 'Movie'
class Movie {
private: // Private attributes of class 'Movie'
    string title;
    string synopsis;
    string mpaa_rating;
    list<string> genre; // Use std::list for dynamic collection of genres
    list<Person> directors; // Use std::list for dynamic collection of directors
    list<Person> actors;    // Use std::list for dynamic collection of actors

public: // Public attributes of class 'Movie'
    // Constructor to initialize the 'Movie' object
    Movie(string t, string s, string m, const list<string>& g, const list<Person>& d, const list<Person>& a) {
        title = t;
        synopsis = s;
        mpaa_rating = m;
        genre = g;
        directors = d;
        actors = a;
    }

    // Setter methods for individual attributes
    void setTitle(string t) {
        title = t;
    }

    void setSynopsis(string s) {
        synopsis = s;
    }

    void setMpaaRating(string m) {
        mpaa_rating = m;
    }

    void setGenre(const list<string>& g) {
        genre = g;
    }

    // Getter methods for individual attributes
    string getTitle() const {
        return title;
    }

    string getSynopsis() const {
        return synopsis;
    }

    string getMpaaRating() const {
        return mpaa_rating;
    }

    const list<string>& getGenre() const {
        return genre;
    }

    // Getter methods for directors and actors lists
    const list<Person>& getDirectors() const {
        return directors;
    }

    const list<Person>& getActors() const {
        return actors;
    }
};

#endif // MOVIE_H
