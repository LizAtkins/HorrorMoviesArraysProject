// Elizabeth Atkins
// 10/11/2022
// Fall Midterm Project

#include <iostream>
#include <windows.h>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;


struct Movie {
	string name;
	int releaseYear;
	double boxOfficeSales;
};

// Sound functions
void littleShopOfHorrors();
void theShining();
void beetleJuice();
void theStepFather();
void ghostBusters();
void poltergeist();
void evilDead(); 
void fridayThe13();
void gremlins();
void aliens();
void thething();
void frightnight();
void nightmareonelm();
void childsplay();
void creepshow();

// Menu functions
void searchMovie(Movie); // Uses a structure to list data about the movie array
void newMovieName(); // Creates a new movie name based on the array of movies
void searchStartChar(string[], int); // Searches for a movie based on starting character
void sortMovieTitles(string[], int); // Sorts the movie titles in alphabetical order
void highestScore(string title[], int ratings[15][2], int, int); // Shows the highest score from rotten tomatoes / metacritic reviews
void displayMovieScore(string title[], int ratings[15][2], int, int); // Displays a movie score for a specific movie
int movieMenu(); // Menu that loops 



int main() {

	const int SIZE = 15;
	const int ROW = 15;
	const int COL = 2;
	int selection = 0;
	string title[SIZE] = { "The Shining", "Poltergeist", "Ghostbusters", "Little Shop of Horrors", "Gremlins", "The Evil Dead", "The Stepfather", "Child's Play", "Beetlejuice", "Creepshow", "Aliens", "Friday The 13th", "A Nightmare on Elm Street", "The Thing", "Fright Night"};
	int ratings[15][2] = { { 82, 66 }, { 87, 79 }, { 97, 71 }, { 90, 81 }, { 86, 70 }, { 95, 71 }, { 89, 72 }, { 71, 58 }, { 85, 70 }, { 65, 59 }, { 98, 84 }, { 63, 22 }, { 95, 76 }, { 83, 57 }, { 81, 62 } };
	// Rotten tomatoes tomatometer, Metacritic metascore
	Movie temp;
	



	cout << "\n Welcome to the 80s Classic Horror Films Catalog\n";											
	cout << " ------------------------------------------------";
	cout << "\n Fall season is upon is, and Halloween is just around the corner. ";					
																								
	cout << "\n What better way to celebrate than with a C++ Program about one of the best decades of horror movies?";
	cout << "\n To learn more, choose a selection from the menu below." << endl;


	cout << endl;

	cout << "\n         ^ ^		";					cout << "\t ^ ^		";
	cout << "\n    / \\__{^^}__/ \\ ";				cout << "\t    / \\__{^^}__/ \\ ";
	cout << "\n   / _          _ \\ ";				cout << "\t   / _          _ \\ ";
	cout << "\n\\ /   \\ /\\ww/ \\ /  \\ /";		cout << "\t\\ /   \\ /\\ww/ \\ /  \\ /";

	cout << endl << endl;


	do {
		selection = movieMenu();


		switch (selection) {
		case 1: searchMovie(temp); 
			break;
		case 2: highestScore(title, ratings, ROW, COL);
			break;
		case 3: searchStartChar(title, SIZE);
			break;
		case 4: newMovieName();
			break;
		case 5: displayMovieScore(title, ratings, ROW, COL);
			break;
		case 6: sortMovieTitles(title, SIZE);
			break;
		case 7: cout << " Have a happy halloween! ";
			break;
		default: cout << "Please enter a valid selection:";
			break;
		}
	} while (selection >= 1 && selection < 7);



	cout << endl << endl;
	system("pause");
	return 0;
}

int movieMenu() {

	int selection = 0;

	cout << "\n1. Display movie details and hear a short audio clip from the film!";
	cout << "\n2. Display the movie with the highest rating"; 
	cout << "\n3. Search list of movies by starting character";
	cout << "\n4. Generate a new movie name using the catalog titles";
	cout << "\n5. View rotten tomato and metacritic score for a movie";
	cout << "\n6. Sort movies in alphabetical order *must be done last*";
 	cout << "\n7. Quit menu"; 
	cout << endl;

	cin >> selection;


	while (selection < 1 || selection > 7)
	{
		cout << "Invalid choice. Try again: ";
		cin >> selection;
	}

	return selection;


}

void searchMovie(Movie n) {
	int choice;

	cout << "\n Type in the number of the movie to view details and hear a movie clip: " << endl << endl;
	cout << "\n 1. The Shining ";
	cout << "\n 2. Poltergeist";
	cout << "\n 3. Ghostbusters";
	cout << "\n 4. Little Shop of Horrors";
	cout << "\n 5. Gremlins";
	cout << "\n 6. The Evil Dead";
	cout << "\n 7. The Stepfather";
	cout << "\n 8. Child's Play";
	cout << "\n 9. Beetlejuice";
	cout << "\n 10. Creepshow";
	cout << "\n 11. Aliens";
	cout << "\n 12. Friday The 13th";
	cout << "\n 13. A Nightmare on Elm Street";
	cout << "\n 14. The Thing";
	cout << "\n 15. Fright Night";

	cin >> choice;


	switch (choice) {

	case 1 : n.name = "The Shining";
		n.releaseYear = 1984;
		n.boxOfficeSales = 45.6;
		theShining();
		break;
	case 2: n.name = "Poltergeist";
		n.releaseYear = 1982;
		n.boxOfficeSales = 121.7;
		poltergeist();
		break;
	case 3:  n.name = "Ghostbusters";
		n.releaseYear = 1984;
		n.boxOfficeSales = 295.2;
		ghostBusters();
		break;
	case 4: n.name = "Little Shop of Horrors";
		n.releaseYear = 1986;
		n.boxOfficeSales = 39;
		littleShopOfHorrors();
		break;
	case 5: n.name = "Gremlins";
		n.releaseYear = 1984;
		n.boxOfficeSales = 212.9;
		gremlins();
		break;
	case 6: n.name = "The Evil Dead";
		n.releaseYear = 1981;
		n.boxOfficeSales = 29.4;
		evilDead();
		break;
	case 7: n.name = "The Step Father";
		n.releaseYear = 1987;
		n.boxOfficeSales = 31.2;
		theStepFather();
		break;
	case 8: n.name = "Child's Play";
		n.releaseYear = 1988;
		n.boxOfficeSales = 33.2;
		childsplay();
		break;
	case 9: n.name = "Beetlejuice";
		n.releaseYear = 1988;
		n.boxOfficeSales = 74.8;
		beetleJuice();
		break;
	case 10: n.name = "Creepshow";
		n.releaseYear = 1982;
		n.boxOfficeSales = 21;
		creepshow();
		break;
	case 11: n.name = "Aliens";
		n.releaseYear = 1986;
		n.boxOfficeSales = 184.7;
		aliens();
		break;
	case 12: n.name = "Friday The 13th";
		n.releaseYear = 1980;
		n.boxOfficeSales = 65;
		fridayThe13();
		break;
	case 13: n.name = "A Nightmare On Elm Street";
		n.releaseYear = 1984;
		n.boxOfficeSales = 63;
		nightmareonelm();
		break;
	case 14: n.name = "The Thing";
		n.releaseYear = 1982;
		n.boxOfficeSales = 19.6;
		thething();
		break;
	case 15: n.name = "Fright Night";
		n.releaseYear = 1985;
		n.boxOfficeSales = 24.9;
		frightnight();
		break;
	default: cout << " Invalid input. Try again.";
		break;
	}
	cout << "\n Name: " << n.name << "\n" << " Release Year: " << n.releaseYear << "\n" << " Box Office Sales: " << n.boxOfficeSales << " million " << "\n";


}

void searchStartChar(string title[], int size) {
	char letter;
	int counter = 0;
	cout << " Enter a capital letter for the list of movies: ";
	cin >> letter;


	for (int i = 0; i < size; i++) {
	   
		if (title[i].at(0) == letter) {
			counter++;
			cout << "\n" << " " << title[i];
		}
	}
	cout << "\n\n The letter " << letter << " has " << counter << " movie titles.\n ";

}

void sortMovieTitles(string title[], int size) {
	string temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (title[i] < title[j]) {
				temp = title[i];
				title[i] = title[j];
				title[j] = temp;
			}
		}
	}
	cout << "\n The movie titles in alphabetical order: " << endl << endl;
	for (int i = 0; i < size; i++) {
		cout << " " << title[i] << endl;
	}


}


void highestScore(string title[], int ratings[15][2], int rowsize, int colsize) {

	int highest_score = 0;
	string movie_title;

	for (int i = 0; i < rowsize; i++) {
		for (int j = 0; j < colsize; j++) {
			if (highest_score < ratings[i][j]) {
				highest_score = ratings[i][j];
				movie_title = title[i];
			}
		}
	}

	cout << "The movie with the highest rating is " << movie_title << " with a score of " << highest_score << "." << endl;
}

void newMovieName() {
	int num1;
	char str1[50];
	char str2[50];

	cout << " Choose a number 1-5 to randomly generate a new movie title from the horror catalog. ";
	cin >> num1;

	if (num1 < 1 || num1 > 5) {
		cout << " Invalid input. Try again: ";
		cin >> num1;
	}

	if (num1 == 1) {
		strncpy_s(str1, " Gremlins ", 15);
		strncpy_s(str2, "On Elm Street", 15);
		strncat_s(str1, str2, 15);
		puts(str1);
	}
	if (num1 == 2) {
		strncpy_s(str1, " Aliens ", 15);
		strncpy_s(str2, "The 13th", 15);
		strncat_s(str1, str2, 15);
		puts(str1);
	}
	if (num1 == 3) {
		strncpy_s(str1, " The Stepfather ", 15);
		strncpy_s(str2, " Poltergeist", 15);
		strncat_s(str1, str2, 15);
		puts(str1);
	}
	if (num1 == 4) {
		strncpy_s(str1, " Friday The ", 15);
		strncpy_s(str2, "Fright Night", 15);
		strncat_s(str1, str2, 15);
		puts(str1);
	}
	if (num1 == 5) {
		strncpy_s(str1, " Little Shop Of ", 15);
		strncpy_s(str2, " Ghostbusters", 14);
		strncat_s(str1, str2, 15);
		puts(str1);
	}
}

void displayMovieScore(string title[], int ratings[15][2], int rowsize, int colsize) {
	string movie;
	string name;
	int score1 = 0;
	int score2 = 0;

	cout << " Enter the name of the movie you would like the rating of: ";
	cin.ignore();
	getline(cin, movie);


	for (int i = 0; i < rowsize; i++) {
		for (int j = 0; j < colsize; j++) {
			if (movie == title[i]) {
				movie = title[i];
				score1 = ratings[i][0];
				score2 = ratings[i][j];
				cout << endl;
			}
		}
	}
	cout << " The movie" << name << " scores: ";
	cout << "\n Rotten Tomatoes: " << score1;
	cout << "\n Metacritic: " << score2 << "\n";
	
}



void littleShopOfHorrors() {
	PlaySound(TEXT("littleshopofhorrors.wav"), NULL, SND_ASYNC);
}
void theShining() {
	PlaySound(TEXT("theshining.wav"), NULL, SND_ASYNC);
}
void beetleJuice() {
	PlaySound(TEXT("beetlejuice.wav"), NULL, SND_ASYNC);

}
void theStepFather() {
	PlaySound(TEXT("stepfather.wav"), NULL, SND_ASYNC);

}
void ghostBusters() {
	PlaySound(TEXT("ghostbusters.wav"), NULL, SND_ASYNC);
}
void poltergeist() {
	PlaySound(TEXT("poltergeist.wav"), NULL, SND_ASYNC);

}
void evilDead() {
	PlaySound(TEXT("evildead.wav"), NULL, SND_ASYNC);

}
void fridayThe13() {
	PlaySound(TEXT("fridaythe13.wav"), NULL, SND_ASYNC);

}
void gremlins() {
	PlaySound(TEXT("gremlins.wav"), NULL, SND_ASYNC);

}
void aliens() {
	PlaySound(TEXT("aliens.wav"), NULL, SND_ASYNC);

}
void thething() {
	PlaySound(TEXT("thething.wav"), NULL, SND_ASYNC);

}
void frightnight() {
	PlaySound(TEXT("frightnight.wav"), NULL, SND_ASYNC);

}
void nightmareonelm() {
	PlaySound(TEXT("nightmareonelm.wav"), NULL, SND_ASYNC);

}
void childsplay() {
	PlaySound(TEXT("childsplay.wav"), NULL, SND_ASYNC);

}
void creepshow() {
	PlaySound(TEXT("creepshow.wav"), NULL, SND_ASYNC);
}
