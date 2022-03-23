#include <iostream>
#include<conio.h>
#include <fstream>
using namespace std;
struct warung{ // struct
	long harga, biaya, diskon, total, bayar, kembalian;
	int jumlah;
  	char paket;	
}wrg;

long tot(long h, long j){ // fungsi
	  long b = h * j;
	  return b;
}
	FILE * pFile;
	ofstream Nota ("Nota.txt");
	string Menu [2] = {"A. Ayam Goreng		Rp.17000", "B. Ayam Bakar		Rp.21000"};

int main(){
	int i;
	cout<<"========================"<<endl;
	cout<<"    KEDAI AYAM X  "<<endl;
	cout<<"========================"<<endl;
	cout<<endl;
	
	cout<<"MENU:              "<<endl;
	for (i=0; i < 2; i++){
		cout << Menu[i] << endl;
	}
	cout<<endl<<endl;
	cout<<"========================="<<endl;
	cout<<"    KEDAI AYAM X     "<<endl;
	cout<<"========================="<<endl;
	cout<<endl;

	cout<<"RINCIAN PEMBAYARAN:      "<<endl;
	cout<<"Menu             = "<<wrg.paket<<endl;
	cout<<"Jumlah           = "<<wrg.jumlah;
	cout<<endl;
	cout<<"                 ------------ x"<<endl;
	cout<<"Biaya            = "<<wrg.biaya<<endl;
	cout<<"Diskon           = "<<wrg.diskon<<endl;
	cout<<"                 ------------ -"<<endl;
	cout<<"Grand Total      = "<<wrg.total<<endl;
	cout<<"Bayar            = "; cin>>wrg.bayar; wrg.kembalian=wrg.bayar-wrg.total;
	cout<<"                 --------------"<<endl;
	cout<<"Uang Kembalian   = "<<wrg.kembalian<<endl;
	
  	Nota<<"========================="<<endl;
	Nota<<"    KEDAI AYAM X     "<<endl;
	Nota<<"========================="<<endl;
	Nota<<endl;

	Nota<<"RINCIAN PEMBAYARAN:      "<<endl;
	Nota<<"Menu             = "<<wrg.paket<<endl;
	Nota<<"Jumlah           = "<<wrg.jumlah;
	Nota<<endl;
	Nota<<"                 ------------ x"<<endl;
	Nota<<"Biaya            = "<<wrg.biaya<<endl;
	Nota<<"Diskon           = "<<wrg.diskon<<endl;
	Nota<<"                 ------------ -"<<endl;
	Nota<<"Grand Total      = "<<wrg.total<<endl;
	Nota<<"Bayar            = "<<wrg.bayar<<endl;
	Nota<<"                 --------------"<<endl;
	Nota<<"Uang Kembalian   = "<<wrg.kembalian<<endl;
		fclose (pFile);
  getch();
}
