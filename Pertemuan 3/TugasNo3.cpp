#include <iostream>
using namespace std;
int main()
{
    //perkenalan program atau intro
    cout<<"Hai, saya Zell."<<endl;
    cout<<"Saya akan membantu anda untuk mencari luas bangun datar"<<endl;
    cout<<"Harap perhatikan!!"<<endl;
    cout<<"Satuan yang digunakan adalah centimeter (cm)."<<endl;
    cout<<"Gunakan titik (.) untuk bilangan desimal"<<endl;
    cout<<"Masukkan nilai tanpa menyertakan satuan."<<endl <<endl;

    int opsi;
    //menggunakan float agar user bisa menginput nilai dalam bentuk desimal
    float luas, sisi, panjang, lebar, alas, tinggi;// mendeklarasikan variabel
    cout<<"1. Persegi"<<endl;
    cout<<"2. Persegi panjang"<<endl;
    cout<<"3. Segitiga"<<endl;
    cout<<"Silahkan pilih bangun datar yang akan dihitung: ";
    //user memilih bangun datar yang akan dipilih
    cin >> opsi;

    // Proses mencari luas bangun datar tersebut menggunakan switch case
    switch (opsi){
    // jika pengguna memilih 1, maka bangun datarnya adalah persegi
    case 1:
        cout<<"Anda memilih persegi."<<endl;
        cout<<"Silakan masukkan panjang sisi: ";
        // user memasukkan nilai sisi
        cin>>sisi;
        // memasukkan nilai luas ke variabel 'luas' setelah nilai sisi dioperasikan sesuai rumus luas bangun datar yang dipilih
        luas = sisi*sisi;
        // menampilkan hasil perhitungan luas
        cout<<"Luas persegi adalah: " << luas << "cm²"<<endl;
        cout<<"Terima kasih!";
        break;
    case 2:
    // jika pengguna memilih 2, maka bangun datarnya adalah persegi panjang
        cout<<"Anda memilih persegi panjang."<<endl;
        cout<<"Silakan masukkan panjang persegi: ";
        // user memasukkan nilai panjang
        cin>>panjang;
        cout<<"Silakan masukkan lebar persegi: ";
        // user memasukkan nilai lebar
        cin>>lebar;
        // memasukkan nilai luas ke variabel 'luas' setelah nilai panjang dan lebar dioperasikan sesuai rumus luas bangun datar yang dipilih
        luas = panjang*lebar;
        // menampilkan hasil perhitungan luas
        cout<<"Luas persegi panjang adalah: " << luas << "cm²"<<endl;
        cout<<"Terima kasih!";
        break;
    case 3:
    // jika pengguna memilih 3, maka bangun datarnya adalah segitiga
        cout<<"Anda memilih segitiga."<<endl;
        cout<<"Silakan masukkan panjang alas segitiga: ";
        // user memasukkan nilai alas
        cin>>alas;
        cout<<"Silakan masukkan tinggi segitiga: ";
        // user memasukkan nilai tinggi
        cin>>tinggi;
        // memasukkan nilai luas ke variabel 'luas' setelah nilai alas dan tinggi dioperasikan sesuai rumus luas bangun datar yang dipilih
        luas = (alas*tinggi)/2;
        // menampilkan hasil perhitungan luas
        cout<<"Luas segitiga adalah: " << luas << "cm²"<<endl;
        cout<<"Terima kasih!";
        break;

    default:
    // jika pengguna memilih pilihan selain 1-3, akan menampilkan pesan seperti berikut
        cout << "Pilihan anda invalid.";
        break;
    }

    return 0;
}
