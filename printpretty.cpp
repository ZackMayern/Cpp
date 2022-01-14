/*
For each test case, print 3 lines containing the formatted A, B, and C, respectively. Each A, B, and C must be formatted as follows:

A : Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the 0x prefix) in lower case letters.
B : Print it to a scale of 2 decimal places, preceded by a + or - sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result
is exactly 15 characters wide.
C : Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.
*/

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        
		/* Enter your code here */
    cout <<showbase << nouppercase << left << hex << long(A) << endl;
    cout << setfill('_') << setw(15) << right << showpos << fixed << setprecision(2) << B << endl;
    cout << noshowpos << scientific << setprecision(9) << uppercase << C << endl;
    
	}
	return 0;
}