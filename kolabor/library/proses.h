#include<fstream>
using namespace std;
class Proses{
	public :
		void cetak(){
			cout<<"Anda sebagai proses\n";
		}
		void getData(){
			ambil_data.open("input.txt");
			bool ayam_geprek = true;
			while(!ambil_data.eof()){
				if (ayam_geprek){
					ambil_data >> bnyk_ayprek;
					ayam_geprek = false;
				} else{
					ambil_data >> bnyk_ayreng;
          ambil_data >> bnyk_udreng;
          ambil_data >> bnyk_cureng;
          ambil_data >> bnyk_aykar;
				}
			}
			ambil_data.close();
		}

    void toFile(){
			int total = (hrg_ayprek * bnyk_ayprek) + (hrg_ayreng * bnyk_ayreng) + (hrg_udreng * bnyk_udreng) + (hrg_cureng * bnyk_cureng) + (hrg_aykar * bnyk_aykar);
			float batas = 25000;
      float ongkir;
			float t2 = float(total);
			float diskon;
      
      if (total >= 150000){
        diskon = t2 * 0.35;
      } else if (total >= 50000){
        diskon = t2 * 0.15;
      }

			if (total >= batas){
				t2 = t2 - diskon;
      } else {
        t2 = t2;
      }

			tulis_data.open("input.txt");
			tulis_data << total << endl;//0
			tulis_data << diskon << endl;//1
			tulis_data << t2 << endl;//2
			tulis_data << bnyk_ayprek << endl;//3
			tulis_data << bnyk_ayreng << endl;//4
      tulis_data << bnyk_udreng << endl;//5
      tulis_data << bnyk_cureng << endl;//6
      tulis_data << bnyk_aykar << endl;//7
			tulis_data.close();
		}
		
private :
		ifstream ambil_data;
		ofstream tulis_data;
    int bnyk_ayprek;
    int bnyk_ayreng;
    int bnyk_udreng;
    int bnyk_cureng;
    int bnyk_aykar;
		int hrg_ayprek = 21000;
		int hrg_ayreng = 17000;
    int hrg_udreng = 19000;
    int hrg_cureng = 20000;
    int hrg_aykar = 25000;
};