#include <iostream>
using namespace std;
//mendeklarasikan variabel
int batas, angka1=0, angka2=1, angkaselanjutnya=0;
//membuat function untuk menampilkan bilangan fibonacci
void bilanganFibonacci()
{
    cout<<"Bilangan Fibonacci pertama hingga ke "<<batas<<" yaitu: ";
    for (int i = 1; i <= batas; i++)
    {
        cout<<angka1<<" ";
        angkaselanjutnya = angka1 + angka2;
        angka1 = angka2;
        angka2 = angkaselanjutnya;
    }
}
//program yang akan dieksekusi atau dioperasikan
int main()
{
    //perkenalan program
    cout<<"Hai, saya Zell.\n";
    cout<<"Saya akan membantu anda untuk menampilkan bilangan Fibonacci.\n";
    cout<<"Selamat Mencoba ^-^\n\n";
    //membuat input untuk user memasukkan batas angka dan juga membuat agar user hanya bisa memasukkan angka positif
    do
    {
        //membuat input batas
        cout<<"Masukkan batas bilangan positif yang anda inginkan: ";
        cin>>batas;

        if (batas<=0)
        {
            //menampilkan kalimat ketika user memasukkan angka salah
            cout<<"Anda tidak memasukkan bilangan positif. Coba lagi\n";
        }
    } while (batas<=0);
    //memanggil function bilanganFibonacci untuk ditampilkan
    bilanganFibonacci();
    cout<<"\n";

    return 0;
}
