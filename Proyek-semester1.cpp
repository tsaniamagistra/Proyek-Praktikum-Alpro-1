#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	string barang[6] = {{"Sabun Mandi"},{"Minyak Goreng"},{"SIkat Gigi"},{"Pasta Gigi"},{"Mie Instan"},{"Tissue"}};
	string username;
	int stok[6] = {{100},{90},{110},{80},{85},{100}};
	int harga[6] = {{5000},{12000},{4000},{7000},{3000},{10000}};
	int menu,password;
	
	cout<<"PROGRAM KASIR MINIMARKET"<<endl;
	cout<<setfill('=')<<setw(50)<<"="<<endl;
	cout<<"SIlakan Masukkan Username & Password"<<endl;
	cout<<"Username\t= ";
	cin>>username;
	cout<<"Password\t= ";
	cin>>password;
	
	if (username == "Seva" && password == 123210061){
		cout<<setfill('=')<<setw(50)<<"="<<endl;
		cout<<"\nSelamat Datang Seva ^^"<<endl;
		cout<<"\nSilakan Pilih Menu"<<endl;
		cout<<"1. Daftar Barang"<<endl;
		cout<<"2. Daftar Harga"<<endl;
		cout<<"3. Hitung Pembelian"<<endl;
		cout<<"Pilih Menu\t= ";
		cin>>menu;
		}
	else if (username == "Tsania" && password == 123210090){
		cout<<setfill('=')<<setw(50)<<"="<<endl;
		cout<<"\nSelamat Datang Tsania ^^"<<endl;
		cout<<"\nSilakan Pilih Menu"<<endl;
		cout<<"1. Daftar Barang"<<endl;
		cout<<"2. Daftar Harga"<<endl;
		cout<<"3. Hitung Pembelian"<<endl;
		cout<<"Pilih Menu\t= ";
		cin>>menu;
		}
	else{
		cout<<"\nUsername/Password Salah"<<endl;
		}
	if (menu == 1){
		cout<<"\nDaftar Barang"<<endl;
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
		cout<<"Barang\t\t\t"<<"| "<<"Stok Barang\t\t"<<"|"<<endl;
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
		cout<<barang[0]<<"\t\t"<<"| "<<stok[0]<<"\t\t\t|"<<endl;
		cout<<barang[1]<<"\t\t"<<"| "<<stok[1]<<"\t\t\t|"<<endl;
		cout<<barang[2]<<"\t\t"<<"| "<<stok[2]<<"\t\t\t|"<<endl;
		cout<<barang[3]<<"\t\t"<<"| "<<stok[3]<<"\t\t\t|"<<endl;
		cout<<barang[4]<<"\t\t"<<"| "<<stok[4]<<"\t\t\t|"<<endl;
		cout<<barang[5]<<"\t\t\t"<<"| "<<stok[5]<<"\t\t\t|"<<endl;
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
		}
	else if (menu == 2){
		cout<<"\nDaftar Harga"<<endl;
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
		cout<<"Barang\t\t\t"<<"| "<<"Harga Barang\t\t"<<"|"<<endl;
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
		cout<<barang[0]<<"\t\t"<<"| "<<harga[0]<<"\t\t\t|"<<endl;
		cout<<barang[1]<<"\t\t"<<"| "<<harga[1]<<"\t\t\t|"<<endl;
		cout<<barang[2]<<"\t\t"<<"| "<<harga[2]<<"\t\t\t|"<<endl;
		cout<<barang[3]<<"\t\t"<<"| "<<harga[3]<<"\t\t\t|"<<endl;
		cout<<barang[4]<<"\t\t"<<"| "<<harga[4]<<"\t\t\t|"<<endl;
		cout<<barang[5]<<"\t\t\t"<<"| "<<harga[5]<<"\t\t\t|"<<endl;
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
		}
	else if (menu == 3){
		cout<<"Hitung Pembelian"<<endl;
		
		
		
		}
	else{
	cout<<"Input Tidak Sesuai"<<endl;	
		}	
	}
