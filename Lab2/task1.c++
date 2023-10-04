#include <bits/stdc++.h>
using namespace std; 
int main (){

    int a,b,c ;
    cout<<"enter the three numbers s ";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b&&a>c){
        cout<<"the gratest is "<<a ;

    }
    else if (b>a&&b>c)
    {
        cout<<"the gratest is "<<b ;

    }
    else if (c>a&&c>b)
    {
        cout<<"the gratest is "<<c ;

    }
    else{
        cout<<"all numbers are equal ";
    }

return 0;

    
}