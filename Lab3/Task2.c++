#include <iostream>
using namespace std ;
int main (){
    int itemNum , price , cost ;
    cout<<"Enter item price: " ;
    cin>>price;
    cout<<"Enter No items: ";
    cin>>itemNum ;
    cost=(price*itemNum);
    if(price>=100&&itemNum>2){
        cost=cost*(5/100) ;
        if(cost>1000){
        cost=cost*(5/100);
        }}
    else{
        cost=cost+10;
    }
    cout<<"total coast="<<cost ;


    return 0 ;
    

}