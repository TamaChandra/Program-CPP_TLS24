#include <iostream>
#include <cmath>
using namespace std;
char confirm;
int x;
int y;
int z;
float hasil;

int main(){
    cout <<"Mencari Panjang Vektor 3 Dimensi     \n";
    cout <<"Apakah anda ingin melanjutkan? (Y/N)\n";
    cin>>confirm;
    
if (confirm == 'N' || confirm == 'n') {
        cout << "Program dibatalkan\n";
        cout << "----------------------------------------------\n";
        return 0; // Keluar dari program jika pengguna memilih 'N' atau 'n'
    }

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