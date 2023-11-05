#include <iostream>
using namespace std;
int main()
{
    //perkenalan program atau introduction
    cout<<"Hai, saya Zell.\n";
    cout<<"Saya akan membantu anda untuk menampilkan bilangan ganjil, genap, dan prima dari angka 1 hingga angka yang diinginkan.\n";
    cout<<"Selain itu saya akan menjumlahkan bilangannya dan menampilkan faktor dari jumlah bilangan tersebut.\n";
    cout<<"Selamat Mencoba :)\n\n";

    //mendeklarasikan variabel
    int batas, jumlahganjil=0, jumlahgenap=0, jumlahprima=0;
    //membuat input batas yang akan user masukkan
    //antisipasi jika ada user yang memasukkan bukan angka positif
    //menggunakan perulangan do-while karena kita tidak tahu kapan user memasukkan angka yang benar
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

    //bilangan ganjil
    //kalimat keterangan
    cout<<"1. Bilangan Ganjil\n";
    cout<<"->Daftar Bilangan Ganjil dari 1 hingga "<<batas<<":\n";
    //memakai perulangan for karena jumlah pengulangannya sudah ditentukan
    for (int i=1; i<=batas; i+=2)
    {
        //menampilkan bilangan ganjil dari 1 hingga batas yang ditentukan
        cout<<i<<" ";
        //menjumlahkan bilangan ganjil yang ditampilkan
        jumlahganjil+=i;
    }
    //menampilkan hasil jumlah bilangan ganjil yang ditampilkan
    cout<<"\n->Jumlah bilangan ganjil dari 1 hingga "<<batas<<":\n"<<jumlahganjil;

    //menampilkan faktor dari jumlah bilangan ganjil
    cout<<"\n->Faktor dari jumlah bilangan ganjil:\n";
    for (int i=1; i<=jumlahganjil; i++)
    {
        if (jumlahganjil % i==0)
        {
            cout<<i<<" ";
        }
    }

    //bilangan genap
    //kalimat keterangan
    cout<<"\n\n2. Bilangan Genap\n";
    cout<<"->Daftar Bilangan Genap dari 1 hingga "<<batas<<":\n";
    //memakai perulangan for karena jumlah pengulangannya sudah ditentukan
    for (int i=2; i<=batas; i+=2)
    {
        //menampilkan bilangan genap dari 1 hingga batas yang ditentukan
        cout<<i<<" ";
        //menjumlahkan bilangan genap yang ditampilkan
        jumlahgenap+=i;
    }
    //menampilkan hasil jumlah bilangan genap yang ditampilkan
    cout<<"\n->Jumlah bilangan genap dari 1 hingga "<<batas<<":\n"<<jumlahgenap;

    //menampilkan faktor dari jumlah bilangan genap
    cout<<"\n->Faktor dari jumlah bilangan genap:\n";
    for (int i=1; i<=jumlahgenap; i++)
    {
        if (jumlahgenap % i==0)
        {
            cout<<i<<" ";
        }
    }

    //bilangan prima
    //kalimat keterangan
    cout<<"\n\n3. Bilangan Prima\n";
    cout<<"->Daftar Bilangan Prima dari 1 hingga "<<batas<<":\n";
    //menggunakan perulangan for karena jumlah pengulangannya sudah ditentukan
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
                //menampilkan prima dari 1 hingga batas yang ditentukan
                cout<<i<< " ";
                //menjumlahkan bilangan prima yang ditampilkan
                jumlahprima+=i;
            }
        }
    //menampilkan hasil jumlah dari bilangan prima yang ditampilkan
    cout<<"\n->Jumlah bilangan prima dari 1 hingga "<<batas<<":\n"<<jumlahprima;
    //menampilkan faktor dari jumlah bilangan prima
    cout<<"\n->Faktor dari jumlah bilangan prima:\n";
    for (int i=1; i<=jumlahprima; i++)
    {
        if (jumlahprima % i==0)
        {
            cout<<i<<" ";
        }
    }

    cout<<"\n\nTerimakasih sudah mencoba program ini ^-^";
    return 0;
}
