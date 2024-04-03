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
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    getline (cin,mhs.nama) ;
    cout << "alamat Mahasiswa : " <<endl ;
    cout << "\t Nama desa  : ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama kota  : ";
    cin >> mhs.alamat.kota;
    cout << "umur Mahasiswa : ";
    cin >> mhs.umur;

    
    cout <<  endl;
    cout << "\n NIM     :  " <<mhs.nim ;
    cout << "\n Nama    :  " <<mhs.nama ;
    cout << "\n Alamat  :  " ;
    cout << "\n\t desa :  "  <<mhs.alamat.desa;
    cout << "\n\t kota  :  " <<mhs.alamat.kota ;
    cout << "\n Umur    :  " <<mhs.umur ;
}
