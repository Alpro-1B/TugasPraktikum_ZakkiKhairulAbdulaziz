#include <iostream>
using namespace std;
int main()
{
    int nilai;//mendeklarasikan variabel

    cout<<"Masukkan nilai anda (0-100): "; //output perintah kepada user untuk memasukkan nilai
    cin>>nilai;//user memasukkan nilai

    if (nilai > 100 ) { //mengantisipasi user memasukkan nilai lebih dari 100
        cout<<"Nilai yang anda masukkan tidak sesuai"; //output jika user memasukkan nilai melebihi 100
    } else if(90 <= nilai < 100 ) { //memeriksa nilai apakah lebih besar atau sama dengan 90
        cout<<"Selamat! Anda mendapatkan nilai A"<<endl; //output jika nilai lebih dari atau sama dengan  90
    } else if (nilai >= 80) { //memeriksa nilai apakah lebih besar atau sama dengan 80
        cout<<"Anda mendapatkan nilai B" << endl; //output jika nilai lebih dari atau sama dengan  80
    } else  if (nilai >= 70) { //memeriksa nilai apakah lebih besar atau sama dengan 70
        cout<<"Anda mendapatkan nilai c" << endl; //output jika nilai lebih dari atau sama dengan  70
    } else  if (nilai >= 60) { //memeriksa nilai apakah lebih besar atau sama dengan 60
        cout<<"Anda mendapatkan nilai D" << endl; //output jika nilai lebih dari atau sama dengan 60
    } else { //memeriksa nilai apakah lebih kecil  60
        cout<<"Anda mendapatkan nilai E" << endl; //output jika nilai lebih kecil dari 60
    }
    return 0;//mengembalikan nilai 0 ke sistem operasi yang menjalankan program tersebut
}
