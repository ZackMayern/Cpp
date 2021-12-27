#include <iostream>

using namespace std;

int main(){

    string name = "BMS Institute of Technology, Yelahanka";
                 //0123456789
    string substring = name.substr(0, 3);
    cout << substring << endl;

    string phrase = name.insert(4,1,'&');
    cout << phrase << endl;

}