#include <iostream>
#include <cmath>
using namespace std;
int x;
int y;
int z;
float hasil;

int main(){
    cout <<"Mencari Panjang Vektor 3 Dimensi     \n";
    cout <<"--------------------------------------\n";
    cout <<"Masukan X: ";
    cin>>x;
    cout <<"Masukan Y: ";
    cin>>y;
    cout <<"Masukan Z: ";
    cin>>z;
    hasil=sqrt(x*x+y*y+z*z);
    cout <<"--------------------------------------\n";
    cout <<"Panjang Vektor = "<<hasil;
return 0;
}