#include<iostream>
using namespace std;

int main(){
char choice;
cout<<"Enter your Choice: "<<endl;
cout<< "Press d for deposit"<<endl;
cout<< "Press w for withdrawal"<<endl;
cout<< "Press b for balance enquiry"<<endl;
cout<< "Press s for statement"<<endl;

cin>>choice;
switch (choice){
case 'd':
cout<<"now you can deposit your money";
break;

case 'w':
cout<<"now you can withdraw your money";
break;

case 'b':
cout<<"now you can see your balance money";
break;

case 's':
cout<<"now you can get your statement";
break;

default:
cout<<"please enter a valid choice";
}
    return 0;
}