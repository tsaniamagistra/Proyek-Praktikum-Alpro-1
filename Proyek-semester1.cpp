#include <iostream>
#include <iomanip>

using namespace std;

void hitungpembelian(string barang[6], int stok[6], int harga[6]);

int main(){
	string barang[6] = {"Sabun Mandi","Minyak Goreng","Sikat Gigi","Pasta Gigi","Mie Instan","Tissue"};
	string username,password;
	char kembali_menu,hitung_kembali,ulang_login;
	int stok[6] = {100,90,110,80,85,100};
	int harga[6] = {5000,12000,4000,7000,3000,10000};
	int menu;
	int databarang = sizeof(barang)/sizeof(barang[0]);
	
	do{
	system("CLS");
	cout<<"PROGRAM KASIR MINIMARKET"<<endl;
	cout<<setfill('=')<<setw(50)<<"="<<endl;
	cout<<"Silakan Masukkan Username & Password"<<endl;
	cout<<"Username\t= ";
	cin>>username;
	cout<<"Password\t= ";
	cin>>password;
	
	//username dan password benar
	if ((username == "Seva" && password == "123210061")||(username == "Tsania" && password == "123210090"))
	do{
	system("CLS");
	cout<<"PROGRAM KASIR MINIMARKET"<<endl;
	cout<<setfill('=')<<setw(50)<<"="<<endl
		<<"\nSelamat Datang "<<username<<" ^^"<<endl
		<<"\nSilakan Pilih Menu"<<endl
		<<"1. Daftar Barang"<<endl
		<<"2. Daftar Harga"<<endl
		<<"3. Hitung Pembelian"<<endl
		<<"Pilih Menu\t= ";
	cin>>menu;
	if (menu == 1){
		cout<<"\nDaftar Barang"<<endl;
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
		cout<<setiosflags(ios::left)<<setfill(' ')<<setw(25)<<"Barang"<<"| "
			<<setiosflags(ios::left)<<setfill(' ')<<setw(22)<<"Stok Barang"<<"|"<<endl;
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
		for(int k = 0; k < databarang; k++){
			cout<<setiosflags(ios::left)<<setfill(' ')<<setw(25)<<barang[k]<<"| "
				<<setiosflags(ios::left)<<setw(22)<<stok[k]<<"|"<<endl;
		}
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
	}
	else if (menu == 2){
		cout<<"\nDaftar Harga"<<endl;
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
		cout<<setiosflags(ios::left)<<setfill(' ')<<setw(25)<<"Barang"<<"| "
			<<setiosflags(ios::left)<<setfill(' ')<<setw(22)<<"Harga Barang"<<"|"<<endl;
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
		for(int k = 0; k < databarang; k++){
			cout<<setiosflags(ios::left)<<setfill(' ')<<setw(25)<<barang[k]<<"| "
				<<setiosflags(ios::left)<<setw(22)<<harga[k]<<"|"<<endl;
		}
		cout<<setfill('-')<<setw(50)<<"-"<<endl;
	}
	else if (menu == 3){do{
		cout<<"\nHitung Pembelian"<<endl;
		hitungpembelian(barang,stok,harga);
		cout<<"\nHitung Kembali (Y/N)? ";
		cin>>hitung_kembali;
		}while (hitung_kembali == 'Y' || hitung_kembali == 'y');
	}
	else{
		cout<<endl<<"Input Tidak Sesuai";	
	}
	cout<<"\nKembali ke Menu (Y/N)? ";
	cin>>kembali_menu;
	if (kembali_menu == 'y' || kembali_menu == 'Y') system("CLS");
	}while (kembali_menu == 'y' || kembali_menu == 'Y');
	
	//username atau password salah
	else{
		cout<<"\nUsername/Password Salah"<<endl;
		cout<<"Input ulang username & password (Y/N)? ";
		cin>>ulang_login;
		}
	}while (ulang_login == 'y' || ulang_login == 'Y');
	
	return 0;
}

void hitungpembelian(string barang[6], int stok[6], int harga[6]){
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
		
		cout<<"Harga Satuan\t: ";
		if (nama_barang == barang[0]){
			hargasatuan = harga[0];
			cout<<hargasatuan;
			cout<<"\nJumlah\t\t: ";
			cin>>jumlah;
			stok[0] = stok[0] - jumlah;
		}
		else if (nama_barang == barang[1]){
			hargasatuan = harga[1];
			cout<<hargasatuan;
			cout<<"\nJumlah\t\t: ";
			cin>>jumlah;
			stok[1] = stok[1] - jumlah;
		}
		else if (nama_barang == barang[2]){
			hargasatuan = harga[2];
			cout<<hargasatuan;
			cout<<"\nJumlah\t\t: ";
			cin>>jumlah;
			stok[2] = stok[2] - jumlah;
		}
		else if (nama_barang == barang[3]){
			hargasatuan = harga[3];
			cout<<hargasatuan;
			cout<<"\nJumlah\t\t: ";
			cin>>jumlah;
			stok[3] = stok[3] - jumlah;
		}
		else if (nama_barang == barang[4]){
			hargasatuan = harga[4];
			cout<<hargasatuan;
			cout<<"\nJumlah\t\t: ";
			cin>>jumlah;
			stok[4] = stok[4] - jumlah;
		}
		else if (nama_barang == barang[5]){
			hargasatuan = harga[5];
			cout<<hargasatuan;
			cout<<"\nJumlah\t\t: ";
			cin>>jumlah;
			stok[5] = stok[5] - jumlah;
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
