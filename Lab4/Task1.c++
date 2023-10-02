#include<bits/stdc++.h> 
using namespace std ; 
int main(){

int a,b ;
char op ;
cout<<"enter a\n" ;
cin>>a ;
cout<<"enter b\n";
cin>>b ;
cout<<"enter the OP\n" ;
cin>>op ;
switch (op)
{
case '+':
    cout<<"the sum is "<<a+b;
    break;
    case '-':
    cout<<"the diff is "<<a-b ;
    break;
    case '*':
    cout<<"the mult is "<<a*b ;
    break;
    case '/' :
    cout<<"the div is "<<a/b;
    break;
default:
cout<<"enterd wrong input";
} 
return 0 ;

}