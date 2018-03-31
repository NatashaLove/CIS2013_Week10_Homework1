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

 
 // Print empty field
	
	// for(int a=0; a<x; a++) {
	// for(int b=0; b<y; b++) {
		// display_field[a][b] = '.';
	// }
	
// }
	
//	print(display_field);
	
	cout << "Enter amount of mines for your field: "<< endl;
	cin>> mine;
	cout<<endl;
 
 for (i = 0; i < x; i++)
 delete[] m[i];
 delete[] m;

 return 0;
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