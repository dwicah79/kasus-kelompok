#include <fstream>
#include <iostream>
using namespace std;

class Output{
	public :
	  void cetak(){
	    cout<<"Anda sebagai output \n";
      cout<<"Struk Belanja \n";
      cout<<"Yang dibeli : \n";
      cout<<" Aayam geprek -> "<<data_file[3]<<endl;
      cout<<" Ayam goreng -> "<<data_file[4]<<endl;
      cout<<" Udang goreng -> "<<data_file[5]<<endl;
      cout<<" Cumi goreng -> "<<data_file[6]<<endl;
      cout<<" Ayam bakar -> "<<data_file[7]<<endl;
      cout<<" Harga total	Rp. "<< data_file[0]<<endl;
      cout<<" Diskon		RP. "<<data_file[1]<<endl;
      cout<<"Harga Bayar	Rp. "<<data_file[2];
	}
	
   void getData(){
     ambil_data.open("input.txt");
     string t;
     while(!ambil_data.eof()){
       ambil_data>>data_file[index];
       index += 1;
     }
     ambil_data.close();
   }

    void toFile() {
    tulis_data.open("input.txt");
    tulis_data<<"Anda sebagai output \n";
    tulis_data<<"Struk Belanja \n";
    tulis_data<<"Yang dibeli : \n";
    tulis_data<<" Aayam geprek -> "<<data_file[3]<<endl;
    tulis_data<<" Ayam goreng -> "<<data_file[4]<<endl;
    tulis_data<<" Udang goreng -> "<<data_file[5]<<endl;
    tulis_data<<" Cumi goreng -> "<<data_file[6]<<endl;
    tulis_data<<" Ayam bakar -> "<<data_file[7]<<endl;
    tulis_data<<" Harga total	Rp. "<< data_file[0]<<endl;
    tulis_data<<" Diskon		RP. "<<data_file[1]<<endl;
    tulis_data<<"Harga Bayar	Rp. "<<data_file[2];
    tulis_data.close();
  }
private :
   ifstream ambil_data;
  ofstream tulis_data;
   string data_file[30];
   int index = 0;
};