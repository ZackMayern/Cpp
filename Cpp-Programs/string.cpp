/* In the first line print two space-separated integers, representing the length of a and b respectively.
In the second line print the string produced by concatenating a and b (a+b).
In the third line print two strings separated by a space, a' and b'. a' and b' are the same as a and b, respectively, except that their first characters are swapped. */

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b, concatenate;
    cin >> a;
    cin >> b;
    
    int lengtha = a.size();
    int lengthb = b.size();
    concatenate = a + b;
    
    cout << lengtha << " " << lengthb << "\n" << concatenate << endl;
    
    char c0 = a[0];
    char c1 = b[0];
    char temp = b[0];
    
    b[0] = a[0];
    a[0] = temp;
    
    cout << a << " " << b;
    
    return 0;
}