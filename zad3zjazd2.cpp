#include <iostream>
using namespace std;

int main(){
float n,x=0,y=1;
cout<<"Podaj ktora z kolei liczbe fibbonaciego chcesz otrzymac: ";
cin>>n;
for (int i=0; i<=n; i=i+1){
x=y+x;
y=x-y;}
cout<<y<<endl;


return 0;
}