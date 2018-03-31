#include <iostream>
using namespace std;

typedef int* IntArrayPtr;

//void print (int m [][100]);


int main( )
 {
 int x, y;
 int display_field [x][y];
 int mine=0;
 
	cout << "Enter the board size :\n";
	cout<< "x =";
	cin >> x;
	cout << endl;
	cout << "y =";
	cin >> y;
	cout<< endl;

	IntArrayPtr *m = new IntArrayPtr[x];
	int i, j;
	for (i = 0; i < x; i++)
	m[i] = new int[y];
 //m is now a x by y array.
 
 
 // Ниже просто тесты - посотреть, что происходит:
 cout<< m << endl; // array m address - test
 cout<< *m << endl; // test - address of the 1st 
 cout << m[0]<< endl; // test - address of [i]
 
 
 
 cout << "Enter amount of mines (not more than 10)for your field: "<< endl;
	cin>> mine;
	cout<<endl;
	
// point at the array's address : 
	
	//int *ap;
	//ap= &m [0];
 
 
 // Print empty field
	
	// for(int a=0; a<x; a++) {
	// for(int b=0; b<y; b++) {
		// display_field[a][b] = '.';
	// }
	
// }
	
//	print(display_field);
	
	// Попытка напечатать игровое поле:
	
	
	 for (int i=0; i<x; i++) {

	  cout << i << " ";}
	  cout<< endl;
	  
	 for (int a=0; a<x; a++) {

	cout << a << " ";

		for(int b=0; b<y; b++) {
		
		cout << board[a][b] << " "<< endl;
			
		}
	cout << endl;
	}
 
 for (i = 0; i < x; i++)
 delete[] m[i];
 delete[] m;

 return 0;
 }

 
 void print(char board[x][y])
{
	cout << ' ' << "  ";
	for (int i = 0; i < x;i++)
	{
		cout << i << ' ';
	}
	cout << '\n';
	for (int i = 0; i < x; i++)
	{
		cout << i << "  ";
		for (int j = 0;j < y;j++)
		{
			cout << board[i][j] << ' ';
		}
		cout << '\n';
	}
}
 
/*void print (int m [][100]) {
	int x, y;
	//int m [x][y];
	cout << endl << "		  0 1 2 3 4 5 6 7 8 9" << endl;

	for(int i=0; i<x; i++) {
	cout << "		" <<i << " ";
	for(int j=0; j<y; j++) {
		cout << m [x][y] << " ";
		
	}
	cout << endl;
}
}*/