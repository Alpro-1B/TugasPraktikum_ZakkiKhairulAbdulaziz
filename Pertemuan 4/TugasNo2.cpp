#include <iostream>
using namespace std;
int main()
{
    //perkenalan program atau introduction
    cout<<"Program membuat segitiga sama sisi sesuai keinginan\n\n";

    //mendeklarasikan variabel
    int tinggi;
    //membuat input tinggi yang akan user masukkan
    //antisipasi jika ada user yang memasukkan bukan angka positif
    //menggunakan perulangan do-while karena kita tidak tahu kapan user memasukkan angka yang benar
    do
    {
        //membuat input tinggi
        cout<<"Masukkan tinggi segitiga yang anda inginkan: ";
        cin>>tinggi;

        if (tinggi<=0)
        {
            //menampilkan kalimat ketika user memasukkan angka salah
            cout<<"Anda tidak memasukkan bilangan positif. Coba lagi\n";
        }
    } while (tinggi<=0);

    //menampilkan segitiga menggunakan nested loop
    //outer loop untuk membuat tinggi segitiga
    for (int i = 1; i <= tinggi; i++)
    {
        //inner loop untuk membuat jarak dari sisi kiri
        for (int j = tinggi; j > i; j--)
        {
            cout << " ";
        }
        //inner loop untuk menampilkan segitiganya
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
}
