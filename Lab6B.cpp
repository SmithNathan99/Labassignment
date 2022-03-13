
/*   Description: In this program there will be two loops. One will be generating an a random integer and storing in an array. The other loop 
   	will display the content of the stored array but in a character format coming from the ASCII table. 
 */

#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

int main() 
{
	//seeded random generator
	srand(time(NULL));
	
	//declaring the array
	int A[5];

	//for loop randomly picking the integer for the stored array
	for (int i = 0; i < 5; i++){	
		A[i] = (rand() % (26)) + 65;
	}
	
	//for loop display the chracter of the stored array
	for(int i=0;i<5;i++){
		cout << char(A[i]);
	}

	cout << endl;

	return 0;
}
