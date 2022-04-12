#ifndef _INC_FACTS
#define _INC_FACTS

#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<fcntl.h>

using namespace std;

class Quran_fact
{
protected:
int noofSurahs;
int ayah,ruku;
string parah;
string Makki;
string Madni;
string longest;
string shortest;
string revelation;
string f3;
int sujood;
string heart;

public:

void Print_Out(int noofSurahs,int  ayah,int ruku,string heart,string parah,string Makki,string Madni,string longest,string shortest,string revelation,
string f3,int sujood)
{

            this-> noofSurahs=noofSurahs;
            this-> ayah=ayah;
            this->ruku=ruku;
            this-> parah=parah;
            this-> Makki=Makki;
            this-> Madni=Madni;
            this-> longest=longest;
            this-> shortest=shortest;
            this-> revelation=revelation;
            this-> f3=f3;
            this-> sujood=sujood;
            this-> heart=heart;
            system("cls");
            cout<< "\n\n   QURAN FACTS\n";
            cout<<"   ===========\n";
            cout << "No. of Ayahs in Quran: " << ayah << endl;
	        cout << "No. of Rukus: " << ruku<< endl;
	        cout << "No. of Sujood in Quran: " << sujood<< endl;
	        cout << "No. of Parahs: " << parah<< endl;
	        cout << "No. of Surah: " << noofSurahs<< endl;
	        cout << "Longest Surah: " << longest<< endl;
	        cout << "Shortest Surah: " << shortest<< endl;
	        cout << "No. of Madni Surah: " << Madni<< endl;
	        cout << "No. of Makki Surah: " << Makki<< endl;
	        cout << "Revelation of Quran: " << revelation<< endl;
	        cout << "This Surah is called heart of Quran: " << heart<< endl;
			cout << "Virtues:" << f3<< endl;   
}

};

class Surah_Yaseen_facts : public Quran_fact
{
	private:
	        int surahno;
			string name;
			string f2;

			public:

			void Print_Out(int ayah,int ruku,int surahno,string parah,string name,string f2,string f3)
			{

			this->ayah = ayah;
			this->ruku = ruku;
			this->surahno = surahno;
			this->parah = parah;
			this->name = name;
			this->f2 = f2;
			this->f3 = f3;	
            
            cout << "\nSURAH YASIN FACTS:" << endl;
            cout << "=================" << endl;
            cout << "\nNo. of Ayahs: " <<  ayah << endl;
	        cout << "No. of Rukus: " <<  ruku<< endl;
	        cout << "No. of Surah: " <<  surahno<< endl;
	        cout << "Also Known as: " <<  name<< endl;
	        cout << "Classification: " <<  f2<< endl;
	        cout << "Virtues: " << f3 << endl << endl;
	        system("pause");
//	        main();

			}
			
			friend void DISPLAY_SurahYasinFacts(Surah_Yaseen_facts);
};

class Surah_Rahman_facts : public Quran_fact
{
	private:
	        int surahno;
			string name;
			string f2;

        	
			public:

			void Print_Out(int ayah,int ruku,int surahno,string parah,string name,string f2,string f3)
			{

			this->ayah = ayah;
			this->ruku = ruku;
			this->surahno = surahno;
			this->parah = parah;
			this->name = name;
			this->f2 = f2;
			this->f3 = f3;	

            cout << "\nSURAH RAHMAN FACTS:" << endl;
            cout << "=================" << endl;
            cout << "\nNo. of Ayahs: " <<  ayah << endl;
	        cout << "No. of Rukus: " <<  ruku<< endl;
	        cout << "No. of Surah: " <<  surahno<< endl;
	        cout << "Also Known as: " <<  name<< endl;
	        cout << "Classification: " <<  f2<< endl;
	        cout << "Virtues: " << f3<< endl << endl;
	        system("pause");
//	        main();

			}
			
		friend void DISPLAY_SurahRahmanFacts(Surah_Rahman_facts);
};

void DISPLAY_SurahYasinFacts(Surah_Yaseen_facts facts)
 {
 	system("cls");
 	facts.Print_Out(83,5,36,"22,23","Heart of Quran","Makki","Prophet Muhammad(P.B.U.H) said that: If anyone recites Yaseen at the beginning of the day, their needs for that day will be fulfilled.");
 }

 void DISPLAY_SurahRahmanFacts(Surah_Rahman_facts fact)
 { 
    system("cls");
	fact.Print_Out(78,3,55,"27","Zeenat(beauty) of Quran","Madani"," For Protection: If Surah Rahman is recited in the daytime,\nan angel guards the reciter until sunset and if It is recited at the night time,Allah Almighty sends an angel to guard him until he wakes up.");	
 }
 
#endif
