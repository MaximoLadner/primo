#include<iostream>
#include<cmath>
using namespace std;

    bool esPrimo(int num){
    if(num<=1){
        cout<<"no es primo ";
        return false;
    }
    for(int i = 2; i<= sqrt(num); i++){
        if(num % i==0){
            return false;
        }
    }

return true;
}
int main()
{

 int num;
 for(int i=0; i<=100; i++){
 cout<<"ingrese un numero y te dire si es primo o no ";
 cin>>num;
if(esPrimo(num)){
    cout<<num<<" es primo"<<endl;
}
else{
    cout<<"no es primo"<<endl;
}
 }
    return 0;
}

