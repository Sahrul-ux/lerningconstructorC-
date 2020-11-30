#include <iostream>


using namespace std;

// class tanpa constructor
class Polos {
	public:
		string dataString;
		int dataInteger;
};

// class dengan constructor
class Mahasiswa {
	public:
		string nama;
		string NIM;
		string jurusan;
		double IPK;
		
		// ini adalah constructor yang dipanggil pertamakali
//		Mahasiswa(){
//			cout << "ini adalah constructor" << endl;
//		}

		// constructor dengan parameter
		Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK){
			Mahasiswa::nama = inputNama;
			Mahasiswa::NIM = inputNIM;
			Mahasiswa::jurusan = inputJurusan;
			Mahasiswa::IPK = inputIPK;
			
			cout << Mahasiswa::nama << endl;
			cout << Mahasiswa::NIM << endl;
			cout << Mahasiswa::jurusan << endl;
			cout << Mahasiswa::IPK << endl;
		}

};

int main(int argc, char** argv) {
	
	Mahasiswa mahasiswa1("ucup", "1855201092", "Teknik Pangan", 3.00);
	
	cout << "\n \n";
	
	Mahasiswa mahasiswa2("galih", "1855201093", "Teknik industri", 4.00);

	
//	Polos objectPolos;
//	objectPolos.dataString = "polos";
//	objectPolos.dataInteger = 0;
//	
//	cout << objectPolos.dataString << endl;
//	cout << objectPolos.dataInteger << endl;
	return 0;
}
