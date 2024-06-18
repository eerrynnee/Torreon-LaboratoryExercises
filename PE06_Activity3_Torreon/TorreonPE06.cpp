/*  File: TorreonPE06.cpp
    This program relies on the users to input information about a movie, including its title, synopsis,
    MPAA rating, genre, director(s), and actor(s)/actress(es). 
    This program creates an object of class 'Movie' and displays the details of the movie.
*/

#include <iostream>
#include <sstream> // Include for stringstream
#include "Person.h" // Include Person.h as a library
#include "Movie.h" // Include Movie.h as a library
using namespace std;

int main() {
    // Variables to store information about a movie
    string title, synopsis, mpaa_rating, genre_input; 
    string director_first_name, director_last_name, director_gender;
    string actor_first_name, actor_last_name, actor_gender;

    // Program details
    cout << "\nThis program prompts the user to input details of a movie (title, synopsis, MPAA rating, genre, director(s), and actor(s)/actress(es)) and then displays the inputted movie details.\n";
    cout << "Programmed by: Ericka Gwynne S. Torreon";

    // Prompts the user to input movie details
    cout << "\n\nEnter Movie Title: ";
    getline(cin, title);

    cout << "Enter Synopsis: ";
    getline(cin, synopsis);

    cout << "What is its MPAA Rating: ";
    getline(cin, mpaa_rating);

    cout << "What is the Genre (separate multiple genres with commas): ";
    getline(cin, genre_input);

    stringstream ss(genre_input);

    // Extract genres and store them in a list
    list<string> genres;
    string genre;
    while (getline(ss, genre, ',')) {
        genres.push_back(genre);
    }

    // Prompts the user to input the name and gender of director(s)
    cout << "Who is the Director: " << endl;
    list<Person> directors;
    string add_director;
    do {
        cout << "Enter Director's First Name: ";
        getline(cin, director_first_name);
        cout << "Enter Director's Last Name: ";
        getline(cin, director_last_name);
        cout << "Enter Director's Gender: ";
        getline(cin, director_gender);

        directors.push_back(Person(director_first_name, director_last_name, director_gender));

        cout << "Do you want to add another director? (y/n): ";
        getline(cin, add_director);
    } while (add_director == "y" || add_director == "Y");

    // Prompts the user to input the name and gender of actor(s)
    cout << "Who is the main Actor/actress: " << endl;
    list<Person> actors;
    string add_actor;
    do {
        cout << "Enter Actor's First Name: ";
        getline(cin, actor_first_name);
        cout << "Enter Actor's Last Name: ";
        getline(cin, actor_last_name);
        cout << "Enter Actor's Gender: ";
        getline(cin, actor_gender);

        actors.push_back(Person(actor_first_name, actor_last_name, actor_gender));

        cout << "Do you want to add another actor? (y/n): ";
        getline(cin, add_actor); // Use getline to read the entire input
    } while (add_actor == "y" || add_actor == "Y");

    // Create Movie object
    Movie movie(title, synopsis, mpaa_rating, genres, directors, actors);

    // Display Movie details based on the user input
    cout << "\nMOVIE DETAILS\n";
    cout << "Movie Title: " << movie.getTitle() << "\n";
    cout << "Synopsis: " << movie.getSynopsis() << "\n";
    cout << "MPAA Rating: " << movie.getMpaaRating() << "\n";
    cout << "Genre(s): ";
    int numGenres = genres.size();
    int i = 0;
    for (const string& genre : genres) {
        cout << genre;
        if (++i < numGenres) {
            cout << ", ";
        }
    }
    cout << "\n";

    // Print out director(s)
    cout << "Director(s): ";
    int numDirectors = directors.size();
    i = 0;
    for (const Person& director : movie.getDirectors()) {
        cout << director.getFirstName() << " " << director.getLastName();
        if (++i < numDirectors) {
            cout << ", ";
        }
    }
    cout << "\n";

    // Print out actor(s)
    cout << "Actor(s): ";
    int numActors = actors.size();
    i = 0;
    for (const Person& actor : movie.getActors()) {
        cout << actor.getFirstName() << " " << actor.getLastName();
        if (++i < numActors) {
            cout << ", ";
        }
    }
    cout << "\n";

    return 0;
}
