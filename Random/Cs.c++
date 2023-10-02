#include <iostream>
using namespace std;
int main(){
    char chr;
    cout<<"enter your char\n";
    cin>>chr;
    if(chr>=65&&chr<=90){
        cout<<"u have entered a Capital ch";
    }
    else if (chr>=97&&chr<=122)
    {
        cout<<"u have entered a Small ch";
    }
    else if (chr>=48&&chr<=57)
    {
        cout<<"u have enterd a number";
    }
    else
    {
        cout<<"u have entered a sym";
    }
    


return 0;
}
