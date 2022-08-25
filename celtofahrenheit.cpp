#include <iostream>
using namespace std;

float celToFah(float);
float fahToCel(float);

int main(){
    int choice;
    float cel, fah;
    cout << "1. Celcius to Fahrenheit Converter" << endl <<
            "2. Fahrenheit to Celcius Converter" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter celsius measurement: " << endl;
        cin >> cel;
        celToFah(cel);
        break;
    
    case 2:
        cout << "Enter fahrenheit measurement: " << endl;
        cin >> fah;
        fahToCel(fah);
        break;

    default:
        cout << "Incorrect choice." << endl;
        break;
    }
}

float celToFah(float c){
    float f;
    f = (9.0/5.0)*c + 32;

    printf("The converted fahrenheit is: %f", f);
}

float fahToCel(float f){
    float c;
    c = (5.0/9.0)*(f-32);

    printf("The converted celsius is: %f", c);
}