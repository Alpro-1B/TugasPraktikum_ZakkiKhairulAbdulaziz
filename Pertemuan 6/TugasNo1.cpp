#include <iostream>
using namespace std;
//mendeklarasikan variabel
int batas, jumlahganjil=0, jumlahgenap=0, jumlahprima=0;
//membuat function untuk bagian bilangan ganjil
void ganjil()
{
    cout<<"Daftar Bilangan Ganjil dari 1 hingga "<<batas<<":\n";
    for (int i=1; i<=batas; i+=2)
    {
        cout<<i<<" ";
        jumlahganjil+=i;
    }
}
//membuat function untuk bagian bilangan genap
void genap()
{
    cout<<"Daftar Bilangan Genap dari 1 hingga "<<batas<<":\n";
    for (int i=2; i<=batas; i+=2)
    {
        cout<<i<<" ";
        jumlahgenap+=i;
    }
}
//membuat function untuk bagian bilangan prima
void prima()
{
    cout<<"Daftar Bilangan Prima dari 1 hingga "<<batas<<":\n";
    for (int i = 2; i <= batas; ++i)
        {
            int bilanganprima = 1;
            for(int j = 2; j * j <= i; ++j)
            {
                if (i % j == 0)
                {
                    bilanganprima = 0;
                    break;
                }
            }
            if(bilanganprima == 1)
            {
                cout<<i<< " ";
                jumlahprima+=i;
            }
        }
}
//membuat function untuk bagian faktor bilangan ganjil
void faktorGanjil()
{
    cout<<"Faktor dari jumlah bilangan ganjil:\n";
    for (int i=1; i<=jumlahganjil; i++)
    {
        if (jumlahganjil % i==0)
        {
            cout<<i<<" ";
        }
    }
}
//membuat function untuk bagian faktor bilangan genap
void faktorGenap()
{
    cout<<"Faktor dari jumlah bilangan genap:\n";
    for (int i=1; i<=jumlahgenap; i++)
    {
        if (jumlahgenap % i==0)
        {
            cout<<i<<" ";
        }
    }
}
//membuat function untuk bagian faktor bilangan prima
void faktorPrima()
{
    cout<<"Faktor dari jumlah bilangan prima:\n";
    for (int i=1; i<=jumlahprima; i++)
    {
        if (jumlahprima % i==0)
        {
            cout<<i<<" ";
        }
    }
}
//program yang akan dieksekusi atau dioperasikan
int main()
{
    //perkenalan program
    cout<<"Hai, saya Zell.\n";
    cout<<"Saya akan membantu anda untuk menampilkan bilangan ganjil, genap, dan prima dari angka 1 hingga angka yang diinginkan.\n";
    cout<<"Selain itu saya akan menjumlahkan bilangannya dan menampilkan faktor dari jumlah bilangan tersebut.\n";
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
    //memanggil function ganjil untuk menampilkan bilangan ganjil
    ganjil();
    //menampilkan hasil jumlah bilangan ganjil yang ditampilkan
    cout<<"\nJumlah bilangan ganjil dari 1 hingga "<<batas<<":\n"<<jumlahganjil<<"\n";
    //menampilkan faktor dari jumlah bilangan ganjil
    faktorGanjil();
    cout<<"\n";
    //memanggil function genap untuk menampilkan bilangan genap
    genap();
    //menampilkan hasil jumlah bilangan genap yang ditampilkan
    cout<<"\nJumlah bilangan genap dari 1 hingga "<<batas<<":\n"<<jumlahgenap<<"\n";
    //menampilkan faktor dari jumlah bilangan genap
    faktorGenap();
    cout<<"\n";
    //memanggil function prima untuk menampilkan bilangan prima
    prima();
    //menampilkan hasil jumlah dari bilangan prima yang ditampilkan
    cout<<"\nJumlah bilangan prima dari 1 hingga "<<batas<<":\n"<<jumlahprima<<"\n";
    //menampilkan faktor dari jumlah bilangan prima
    faktorPrima();
    cout<<"\n";

    return 0;
}
