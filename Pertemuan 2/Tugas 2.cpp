#include <iostream>
using namespace std;
int main() {
//pertukaran menggunakan variabel baru
int x=10,y=8,z;
cout<<"SOAL 1"<<endl;
cout<<"Pertukaran menggunakan variabel baru"<<endl;
cout<<"Nilai sebelum ditukar"<<endl;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
cout<<"Nilai sesudah ditukar"<<endl;
z=x;
x=y;
y=z;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl<<endl;
//pertukaran tanpa variabel baru
int a=10,b=8;
cout<<"Pertukaran tanpa variabel baru"<<endl;
cout<<"Nilai sebelum ditukar"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
cout<<"Nilai sesudah ditukar"<<endl;
cout<<"a="<<b<<endl;
cout<<"b="<<a<<endl<<endl;
//pembagian bebek dan sisanya
int jumlah_bebek,jumlah_teman;
cout<<"SOAL 2"<<endl;
cout<<"Masukkan jumlah bebek yang akan dibagikan Pak Tatang :";
cin>>jumlah_bebek;
cout<<"Masukkan banyaknya teman Pak Tatang yang akan diberi bebek :";
cin>>jumlah_teman;
cout<<"Maka"<<endl;
cout<<"Jumlah teman yang dapat dibagikan :"<<jumlah_bebek/jumlah_teman<<endl;
cout<<"Sisa bebek :"<<jumlah_bebek%jumlah_teman<<endl;
return 0;
}
