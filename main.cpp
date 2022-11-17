#include <iostream>
using namespace std;

int main() {
   float a,b;
    int opzione;
    cin>>a>>b>>opzione;
    switch(opzione){
        case 1:
         if(opzione==0){
             cout<<(a*b)/2<<endl;
             break;
         }
        case 2:
         if(opzione==1) {
             cout << a * a << endl;
             break;
         }
        case 3:
         if(opzione==2){
             cout<<a*b<<endl;
             break;
         }

        default:
         cout<<"opzione non valida"<<endl;
    }
   return 0;
}
