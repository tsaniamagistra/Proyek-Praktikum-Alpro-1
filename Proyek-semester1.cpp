#include <iostream>
#include <iomanip>

using namespace std;

void hitungpembelian();

int main(){
	string barang[6] = {"Sabun Mandi","Minyak Goreng","Sikat Gigi","Pasta Gigi","Mie Instan","Tissue"};
	string username,kembali_menu,hitung_kembali;
	int stok[6] = {100,90,110,80,85,100};
	int harga[6] = {5000,12000,4000,7000,3000,10000};
	int menu,password;
	
	cout<<"PROGRAM KASIR MINIMARKET"<<endl;
	cout<<setfill('=')<<setw(50)<<"="<<endl;
	cout<<"SIlakan Masukkan Username & Password"<<endl;
	cout<<"Username\t= ";
	cin>>username;
	cout<<"Password\t= ";
	cin>>password;
	
	if ((username == "Seva" && password == 123210061)||(username == "Tsania" && password == 123210090))
	do{
	{
		cout<<setfill('=')<<setw(50)<<"="<<endl
			<<"\nSelamat Datang "<<username<<" ^^"<<endl
			<<"\nSilakan Pilih Menu"<<endl
			<<"1. Daftar Barang"<<endl
			<<"2. Daftar Harga"<<endl
			<<"3. Hitung Pembelian"<<endl
			<<"Pilih Menu\t= ";
		cin>>menu;
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
	else if (menu == 3)do{
		cout<<"\nHitung Pembelian"<<endl;
		hitungpembelian();
		cout<<"\nHitung Kembali? (Y/N) ";
		cin>>hitung_kembali;
		}while (hitung_kembali == "Y" || hitung_kembali == "y");
		
	else{
	cout<<"Input Tidak Sesuai"<<endl;	
		}
	cout<<"\nKembali ke Menu? (Y/N) ";
	cin>>kembali_menu;		
	}while (kembali_menu == "y" || kembali_menu == "Y");
	else{
		cout<<"\nUsername/Password Salah"<<endl;
		}
	}

void hitungpembelian(){
	string barang[6] = {"Sabun Mandi","Minyak Goreng","Sikat Gigi","Pasta Gigi","Mie Instan","Tissue"};
	int harga[6] = {5000,12000,4000,7000,3000,10000};
	int jml_beli, jumlah, hargasatuan, total;
	string nama_barang;
	char tambah;
	
	jml_beli = 1;
	total = 0;
	for (int i=0; i<jml_beli; i++){
		cout<<endl;
		cout<<"Masukkan Barang Ke-"<<i+1<<endl;

		cout<<"Nama Barang\t: ";
		cin.ignore();
		getline(cin, nama_barang);
		
		cout<<"Jumlah\t\t: ";
		cin>>jumlah;
		
		cout<<"Harga Satuan\t: ";
		if (nama_barang == barang[0]){
			hargasatuan = harga[0];
			cout<<hargasatuan;
		}
		else if (nama_barang == barang[1]){
			hargasatuan = harga[1];
			cout<<hargasatuan;
		}
		else if (nama_barang == barang[2]){
			hargasatuan = harga[2];
			cout<<hargasatuan;
		}
		else if (nama_barang == barang[3]){
			hargasatuan = harga[3];
			cout<<hargasatuan;
		}
		else if (nama_barang == barang[4]){
			hargasatuan = harga[4];
			cout<<hargasatuan;
		}
		else if (nama_barang == barang[5]){
			hargasatuan = harga[5];
			cout<<hargasatuan;
		}
		else {
			hargasatuan = 0;
			cout<<"Harga Barang Tidak Ditemukan";
		}
		
		int subtotal[50] = {0};
		subtotal[i] = (jumlah*hargasatuan);
		total += subtotal[i];
		cout<<"\nSub Total\t: "<<subtotal[i];
		
		cout<<"\nTambah Barang (Y/N)? "; cin>>tambah;
		if (tambah == 'Y' || tambah == 'y') jml_beli++;
		else if (tambah == 'N' || tambah == 'n'){
			cout<<"\nTotal\t: ";
			cout<<total;
		}
	}
}
