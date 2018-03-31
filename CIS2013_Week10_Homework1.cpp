#include <iostream>
using namespace std;

typedef int* IntArrayPtr;

int main( )
 {
 int d1, d2;
 cout << "Enter the row and column dimensions of the array:\n";
 cin >> d1 >> d2;

 IntArrayPtr *m = new IntArrayPtr[d1];
 int i, j;
 for (i = 0; i < d1; i++)
 m[i] = new int[d2];
 //m is now a d1 by d2 array.


 for (i = 0; i < d1; i++)
 delete[] m[i];
 delete[] m;

 return 0;
 }
