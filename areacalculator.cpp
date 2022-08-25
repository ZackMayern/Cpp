#include <iostream>
#define pi 3.1418
using namespace std;

float areaOfRectangle(float *,float *); //To use pointers, it should be specified when declaring a function -> float areaOfRectangle(float *,float *)
float areaOfSquare(float *);            //                                                                                                 ^       ^
float areaOfCircle(float *);

float areaOfRectangle(float *l, float *b){
    float areaofRectangle = (*l)*(*b);
    *l = areaofRectangle;
}

float areaOfSquare(float *l){
    float areaofSquare = (*l)*(*l);
    *l = areaofSquare;
}

float areaOfCircle(float *r){
    float areaofCircle = 4*pi*(*r)*(*r);
    *r = areaofCircle;
}

int main(){
    int choice;
    float length,breadth,radius;
    cout << "Enter your choice: " << endl <<
            "1. Area of rectangle" << endl <<
            "2. Area of Square" << endl << 
            "3. Area of Circle" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter the length of the rectangle: " << endl;
        scanf("%f", &length);
        cout << "Enter the breadth of the rectangle: " << endl;
        scanf("%f", &breadth);
        areaOfRectangle(&length, &breadth);
        cout << length << endl;
        break;

    case 2:
        cout << "Enter the side of the square: " << endl;
        scanf("%f", &length);
        areaOfSquare(&length);
        cout << length << endl;
        break;
    
    case 3:
        cout << "Enter the radius of the circle: " << endl;
        scanf("%f", &radius);
        areaOfCircle(&radius);
        cout << radius << endl;
        break;

    default:
        cout << "Invalid Choice." << endl; 
        break;
    }
}