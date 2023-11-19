#include <iostream>
using namespace std;
//mendeklarasikan variabel
int tinggi;
//membuat function untuk menampilkan segitiga
void outputSegitiga()
{
    for (int i = 1; i <= tinggi; i++)
    {
        for (int j = tinggi; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout<<"\n";
    }
}
//program yang akan dieksekusi atau dioperasikan
int main()
{
    //perkenalan program
    cout<<"Program membuat segitiga sama sisi sesuai keinginan\n\n";
    //membuat input untuk user memasukkan tinggi segitiga dan juga membuat agar user hanya bisa memasukkan angka positif
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
    //memanggil function outputSegitiga untuk ditampilkan
    outputSegitiga();

    return 0;
}
