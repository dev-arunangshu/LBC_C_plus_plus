#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your percentage of marks obtained:";
    cin>>marks;

    if(marks>60){
        cout<<"Congrats you have secured first division\n";
    }else if (marks>30)
    {
        cout<<"You got second division"<<endl;
    }else{
        cout<<"Sorry! you failed";
    }
    
}