#include <iostream>
using namespace std;

struct detailalamat{
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    detailalamat alamat;
    string umur;
};

int main() {
    Mahasiswa mhs [3];
    for (int i=0;i<3;i++)
    {
        cout << "Nomor Mahasiswa : ";
        getline (cin,mhs[i].nim);
        cout << "Nama Mahasiswa : ";
        getline (cin,mhs[i].nama) ;
        cout << "alamat Mahasiswa : " <<endl ;
        cout << "\t Nama desa  : ";
        cin >> mhs[i].alamat.desa;
        cout << "\t Nama kota  : ";
        cin >> mhs[i].alamat.kota;
        cout << "umur Mahasiswa : ";
        cin >> mhs[i].umur;
    }

    
    cout <<  endl;
    cout << "\n NIM     :  " <<mhs[i].nim ;
    cout << "\n Nama    :  " <<mhs[i].nama ;
    cout << "\n Alamat  :  " ;
    cout << "\n\t desa :  "  <<mhs[i].alamat.desa;
    cout << "\n\t kota  :  " <<mhs[i].alamat.kota ;
    cout << "\n Umur    :  " <<mhs[i].umur ;
}
