/*Whale Lab
Programmer: Drew Welbourn
Purpose: To determine how long until the "Right" whale becomes extinct.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int year, alive, birth, killed, leftovers;

	year = 1, alive = 1500, birth = (alive*.05), killed = (birth + alive)*.17, leftovers = (alive + birth) - killed;  // Formulas for calculation the whale decline based on ther perimeters of the lab

	cout << "Year" << setw(4) << ' ' << "Right Whales Alive" << setw(4) << ' ' << "Rigth Whales Birthed" << setw(4) << ' ' << "Right Whales Killed" << setw(4) << ' ' << "Right Whales Remaining" << endl;  // Table heading
	cout << "----" << setw(4) << ' ' << "------------------" << setw(4) << ' ' << "--------------------" << setw(4) << ' ' << "-------------------" << setw(4) << ' ' << "----------------------" << endl; // Heading "underlines"

	cout << year << setw(12) << ' ';
	cout << alive << setw(24) << ' ';
	cout << birth << setw(22) << ' ';
	cout << killed << setw(20) << ' ';
	cout << leftovers << "\n" << endl;


	// First year whale calculations

	while (leftovers >= 165)
	{

		alive = leftovers;
		birth = (alive*.05);
		killed = (birth + alive)*.17;
		leftovers = (alive + birth) - killed;
		year = year++;


		cout << year << setw(12) << ' ';
		cout << alive << setw(24) << ' ';
		cout << birth << setw(22) << ' ';
		cout << killed << setw(20) << ' ';
		cout << leftovers << "\n" << endl;

	}

	// Loop to count until whale population drops below extinction threshold

	cout << "\n\"After " << year << " years the Right Whales have passed the extinction threshold.\"\n\n" << endl;



	return 0;
}