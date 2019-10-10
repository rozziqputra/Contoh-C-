#include <iostream>
using namespace std;
int main()
{
    int bayar,akhir,diskon,uang;
    cout<<"Contoh Program c++ Diskon"<<endl<<"Kasir Balog"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Total pembayaran : ";
    cin>>bayar;
    if ((bayar>=100000) && (bayar<500000)){
        diskon=bayar*0.10;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl;
    } else if ((bayar>=500000) && (bayar<1000000)){
        diskon=bayar*0.2;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 20%"<<endl;
    } else if (bayar>=1000000){
        diskon=bayar*0.3;
        akhir=bayar-diskon;
        cout<<endl<<"selamat anda mendapatkan diskon 30%"<<endl;
    }else {
        akhir=bayar;
    }
    cout<<endl<<"jadi total pembayarannya = "<<akhir<<endl;;
    cout<<"Masukkan jumlah uang : ";
    cin>>uang;
    cout<<"-------------------------"<<endl;
    int kembalian= uang-akhir;
    cout<<"Kembalian anda : "<<kembalian;
    return 0;
}
