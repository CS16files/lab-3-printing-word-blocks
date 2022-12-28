#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n; // number of extra terms
	double pi = 1.0;
	int i; // tracker
	
	
	cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
	cin >> n;

	while (n >=  0) {
		if (n == 0) {
			cout << "The approximate value of pi using 1 term is: 4.000" << endl;
		}
		else {
			for (i=1; i <= n; ++i) {
				pi = (pi + pow(-1, i) / (2*i + 1)); //code failed here last time because multiplying all this by 4 would lead to a logic error
			}
			cout << "The approximate value of pi using " << n + 1 << " terms is: ";
			cout.precision(4);
			cout << 4 * pi << endl;
		}

		pi = 1.0;
		cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
		cin >> n;
		
		}
	
	return 0;
	}
