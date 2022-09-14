/* You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. 
Create setter and getter functions for each element; that is, the class should at least have following functions:

get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard

Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this. */

#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age, standard;
        string first_name, last_name;
    
    public:
        void set_age(int a){
            age = a;
        }
        void set_standard(int s){
            standard = s;
        }
        void set_first_name(string fn){
            first_name = fn;
        }
        void set_last_name(string ln){
            last_name = ln;
        }
        
        int get_age(){
            return age;
        }  
        int get_standard(){
            return standard;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }
        void to_string(){
            cout << age << ',' << first_name << ',' << last_name << ',' << standard;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}