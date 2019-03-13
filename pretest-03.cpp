/*Nama Program		: Pretest-03
Nama				: Gede Bagus Darmagita
NPM					: 140810180068
Tanggal Buat		: 13-03-2019
Deskripsi 			: pretest 03
*/

#include <iostream>
using namespace std;

struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData (int& n);
void inputMhs (larikMhs& mhs, int n);
void cetakMhs (larikMhs mhs, int n);
void sortNama (larikMhs& mhs, int n);

int main(){
	int n;
	larikMhs mhs;
	
	banyakData(n);
	inputMhs (mhs, n);
	cetakMhs(mhs, n);
}


void banyakData (int& n){
	cout<<"Masukan Banyak Mahasiswa: ";
	cin>>n;
}
void inputMhs (larikMhs& mhs, int n){
	int i;
	if (i = 0, i<n, i++){
		cout<<"Nama: ";
		cin>>mhs.nama;
		cout<<"NPM: ";
		cin>>mhs.npm;
		cout<<"IPK: ";
		cin>>mhs.ipk;
	}
}
void cetakMhs (larikMhs mhs, int n){
	int i;
	if (i = 0, i<n, i++){
		cout<<mhs.nama;
		cout<<mhs.npm;
		cout<<mhs.ipk;
	}
}

void sortNama (larikMhs& mhs, int n){
	
}

