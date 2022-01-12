/* 
The class Person should have data members name and age. The classes Professor and Student should inherit from the class Person.

The class Professor should have two integer members: publications and cur_id. There will be two member functions: getdata and putdata. The function getdata should get the input from the user: 
the name, age and publications of the professor. The function putdata should print the name, age, publications and the cur_id of the professor.

The class Student should have two data members: marks, which is an array of size 6 and cur_id. It has two member functions: getdata and putdata. The function getdata should get the input from 
the user: the name, age, and the marks of the student in 6 subjects. The function putdata should print the name, age, sum of the marks and the cur_id of the student.

For each object being created of the Professor or the Student class, sequential id's should be assigned to them starting from 1.

Solve this problem using virtual functions, constructors and static variables. You can create more data members if you want.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
    string name;
    int age;
    virtual void getdata(){
        cin >> name >> age;
    }
    
    virtual void putdata(){
        cout << name << " " << age << endl;
    }
};

class Professor : public Person{
    public:
    Professor() {
        this->cur_id = ++id;
    }
    int publications;
    int cur_id;
    static int id;
    void getdata(){
        cin >> name >> age >> publications;
    }
    
    void putdata(){
        cout << name << " " << age << " " << publications << " " << this->cur_id << endl;
    }
};
int Professor::id = 0;

class Student : public Person{
    public:
    Student() {
        this->cur_id = ++id;
    }
    int marks[6];
    int cur_id;
    static int id;
    
    void getdata(){
        cin >> name >> age;
        for(int i = 0; i<6; i++)
            cin >> marks[i];
    }
    
    void putdata(){
        int totalMarks = 0;
        for(int i = 0; i<6; i++)
            totalMarks += marks[i];
        cout << name <<  " " << age << " " << totalMarks << " " << this->cur_id << endl;
    }
};
int Student::id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}