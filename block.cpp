#include <iostream>
using namespace std;

int main() {
	int rows;
	int columns;
	int i;
	int j;
	int rowTracker = 0;

	cout << "Enter number of rows and columns:" << endl;
	cin >> rows;
	cin >> columns;

	//COMMENTED OUT THE FWHILE LOOP

	while ( rows != 0 || columns != 0) {

		for (i=0; i<rows; ++i) {
			for (j=0; j<columns; ++j) {
				cout << "X.";
			}
			//cout << endl;
			
			
			rowTracker += 1;
			if (rowTracker < rows) {
				cout << endl;
			}
			
		
			}
	
		cout << endl;
		cout << "Enter number of rows and columns:" << endl;
		cin >> rows;
		cin >> columns;
	
	}

	
	return 0;
}
