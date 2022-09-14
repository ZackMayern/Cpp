/*Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length l, breadth b, and height h.

The default constructor of the class should initialize l, b, and h to 0.

The parameterized constructor Box(int length, int breadth, int height) should initialize Box's l and b and h to length, breadth and height.

The copy constructor Box(Box B) should set l, b and h to B's l, b and h, respectively.

Apart from the above, the class should have 4 functions:

int getLength() - Return box's length
int getBreadth() - Return box's breadth
int getHeight() - Return box's height
long long CalculateVolume() - Return the volume of the box
Overload the operator < for the class Box. Box A < Box B if:
1. A.l < B.l
2. A.b < B.b and A.l==B.l
3. A.h<B.h  and A.b==B.b and == A.l==B.l

Overload operator << for the class Box().
If B is an object of class Box:
cout << B should print l, b and h on a single line separated by spaces.*/


#include<bits/stdc++.h>

using namespace std;
class Box{
    private:
        int length;
        int breadth;
        int height;

    public:
        Box(){
            length=breadth=height=0;
            }
            
        Box(int l, int b, int h){
            length=l;
            breadth=b;
            height=h;
        }
        
        Box (Box& B){
            length = B.length;
            breadth = B.breadth;
            height = B.height;
        }
        
        int getLength(){
            return length;
        }
        
        int getBreadth(){
            return breadth;
        }
        
        int getHeight(){
            return height;
        }
        
        long long CalculateVolume(){
            return (long long) length*breadth*height;
        }
        
        bool operator < (Box& B){
            if(length < B.length){
                return true;
            }
            else if (length == B.length) {
                if (breadth < B.breadth){
                    return true;
                    }
                else if (breadth == B.breadth){
                    if (height < B.height){
                        return true;
                    }
                }
            }
            return false; 
        };
        
        friend ostream& operator << (ostream& output, Box& B){
            output << B.length << " " << B.breadth << " " << B.height;
            return output;
        };
};

// The ""<<temp"" is defined in the above class as ostream. It defines to give length, breadth and height as output in a single line with spacings. 
void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1) // Just gives output as 0,0,0 since there is no input
		{
			cout<<temp<<endl;
		}
		if(type == 2) // Takes input along with the type input. eg: 2 34 56 34 and shows the output as defined in the ostream in Box Class.
                      //                                             (l)(b)(h)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3) // Compares the dimensions/volume. This is also defined as the overload < operator in Box Class
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4) //Calculates Volume
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5) //Makes a duplicate box with older dimensions and discards the older box object
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}