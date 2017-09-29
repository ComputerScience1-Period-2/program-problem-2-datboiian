/*Ian Williams - 9/25/17 - 2nd
Data Acceptance
Create user Questions to take in data
*/

#include <iostream>
#include <conio.h>
#include <windows.h>


using namespace std;

void pause() {
	cout << "Press any key to continue . . . " << endl;
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//Main 
void main() {
	int times_died_irl;
	char choice_answer;
	// set bool to false and assume they didn't choose 'A'
	bool answersMatcheds = false;
	double piGuess;
	int calc_1, calc_2, calc_3, calc_4, calc_5; //  hold int values for calculation

	cout << "How many times have you died \"in real life\" : ";
	cin >> times_died_irl;
	cout << "What answer did you get on the quiz for number 13 (a/b/c/d) : ";
	cin >> choice_answer;
	if (choice_answer == 'a' || choice_answer == 'A') {
		answersMatcheds = true;
	}
	cout << "What is pi : ";
	cin >> piGuess;

	cout << "Give me three random whole numbers : " << endl;
	cout << "Number 1 : ";
	cin >> calc_1;
	cout << "Number 2 : ";
	cin >> calc_2;
	cout << "Number 3 : ";
	cin >> calc_3;

	//After questions print out stored data
	cout << "I think you should be dead, dying " << times_died_irl << " times is too many times to be alive ." << endl;
	cout << boolalpha << "I think that is " << answersMatcheds << " for number 2" << endl;
	cout << "So you think Pi is : " << piGuess << endl;

	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl; // math as output
	calc_4 = calc_2 * calc_3;
	cout << calc_2 << " * " << calc_3 << " = " << calc_4 << endl;

	pause();
}

