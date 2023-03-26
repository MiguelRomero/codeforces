#include <iostream>
using namespace std;

int main(){
   int cases;
   int a,b,c,cont=0;
   cin>> cases;
   for(int x = 0; x< cases;x++){
    cin>>a>>b>>c;
    if(a+b+c>=2){
        cont++;
    }
   }
   cout<<cont;
}
