#include<iostream>

using namespace std;

int main(){
	int Harga_pokok,Harga_motor,Lama_kredit,Bunga,Cicilan,Total_harga_motor,Keuntungan_dealer;
	cout<<"Program mengetahui cicilan,total harga cicilan dan keuntungan dealer dari pembelian sepeda motor"<<endl;
	cout<<"Harga motor = Rp. ";
	cin>>Harga_motor;
    cout<<"Lama kredit (bulan) =  ";
    cin>>Lama_kredit;
    Harga_pokok = Harga_motor/Lama_kredit;
    cout<<"Harga pokok = Rp. "<<Harga_pokok<<endl;
    Bunga = Harga_pokok*0.1;
    cout<<"Bunga = Rp. "<<Bunga<<endl;
    Cicilan =Harga_pokok+Bunga;
    cout<<"Cicilan = Rp. "<<Cicilan<<endl;
    Total_harga_motor = Cicilan*Lama_kredit;
    cout<<"Total harga motor = RP. "<<Total_harga_motor<<endl;
    Keuntungan_dealer =Total_harga_motor-Harga_motor;
    cout<<"Keuntungan dealer = Rp. "<<Keuntungan_dealer;
}

