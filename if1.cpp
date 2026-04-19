//to check grade (muktiple condition)
#include<iostream>
using namespace std;

int main(){
int marks;
cout<<" Enter your marks: "<<endl;
cin>> marks;

if(marks>=80){
    cout<<"very good"<<endl;
}else if (marks>=60 && marks<80)
{
    cout<<"good";
}else if (marks>=40 && marks<60)
{
    cout<<"just pass";
}else{
    cout<<"failed";
}
    return 0;
}
