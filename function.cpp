
#include<iostream>
using namespace std;
//creating a function named as square, which would the square of a given number
int square(int n){
    return n*n;
}

int main(){
    int x;
    cout<<"enter the number you want to find square of: ";
    cin>>x;

    int result=square(x); //calling the function square
    cout<<"the square of the number "<<x<<" is "<<result;
return 0;
}