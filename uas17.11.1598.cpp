  #include <iostream>
  #include <string.h>
  #define BUNGA 0.5
  using namespace std;
  class cicilan
   {
   	private:
   		char nama [100];
   		int pinjam;
   		int lama;
   		int per_bulan;
   	public:
   		void masukan_data(char nm[],int pnj,int lm);
   		int hitung();
   };
   int cicilan::hitung()
   {
   	per_bulan=(int)((pinjam + (pinjam*BUNGA))/lama);
   	return per_bulan;
   }
   void cicilan::masukan_data(char nm[],int pnj,int lm){
   strcpy(nm,nama);
   pinjam = pnj;
   lama = lm;
   };
   int main()
   {
   	cicilan x;
   	char n[100];
   	int p;
   	int i;
   	int angsuran;
   	cout<<"=====aplikasi jasa peminjaman uang======"<<endl;
   	cout<<"masukan nama peminjam uang :";
   	cin>>n;
   	cout<<"masukan jumlah pinjaman    :";
   	cin>>p;
   	cout<<"masukan lama peminjaman (dalam bulan):";
   	cin>>i;
   	cout<<"=============data sedang di proses==============";
	   cout<<endl;
   	
   	x.masukan_data(n,p,i);
   	angsuran =x.hitung();
   	cout<<"angsuran"<< n <<" adalah sebesar :"<<angsuran<<" perbulan"<<endl;
   	return 0;
   }
