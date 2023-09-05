#include <iostream>
using namespace std;

char CharMatrixDraw[10] = { '0', '1', '2',
	'3', '4', '5',
	'6', '7', '8', '9' };
// i did used array for alocate some memory
int winner();
void GameChart(string, string);

/*Tic Tac Toe Game in C++ Project 

This program is divided into 3 Parts read a Full article  for understanding the full code ,I did 
########## i did creat this game for funny purpose  #############
1. Tic Tac Toe Game Chart draw.
2. Changing the Value of Tic Tac Toe Game Chart.
3. Check Win.

*/
int main()
{
	int Gamer = 1, i, choice;
	string name1;
	string name2;

	cout << "Enter First Gamer Name: ";
	cin >> name1;

	cout << "\nEnter Second Gamer Name: ";
	cin >> name2;

	char mark;

	do {
		GameChart(name1, name2);
		Gamer = (Gamer % 2) ? 1 : 2;

		if (Gamer == 1)
		{
			cout << name1 << " Your Turn, Enter a Number:  ";
			cin >> choice;
		}
		else
		{
			cout << name2 << " Your Turn, Enter a Number:  ";
			cin >> choice;
		}

	// #second#  #part# #is# #starting# #from# #here#

		mark = (Gamer == 1) ? 'X' : '0';

		if (choice == 1 && CharMatrixDraw[1] == '1')

			CharMatrixDraw[1] = mark;
		else if (choice == 2 && CharMatrixDraw[2] == '2')

			CharMatrixDraw[2] = mark;
		else if (choice == 3 && CharMatrixDraw[3] == '3')

			CharMatrixDraw[3] = mark;
		else if (choice == 4 && CharMatrixDraw[4] == '4')

			CharMatrixDraw[4] = mark;
		else if (choice == 5 && CharMatrixDraw[5] == '5')

			CharMatrixDraw[5] = mark;
		else if (choice == 6 && CharMatrixDraw[6] == '6')

			CharMatrixDraw[6] = mark;
		else if (choice == 7 && CharMatrixDraw[7] == '7')

			CharMatrixDraw[7] = mark;
		else if (choice == 8 && CharMatrixDraw[8] == '8')

			CharMatrixDraw[8] = mark;
		else if (choice == 9 && CharMatrixDraw[9] == '9')

			CharMatrixDraw[9] = mark;
		else
		{
			cout << "\nInvalid Choice Try Again ";
			Gamer--;
			cin.ignore();
			cin.get();
		}

		i = winner();
		Gamer++;
	} while (i == -1);
	GameChart(name1, name2);
	if (i == 1)
	{
		cout << "\n=============================\n";
		cout << "\a" << name1 << " Is A Winner \n";
		cout << "=============================\n";
	}
	else
	{
		cout << "\n=============================\n";
		cout << "\aGame Is Draw\n";
		cout << "=============================\n";
	}

	cin.ignore();
	cin.get();
	return 0;
}

// #second# #part# #is# #end# #here#


// #third#  #part# #is# #starting# #from# #here#

int winner()
{
	if (CharMatrixDraw[1] == CharMatrixDraw[2] && CharMatrixDraw[2] == CharMatrixDraw[3])

		return 1;
	else if (CharMatrixDraw[4] == CharMatrixDraw[5] && CharMatrixDraw[5] == CharMatrixDraw[6])

		return 1;
	else if (CharMatrixDraw[7] == CharMatrixDraw[8] && CharMatrixDraw[8] == CharMatrixDraw[9])

		return 1;
	else if (CharMatrixDraw[1] == CharMatrixDraw[4] && CharMatrixDraw[4] == CharMatrixDraw[7])

		return 1;
	else if (CharMatrixDraw[2] == CharMatrixDraw[5] && CharMatrixDraw[5] == CharMatrixDraw[8])

		return 1;
	else if (CharMatrixDraw[3] == CharMatrixDraw[6] && CharMatrixDraw[6] == CharMatrixDraw[9])

		return 1;
	else if (CharMatrixDraw[1] == CharMatrixDraw[5] && CharMatrixDraw[5] == CharMatrixDraw[9])

		return 1;
	else if (CharMatrixDraw[3] == CharMatrixDraw[5] && CharMatrixDraw[5] == CharMatrixDraw[7])

		return 1;
	else if (CharMatrixDraw[1] != '1' && CharMatrixDraw[2] != '2' && CharMatrixDraw[3] != '3' &&
		CharMatrixDraw[4] != '4' && CharMatrixDraw[5] != '5' && CharMatrixDraw[6] != '6' &&
		CharMatrixDraw[7] != '7' && CharMatrixDraw[8] != '8' && CharMatrixDraw[9] != '9')

		return 0;
	else
		return -1;
}

//  #second# #part# #is# #end# #here#

//  #second# #part# #is# #end# #here#

void GameChart(string name1, string name2)
{
	system("cls");

	cout << "\n==========================";
	cout << "\n\tTic Tac Toe\n";
	cout << "\n==========================\n";

	string nam1 = name1;
	string nam2 = name2;

	cout << nam1 << "(X)" << "========" << nam2 << " (0)\n\n";

	cout << "     ||     ||     " << endl;
	cout << "  " << CharMatrixDraw[1] << "  ||  " << CharMatrixDraw[2] << "  ||  " << CharMatrixDraw[3] << endl;

	cout << "=====||=====||=====" << endl;
	cout << "     ||     ||     " << endl;

	cout << "  " << CharMatrixDraw[4] << "  ||  " << CharMatrixDraw[5] << "  ||  " << CharMatrixDraw[6] << endl;

	cout << "=====||=====||=====" << endl;
	cout << "     ||     ||     " << endl;

	cout << "  " << CharMatrixDraw[7] << "  ||  " << CharMatrixDraw[8] << "  ||  " << CharMatrixDraw[9] << endl;

	cout << "     ||     ||     " << endl << endl;
}