#include <iostream>
#include <math.h>
using namespace std;
int main(){

int x,y,z=1;
cout<<"podaj poczatek zakresu: ";
cin>>x;
cout<<"podaj koniec zakresu: ";
cin>>y;
while (x<=1){
  x++;}
  for (int i=x; i<=y; i++){
    for(z=2; z<=y;z++)
    if(i%z==0){
      if (i==z)
      cout<<i<<endl;
      else break;
    }
  }


return 0;
}