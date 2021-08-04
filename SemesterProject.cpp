
// Online Bookstore for Students
// 1.) Input: Reading Level (3 choices: beginner(1), intermediate (2), advanced
// (3) 2.) Input choice for genre (Adventure, Fantasy, Fiction, SciFi,
// Educational, thriller) Read in data based on user input from file
// (getBookListFile) Display book list based on user selections Add books to
// reading list (array) and write selections to file Option to return to main
// menu and choose different level/genre Required to select 5 books
//
// Function for Reading Level/Genre (nested Loop) Nora
// Function to read in list and store as an array: Shayla
// Function to output book choices (loop) : Ashley
// Function to store/output reading list: Ashley
// Debugging/finalizing: ALL
//

//

#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
// n: inserted a bunch of headers for right now
// n: I don't know exactly which ones we are using yet
// n: but I'd rather include them all now and get rid of
// n: what we don't need later

using namespace std;
ifstream inFile;
ofstream outFile;

const int row = 30;
const int col = 4;
const auto bookData = ("BookList.txt");

struct Book {
	int iLevel = 0;
	string sGenre;
	string sName;
	string sAuthor;
};

//Ashley wrote
void ShowUsage()
{
	cout << "To show program usage 'S' " << endl;
	cout << "To choose your reading level and genre press 'C' " << endl;
	cout << "To print your reading list press 'P' " << endl;
	cout << "To quit the program press 'Q' " << endl;
	cout << endl;
	cout << "Please enter a selection: ";
}


// Ashley started
bool getBookListFile(
	string bookData,
	Book books[30]
)

{
	inFile.open(bookData);
	if (inFile.is_open()) {
		for (int r = 0; r < row; r++) {
			inFile >> books[r].iLevel;
			inFile >> books[r].sGenre;
			inFile >> books[r].sName;
			inFile >> books[r].sAuthor;
			//for testing purposes cout shows below. will be commented out
			//cout << books[r].iLevel << " " << books[r].sGenre << " "
				//<< books[r].sName << " " << books[r].sAuthor << endl;
		}
	}

	return true;
}

///////////////////////////////////////////////
int getLevel()
{
  cout << "Welcome to our Book Store" << "Here we will help you prepare your summer reading list!" << endl;
  cout << "Please insert your reading level (1 for beginner, 2 for intermediate, 3 for advanced" << endl;
	//cout << "Please enter level: ";
	int level = 0;
	cin >> level;
	return level;
}
// nora: I can't remember/think of what the thing should be and what it should
// return so I set it as void for now.
////////////////////////////////////////////////////////////////////
string getGenre(int level, Book books[]) {
	// nora: set up and initalize variable
//	string readingLevel = "\0", beginner = "\0", intermediate = "\0",
//		   advanced = "\0";
//int readingLevel;

	//cout << "Welcome to our Book Store"
		// << "Here we will help you prepare your summer reading list!" << endl;
	// nora:  more text instructing how to use program
	// nora: if needed

//	cout << "Please insert your reading level (1 for beginner, 2 for "
		//	"Intermediate, 3 for Advances): ";

	//cin >> readingLevel;

	/*if (readingLevel == 1) {
		readingLevel = beginner;

	} else if (readingLevel == "I" || readingLevel == "i") {
		readingLevel = intermediate;
	} else if (readingLevel == "A" || readingLevel == "a") {
		readingLevel = advanced;
	}

	else if (
		readingLevel != "A" || readingLevel != "a" || readingLevel != "I" ||
		readingLevel != "i" || readingLevel != "B" || readingLevel != "b") {
		cout << "Invalid entry." << endl;
	}*/

	//return readingLevel;


	cout << "Here is the list of genres to choose from: " << endl;
	for (int i = 0; i < row; i++)
	{
		if (books[i].iLevel == level) {
			cout << books[i].sGenre << endl;
			//try to avoid duplicates if possible
		}
	}

	string genre;
	cout << "Choose a genre: ";
	cin >> genre;

	//add in checks for spelling 

	return genre;

	/*
		int i, x;

		char userChoice;

		for (i = 0; i == 1; i++) {
			if (readingLevel == beginner) {
				cout << "You are a beginner reader!"
					 << "Here is your book selection: " << endl;

				cout << sLevel[row].iLevel{0,1,2,3,4,5,6,7,8,9;};
				// select 0-9 in the array
		  //dont know exactly how to do this

				cout << "Please select which genre you'd like. (e.g. Adventure = "
						"'0', Fantasy = '1', Fiction = '2', SciFi = '3', "
						"Educational = '4', Thriller = '5')"
					 << endl;

				cin >> userChoice;

		  while(userChoice <= 5)
		  {

				switch (userChoice) {
				case 0: {
					cout << "Here are the available Adventure books: \n";
					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 1: {
					cout << "Here are the available Fantasy books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 2: {
					cout << "Here are the available Fiction books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 3: {
					cout << "Here are the available SciFi books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 4: {
					cout << "Here are the available Educational books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 5:

				{
					cout << "Here are the available Thriller books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}
				}
		  }
			}

			else if (readingLevel == intermediate) {
				cout << "You are an intermediate reader!"
					 << "Here is your book selection: " << endl;

				cout << sLevel[row].iLevel{10,11,12,13,14,15,16,17,18,19;};
				// select 10-19 in array

				cout << "Please select which genre you'd like. (e.g. Adventure = "
						"'0', Fantasy = '1', Fiction = '2', SciFi = '3', "
						"Educational = '4', Thriller = '5')"
					 << endl;

				cin >> userChoice;


	while(userChoice <= 5)
	{
				switch (userChoice) {
				case 0: {
					cout << "Here are the available Adventure books: \n";
					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 1: {
					cout << "Here are the available Fantasy books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 2: {
					cout << "Here are the available Fiction books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 3: {
					cout << "Here are the available SciFi books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 4: {
					cout << "Here are the available Educational books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 5:

				{
					cout << "Here are the available Thriller books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}
				}

			}
		}

			else if (readingLevel == advanced) {
				cout << "You are an advanced reader!"
					 << "Here is your book selection: " << endl;

				cout << sLevel[row].iLevel{20,21,22,23,24,25,26,27,28,29;};
				// select 20-29 in array

				cout << "Please select which genre you'd like. (e.g. Adventure = "
						"'0', Fantasy = '1', Fiction = '2', SciFi = '3', "
						"Educational = '4', Thriller = '5')"
					 << endl;

				cin >> userChoice;


	while (userChoice <= 5)
	{
				switch (userChoice) {
				case 0: {
					cout << "Here are the available Adventure books: \n";
					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 1: {
					cout << "Here are the available Fantasy books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 2: {
					cout << "Here are the available Fiction books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 3: {
					cout << "Here are the available SciFi books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 4: {
					cout << "Here are the available Educational books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}

				case 5:

				{
					cout << "Here are the available Thriller books: \n";

					cout << sGenre[row].sGenre[i] << "\t"
						 << "\n";
				}
				}
			}
		}
		}
	  */
}


// n: have the outputs be printed all nice and pretty??
void organizeText(Book readingList[]) {

	outFile.open("SummerReadingList.txt");
	for (int i = 0; i < 5; i++) {
		if (readingList[i].iLevel != 0) {
			cout << readingList[i].sName << " " << readingList[i].sAuthor << endl;
			outFile << readingList[i].sName << " " << readingList[i].sAuthor << endl;
		}
	}
	outFile.close();
}
void getReadingList(int level, string genre, Book books[], Book readingList[])
{
	for (int i = 0; i < 5; i++) {
		readingList[i].iLevel = 0;
		cout << endl;
	}
	char choice;
	int readinglistindex = 0;
	for (int i = 0; i < row; i++) {
		if (books[i].iLevel == level && books[i].sGenre == genre) {
			cout << books[i].sName << " " << books[i].sAuthor << endl;
			cout << "Do you want to add this to your reading list? Y/N " << endl;
			cin >> choice;

			if (choice == 'y' || choice == 'Y') {
				readingList[readinglistindex] = books[i];
				readinglistindex++;
			}
			
		}
	}
}
// n: main will apply our functions that are created
// n: above
int main() {
	Book books[30];
	Book readingList[5];


	getBookListFile(bookData, books);
	cout << " " << endl;
	ShowUsage();

	char selection;
	cin >> selection;


	//Ashley wrote
	while (selection != 'q' && selection != 'Q') {


		if (selection == 's' || selection == 'S') {
			ShowUsage();
			cout << endl;
		}


		else if (selection == 'c' || selection == 'C') {
			int level = getLevel();
			string genre = getGenre(level, books);
			getReadingList(level, genre, books, readingList);
			cout << endl;
		}


		else if (selection == 'p' || selection == 'P') {
			organizeText(readingList);
			cout << endl;
		}

		else
		{
			cout << "Invalid selection. Try again." << endl;

		}

		cout << "Please enter a selection: ";
		cin >> selection;




	}

	cout << "Enjoy your summer reading!" << endl;
	system("pause");
	return 0;
}