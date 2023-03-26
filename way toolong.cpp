#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,f;
    cin >>n;
    string arreglo[n];
    int tamano;
    string beckyg,t;
    string arreglo2[n];
    char pLetra, uLetra;
    for(int x = 0 ; x< n ;x++){
        cin>> arreglo[x];
        tamano= arreglo[x].size();
        if(tamano>=10){
        pLetra = arreglo[x].at(0);
        uLetra = arreglo[x].at(tamano-1);
        f=tamano-2;
        beckyg = to_string(f);
        t = pLetra+beckyg+uLetra;
        arreglo2[x]= t;
        }else{
            arreglo2[x]=arreglo[x];
        }
    }
    for(int y = 0; y< n; y++){
        cout<<arreglo2[y]<<endl;
    }
    
}
