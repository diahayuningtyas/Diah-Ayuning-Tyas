#include<iostream>

using namespace std;

int main(){
	float Nilai_praktikum,Nilai_teori,Nilai_tugas_dan_Final_project,Rata_rata;
	cout<<"Menghitung Nilai Rata-rata dari Mata Kuliah Pemrograman Terstruktur"<<endl;
	cout<<"Masukkan nilai praktikum = ";cin>>Nilai_praktikum;
	cout<<"Masukkan nilai teori = ";cin>>Nilai_teori;
	cout<<"Masukkan nilai tugas dan final project = ";cin>>Nilai_tugas_dan_Final_project;
	Rata_rata=(Nilai_praktikum*40/100)+(Nilai_teori*40/100)+(Nilai_tugas_dan_Final_project*20/100);
	cout<<"Rata-rata = "<<Rata_rata<<endl;
}
