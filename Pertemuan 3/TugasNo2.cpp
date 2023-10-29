#include <iostream>
using namespace std;
int main()
{
    //menggunakan float agar user bisa menginput nilai dalam bentuk desimal
    float angka1, angka2, angka3;//mendeklarasikan variabel

    //untuk memberikan catatan kepada user ketika ingin menginput angka desimal
    cout<<"Catatan : Gunakan titik (.) untuk bilangan desimal"<<endl<<endl;
    //agar user bisa memasukkan angka pertama
    cout<<"Masukkan angka pertama: ";
    cin>>angka1;//user memasukan angka pertama
    //agar user bisa memasukkan angka kedua
    cout<<"Masukkan angka kedua: ";
    cin>>angka2;//user memasukan angka kedua
    //agar user bisa memasukkan angka ketiga
    cout<<"Masukkan angka ketiga: ";
    cin>>angka3;//user memasukan angka ketiga
    //proses mencari angka terbesar
    //logika && digunakan untuk membandingkan nilai angka
    //jika angka1 lebih besar dari angka2 dan angka3
    if (angka1 >= angka2 && angka1 >= angka3) {
        //menampilkan angka1
        cout<<"Angka terbesar adalah: "<<angka1<<endl;
    //jika angka2 lebih besar dari angka1 dan angka3
    } else if (angka2 >= angka1 && angka2 >= angka3) {
        //menampilkan angka2
        cout<<"Angka terbesar adalah: "<<angka2<<endl;
    //jika angka3 lebih besar dari angka1 dan angka2
    //menampilkan angka3
    } else {
        cout<<"Angka terbesar adalah: "<<angka3<<endl;
    }

    return 0;
}
