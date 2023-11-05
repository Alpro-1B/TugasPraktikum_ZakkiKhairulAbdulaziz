#include <iostream>
using namespace std;
int main()
{
    //perkenalan program atau introduction
    cout<<"Hai, saya Zell.\n";
    cout<<"Saya akan membantu anda untuk menampilkan bilangan Fibonacci.\n";
    cout<<"Selamat Mencoba :)\n\n";

    //mendeklarasikan variabel
    int batas, angka1=0, angka2=1, angkaselanjutnya=0;

    //membuat input batas yang akan dimasukkan oleh user
    cout<<"Banyak deret Fibonacci yang diinginkan: ";
    cin>>batas;

    //menampilkan kalimat keterangan
    cout<<"Bilangan Fibonacci pertama hingga ke "<<batas<<" yaitu: ";
    //menampilkan deret angka dengan looping
    //menggunakan looping for karena jumlah perulangannya sudah ditentukan
    for (int i = 1; i <= batas; i++)
    {
        //menampilkan angka
        cout<<angka1<<" ";
        //menukar dan menghitung value variabel agar bisa menampilkan angka selanjutnya tanpa mengunakkan banyak variabel
        angkaselanjutnya = angka1 + angka2;
        angka1 = angka2;
        angka2 = angkaselanjutnya;
    }

  cout<<"\n";//membuat garis baru
  return 0;

}
