#include <iostream>
using namespace std;

//typedef int* IntArrayPtr;

typedef unsigned char* ByteArray;

void print(unsigned char** board, int x, int y);

//void print (int m [][100]);


int main( )
 {
 int x, y;
// int board [x][y];
 int mine=0;
 
	cout << "Enter the board size :\n";
	cout<< "x =";
	cin >> x;
	cout << endl;
	cout << "y =";
	cin >> y;
	cout<< endl;

	ByteArray *m = new ByteArray[y];

	for (int i = 0; i < y; i++)
		m[i] = new unsigned char[x];
	//m is now a y by x array. x - width, y - height
 
 
 // Ниже просто тесты - посотреть, что происходит:
 /*cout<< m << endl; // array m address - test
 cout<< *m << endl; // test - address of the 1st 
 cout << m[0]<< endl; // test - address of [i]
 cout << *m [1] << endl; // test - value?
 */


	for (int i = 0; i < y; i++)
	{
		for (int j = 0;j < x; j++)
		{
			m[i][j] = '.';
		}
	}

	cout << "Enter amount of mines (not more than 10)for your field: " << endl;
	cin >> mine;
	cout << endl;



	// Попытка напечатать игровое поле:

	print(m, x, y);

	for (int i = 0; i < y; i++)
		delete[] m[i];
	delete[] m;


	return 0;
}
 
 
 void print(unsigned char** board, int x, int y)
{

	cout << '\t';
	for (int i = 0; i < x;i++)
	{
		cout << i << ' ';
	}
	cout << '\n';
	for (int i = 0; i < y; i++)
	{
		cout << i << '\t';
		for (int j = 0; j < x;j++)
		{
			cout << board[i][j] << ' ';
		}
		cout << '\n';
	}
}
 