#include<iostream>
using namespace std;

int main ()
{
   int A;
   double B, D;
   char ch = 'C';

   cout<<"Masukkan dua nilai: ";
   cin>>A>>B;

   try //blok try
   {
      if(B == 0.0)
         throw ch; //melempar tipe char
      else
	  { 
         D = A/B;
         cout<<"D = "<<D<<endl; 
	  }
   } //akhir dari blok try

   catch (int)		//blok penanganan eksepsi untuk int
   { 
	   cout<<"Eksepsi tipe \"int\" ditangkap."<<endl; 
   }

   catch( double)	//blok penanganan eksepsi untuk double
   { 
	   cout<<"Eksepsi tipe \"double\" ditangkap."<<endl;
   }

   return 0;
}