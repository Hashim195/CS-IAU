#include <iostream>
using namespace std ;
int main(){
    double deg , fin ;
    char cf ;
    cout<<"please enter the temperature and measyrment system (c or f) : ";
    cin>>deg>>cf ;
    if (cf=='c'||'C'){
        fin=(deg*9/5)+32 ;
        cout<<fin<<"degrees Fah";
    }
    else if (cf=='f'||'F')
    {
        fin=(deg-32)*5/9 ;
        cout<<fin<<"degrees cel";
    }
    else {
        cout<<"enter a correct value please";
    }
    
    return 0 ;
}

#include<bits/stdc++.h>