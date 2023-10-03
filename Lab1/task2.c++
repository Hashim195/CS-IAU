#include <bits/stdc++.h>
using namespace std ; 
int main () {
int baseSalary ,totalSales,commissionRate,personPay;
cout<<"enter the base salary" ;
cin>>baseSalary;
cout<<"enter the total sales";
cin>>totalSales;
cout<<"enter the commission rate";
cin>>commissionRate;
personPay=(totalSales*commissionRate)+baseSalary;
cout<<"the person\'s pay is "<<personPay ;
return 0;

}