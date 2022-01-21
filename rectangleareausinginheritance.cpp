/* 
The Rectangle class should have two data fields-width and height of int types. The class should have display() method, to print the width and height of the rectangle separated by space. 
The RectangleArea class is derived from Rectangle class, i.e., it is the sub-class of Rectangle class. The class should have read_input() method, to read the values of width and height of 
the rectangle. The RectangleArea class should also overload the display() method to print the area (width*height) of the rectangle.

The output should consist of exactly two lines:
In the first line, print the width and height of the rectangle separated by space.
In the second line, print the area of the rectangle.
*/

#include <iostream>

using namespace std;

class Rectangle{
    public:
    int width;
    int height; 
    void display();
};

void Rectangle::display(){
    cout << width << " " << height << endl;  
}

class RectangleArea : public Rectangle{
    public:
    void read_input(){
        cin >> width >> height;
    }
    void display(){
        int area = width*height;
        printf("%d\n", area);
    }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}