//write a program to print  if a number is odd or even,with user input
#include<iostream> 
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;

    if(num%2==0){
        cout<<num<<" is an even number"<<endl;
    }else{
        cout<<num<<" is an odd number"<<endl;
    }
    // % is the modulus operator which gives the remainder of the division of num by 2.
    //  If the remainder is 0, then num is even; otherwise, it is odd.
return 0;
}