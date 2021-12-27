#include <iostream>

using namespace std;

void sayHello(string name, int age){
    cout << "Hello " << name << "!" << " You are "<< age << " years old" << endl;
}

int main(){
    string name;
    int age;
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Enter your age: " << endl;
    cin >> age;
    sayHello(name, age);

    return 0;
}