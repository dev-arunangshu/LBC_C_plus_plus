// This program defines a class `student` with private members `name` and `marks`.
// It includes a constructor to initialize these members and a method `display()` to print the student's information. 
//The `main()` function prompts the user for the student's name and marks, 
//creates an instance of the `student` class, and calls the `display()` method to show the output.

#include<iostream>
#include<string>
using namespace std;

class student{
//private members to store the name and marks of the student
private:
    string name;
    int marks;
//public members to access the private members and perform operations
public:
//constructor to initialize the name and marks of the student
    student(string name,int marks){
        this->name=name;
        this->marks=marks;
    }
    //method to display the name and marks of the student
       void display(){
        cout<<"my name is "<<name<<" and I got "<<marks<<endl;
    }
};

int main(){
    string name;
    int marks;
    cout<<"please enter the name of the student: "<<endl;
    getline(cin, name);

    cout<<"please enter the marks of the student: "<<endl;
    cin>>marks;
    
    student s1(name, marks);
    s1.display();
    return 0;
}