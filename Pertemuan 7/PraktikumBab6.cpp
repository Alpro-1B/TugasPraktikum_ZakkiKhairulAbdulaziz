#include <iostream>
using namespace std;
int main()
{
    //perkenalan program
    cout<<"Program menampilkan nilai tertinggi dalam array dan menampilkan indeksnya\n";
    cout<<"Created by Zell\n\n";
    //mendeklarasikan variable ukuran array
    int size;
    //membuat input untuk ukuran array yang diinginkan user
    do
    {
        cout<<"Berapa ukuran array yang diinginkan: ";
        cin>>size;

        if (size<=0)
        {
            //menampilkan kalimat ketika user memasukkan angka salah
            cout<<"Harap masukkan angka lebih dari 1. Coba lagi\n";
        }
    } while (size<=0);

    //mendeklarasikan array
    int arr[size];
    //membuat input untuk mengisi nilai pada array
    cout<<"Silahkan masukkan "<<size<<" nilai untuk mengisi array\n";
    for (int i=0; i<size; ++i)
    {
        cout<<"Nilai ke "<<i+1<< ": ";
        cin>>arr[i];
    }

    //mencari nilai tertinggi dalam array
    int nilaiTertinggi=arr[0], index=0;

    for (int i=1; i<size; ++i)
    {
        if (arr[i] > nilaiTertinggi)
        {
            nilaiTertinggi = arr[i];
            index = i;
        }
    }

    //menampilkan nilai tertinggi dalam array
    cout<<"Nilai tertinggi dalam array adalah: "<<nilaiTertinggi<<"\n";

    //mengecek apakah nilai ada dalam array atau tidak
    bool found = false;
    for (int i=0; i<size; ++i)
    {
        if (arr[i] == nilaiTertinggi)
        {
            found = true;
            break;
        }
    }

    //menampilkan pesan berisi indeks nilai tersebut kepada user
    if (found)
    {
        cout<<"Nilai tersebut ditemukan pada indeks ke "<<index<<"\n";
    } else {
        cout<<"Nilai tersebut tidak ditemukan dalam array.\n";
    }

    return 0;
}
