#include <iostream>
using namespace std;

typedef unsigned char* ByteArray;

void print(unsigned char** board, int x, int y);


int main( )
 {
 int x, y;
// int board [x][y];
 int mine=0;
 
	cout << '/t';
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
	cout << "Planting mines..."; 

	int* mines = new int[mine*2];
	int mx, my;
	
	for (int n = 0; n < mine*2; n+=2)
	{
		mx = rand() % x;
		my = rand() % y;	

		while (1) {
			 int i; for (i = 0; i < n; i+=2) { 
			 
			 if (mines[i] == mx && mines[i+1] == my)//if mine already placed here just try randomize another time 
				
				{ mx = rand() % x; 
				  my = rand() % y; 
				  break; 
				} 
			} 
			if (i == n) //all clear - get out 
			break; 
		} 
		
		 mines[n] = mx; 
		 mines[n + 1] = my;
		
	}
	cout << " ...Done" << endl; 

	// Попытка напечатать игровое поле:

	print(m, x, y);
	
	// координаты мин- игрок вводить должен через cin >> x >> y
	// и сравнивать их с mines !!! (array)
	// mines[0], mines[1] - первая мина, 2-3, 4-5 и т.д
	// это ж просто поле - которое печатаем - m? и передаем туда новые значения после каждого хода
	// а мины хранятся в mines
	// сравниваем ходы с mines - и результат печатаем через m
	
	
	while (1) {
		 unsigned int column = x+1, row = y+1; 
		 
		 while (column >= x || row >= y) { 
		 
		 cout << "Hit position:"<<endl; 
		 
		 cout << "x ="; 
		 cin >> column;
		 cout << endl;
		 cout << "y =";
		 cin >> row;
		 cout << endl; 
		 }
		  unsigned char bOver = 0; 
		  for (int n = 0; n < mine * 2; n += 2) {
			  
			   if (mines[n] == column && mines[n + 1] == row) { 
					
					//show all mines
					for (int k = 0; k < mine * 2; k += 2) { 
					m[mines[k+1]][mines[k]] = 'M'; 
					}
					m[mines[n]][mines[n + 1]] = 'X';//mark badluck especially 
					
					print(m, x, y); 
					
					cout << "Game over!"; 
					bOver = 1; 
				} 
			} 
			
			 if (bOver) 
				 break; 
			 else { 
			 
				m[row][column] = ' '; 
				print(m, x, y); 
				}

	}				
	
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
 