#include <iostream>
#include<string>
using namespace std ;
int main(){
    double age,weight,length,cal ;
    string gender ;
    cout<<"enter your gender :";
    cin>>gender ;
    cout<<"enter yout age, weight , length";
    cin>>age>>weight>>length>>;
    if(gender=="male"){
        cal=6.25*length+10*weight-age*5 +5 ;
        cout<<"your nedded cal is ="<<cal ;
    }
    else if (gender=="female")
    {
        cal=6.25*length+10*weight-age*5 -161 ;
        cout<<"your nedded cal is ="<<cal ;

    }
    return 0 ;
    



}
