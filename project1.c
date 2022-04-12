#include<Stdio.h>
#include<windows.h>
#include<MMSystem.h>
#include<conio.h>
#include<string.h>
#include<wchar.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>
#define unicode 0x20000   
#define _INC_WCHAR

void translation_y(int j);
void search_by_zikr_y();
void translation_r(int j);
void sound(int n);
void wholeSurahYaseen(void);
void wholeSurahRehman(void);
int SurahYaseen(int n);
void searchmultiple_y ();
int SurahRahman(int n);
void search_by_zikr_r();
void searchmultiple_r ();
void searchmultiple_r ();
struct Quranfacts
{
int noofSurahs;
int  ayah,ruku;
char parah[200];
	char Makki[200];
	char Madni[200];
 char longest[30];
 char shortest[30];
 char revelation[200];
 char f3[200];
 int sujood;
}q;
struct facts{
	int  ayah,ruku,surahno;
	char name[200],parah[200];
	char f2[200];
	char f3[200];
}r,y;
void Intro(){
	char *txt = " ATM  Software";
int x = 39;
int c = 22;
	for(int j=0;j<x-1;j++){
		gotoxy(x-j,10);
		printf("%c",c);
		gotoxy(x+j,10);
		printf("%c",c);
		usleep(25000);
	}

	for(int i = 0;i<9;i++){
		for(int j=0;j<x-1;j++){
			gotoxy(x-j,9-i);
			printf("%c",c+2);
			gotoxy(x+j,9-i);
			printf("%c",c+2);
			gotoxy(x-j,9+i);
			printf("%c",c+3);
			gotoxy(x+j,9+i);
			printf("%c",c+3);
		}
		usleep(30000);
		for(int k=0;k<x-1;k++){
			gotoxy(x-k,9-i);
			printf(" ");
			gotoxy(x+k,9-i);
			printf(" ");
			gotoxy(x-k,9+i);
			printf(" ");
			gotoxy(x+k,9+i);
			printf(" ");
			}	
		
	}		
		for(int l=0;l<x;l++){
		gotoxy(x-l,1);
		printf("%c",c);
		gotoxy(x+l,1);
		printf("%c",c);
		gotoxy(x-l,17);
		printf("%c",c);
		gotoxy(x+l,17);
		printf("%c",c);
		}

for(int j=0;j<9;j++){
		gotoxy(x,10-j);
		printf("%c",c);
		gotoxy(x,10+j-1);
		printf("%c",c);
		usleep(25000);
	}

for(int i = 0;i<x-1;i++){
		for(int j=0;j<8;j++){
			gotoxy(x-i,9-j);
			printf("%c",c+5);
			gotoxy(x+i,9-j);
			printf("%c",c+4);
			gotoxy(x-i,9+j);
			printf("%c",c+5);
			gotoxy(x+i,9+j);
			printf("%c",c+4);
		}
		usleep(25000);
		for(int k=0;k<8;k++){
			gotoxy(x-i,9-k);
			printf(" ");
			gotoxy(39-i,8);
			printf("%c",txt[6-i]);
			gotoxy(x+i,9-k);
			printf(" ");
			gotoxy(x-i,9+k);
			printf(" ");
			if(i <8){
			gotoxy(39+i,8);
			printf("%c",txt[6+i]);}
			gotoxy(x+i,9+k);
			printf(" ");
			}	
		
	}}
int main()
{
	system("COLOR 60");
	Intro();
//	printf("\n\n\n\n\t\t\t\t\t\t\t\t***********************\n\n\n\n\t\t\t\t\t\t\t\t***********************\n\t\t\t\t\t\t\t\t ****Digital Quran****\n\t\t\t\t\t\t\t\t***********************\n\n\n\n\t\t\t\t\t\t\t\t***********************");
	char b;
	printf("\n \t\t\t\t\t\t\t\tPress enter to Continue\n");
	scanf("%c",&b);
	if(b=='\n')
	{
	system("CLS");
	system("COLOR 16");
    int a;
	printf("Enter:\n1 for Surah Rahman\n2 for Surah Yaseen\n3 To know facts about Holy Quran\nTo exit enter 0\nEnter your choice here= ");
	scanf("%d", &a);
	if (a == 1)
    {
        int n;
	    printf("\nTo print whole surah enter 0\nTo search any single ayah enter 1\nTo search multiple ayah press 2\nTo search any zikr of any thing in this surah enter 3\nTo kow facts of Surah Rahman Press 4\nEnter your choice here=");
	    scanf("%d", &n);
        if(n==0)
        {
            wholeSurahRehman();
        }
        if(n==1)
        {
            int i;
            printf("Enter ayah number to be searched=");
            scanf("%d",&i);
            SurahRahman(i);
            system("pause");
            main();
        }
        if(n==2)
        {
            searchmultiple_r();
           
        }
        if(n==3)
        {
            search_by_zikr_r();
            system("pause");
            main();
        }
        if(n==4)
        {
        	//facts of surah rahman
	        r.ayah=78;
	        r.ruku=3;
	        r.surahno=55;
	        strcpy(r.parah,"27");
	        strcpy(r.name,"Zeenat(beauty) of Quran");
            strcpy(r.f2,"Madani");
	        strcpy(r.f3," For Protection: If Surah Rahman is recited in the daytime, an angel guards the reciter until sunset and if It is recited at the night time, Allah Almighty sends an angel to guard him until he wakes up.");
            
			printf("No. of Ayahs: %d\n",r.ayah);
	        printf("No. of Rukus: %d\n",r.ruku);
	        printf("No. of Surah: %d\n",r.surahno);
	        printf("Also Known as: %s\n",r.name);
	        printf("Classification: %s\n",r.f2);
	        printf("Virtues: %s\n",r.f3);   
	         system("pause");
	         main();
	        
	        }
    }
	else if(a==2)
    {
        int n;
	    printf("\nTo print whole surah enter 0\nTo search any single ayah enter 1\nTo search multiple ayah press 2\nTo search zikr of any thing in this surah enter 3\nTo kow facts of Surah Yaseen Press 4\nEnter your choice here=");
	    scanf("%d", &n);
        if(n==0)
        {
            wholeSurahYaseen();
        }
        if(n==1)
        {
            int i;
            printf("Enter ayah number to be searched=");
            scanf("%d",&i);
            SurahYaseen(i);
            system("pause");
            main();
        }
        if(n==2)
        {
            searchmultiple_y();
        }
        if(n==3)
        {
            search_by_zikr_y();
            system("pause");
           main();
        }
          {
        	y.ayah=83;
	        y.ruku=5;
	        y.surahno=36;
         	strcpy(y.parah,"22,23");
	        strcpy(y.name,"Heart of Quran");
	        strcpy(y.f2,"Makki");
	        strcpy(y.f3,"Prophet Muhammad(P.B.U.H) said that: If anyone recites Yaseen at the beginning of the day, their needs for that day will be fulfilled.");
        	
        	printf("\nNo. of Ayahs: %d\n",y.ayah);
	        printf("No. of Rukus: %d\n",y.ruku);
	        printf("No. of Surah: %d\n",y.surahno);
	        printf("Also Known as: %s\n",y.name);
	        printf("Classification: %s\n",y.f2);
	        printf("Virtues: %s\n",y.f3);
	         system("pause");
	         main();
		}
	
    }
    else if(a==3)
	       {
		   
		    q.noofSurahs=114;
	        q.ayah=6236;
	        q.ruku=540;
	        strcpy(q.parah,"30");
	        strcpy(q.shortest,"Surah Kausar");
	        strcpy(q.longest,"Surah Baqarah");
            strcpy(q.Madni,"28");
            strcpy(q.Makki,"86");
	        strcpy(q.f3,"1.The Quran will intercede for people who recited it on Judgment Day.\n2.10 rewards for reciting a single letter of The Holy Quran.\n3..");
            strcpy(q.revelation,"Quran was revealed over 23 years: 13 in Mecca and 10 in Madina");
            q.sujood=14;
			
			printf("No. of Ayahs in Quran: %d\n",q.ayah);
	        printf("No. of Rukus: %d\n",q.ruku);
	        printf("No. of Sujood in Quran: %d\n",q.sujood);
	        printf("No. of Parahs: %s\n",q.parah);
	        printf("No. of Surah: %d\n",q.noofSurahs);
	        printf("Longest Surah: %s\n",q.longest);
	       printf("Shortest Surah: %s\n",q.shortest);
	        printf("No. of Madni Surah: %s\n",q.Madni);
	        printf("No. of Makki Surah: %s\n",q.Makki);
	        printf("Revelation of Quran: %s\n",q.revelation);
	        printf("Virtues:\n%s\n",q.f3);   
	         system("pause");
	         main();
	        
	        }
    if(a==0)
    {
    	exit(0);
	}
	}
else if(b!='\n')

{
	printf("Wrong key!");
scanf("%c",&b);
if(b=='\n')
main();
}

}

int SurahYaseen(int n)
{
	switch (n)
	{
	case 1:
		printf(" يسٓ \n");
		translation_y(n);
		sound(n);
		break;
	case 2:
		printf("وَٱلْقُرْءَانِ ٱلْحَكِيمِ\n");
		translation_y(n);
		//n=n+100;
		sound(n);
		break;
	case 3:
		printf("إِنَّكَ لَمِنَ ٱلْمُرْسَلِينَ \n");
		translation_y(n);
		sound(n);
		break;
	case 4:
		printf("عَلَىٰ صِرَٰطٍ مُّسْتَقِيمٍ\n");
		translation_y(n);
		sound(n);
		break;
	case 5:
		printf("تَنزِيلَ ٱلْعَزِيزِ ٱلرَّحِيمِ\n");
		translation_y(n);
		sound(n);
		break;
	case 6:
		printf(" لِتُنذِرَ قَوْمًا مَّآ أُنذِرَ ءَابَآؤُهُمْ فَهُمْ غَٰفِلُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 7:
		printf("لَقَدْ حَقَّ ٱلْقَوْلُ عَلَىٰٓ أَكْثَرِهِمْ فَهُمْ لَا يُؤْمِنُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 8:
		printf(" إِنَّا جَعَلْنَا فِىٓ أَعْنَٰقِهِمْ أَغْلَٰلًا فَهِىَ إِلَى ٱلْأَذْقَانِ فَهُم مُّقْمَحُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 9:
		printf("وَجَعَلْنَا مِنۢ بَيْنِ أَيْدِيهِمْ سَدًّا وَمِنْ خَلْفِهِمْ سَدًّا فَأَغْشَيْنَٰهُمْ فَهُمْ لَا يُبْصِرُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 10:
		printf("وَسَوَآءٌ عَلَيْهِمْ ءَأَنذَرْتَهُمْ أَمْ لَمْ تُنذِرْهُمْ لَا يُؤْمِنُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 11:
		printf("إِنَّمَا تُنذِرُ مَنِ ٱتَّبَعَ ٱلذِّكْرَ وَخَشِىَ ٱلرَّحْمَٰنَ بِٱلْغَيْبِ ۖ فَبَشِّرْهُ بِمَغْفِرَةٍ وَأَجْرٍ كَرِيمٍ\n");
		translation_y(n);
		sound(n);
		break;
	case 12:
		printf("إِنَّا نَحْنُ نُحْىِ ٱلْمَوْتَىٰ وَنَكْتُبُ مَا قَدَّمُوا۟ وَءَاثَٰرَهُمْ ۚ وَكُلَّ شَىْءٍ أَحْصَيْنَٰهُ فِىٓ إِمَامٍ مُّبِينٍ\n");
		translation_y(n);
		sound(n);
		break;
	case 13:
		printf("وَٱضْرِبْ لَهُم مَّثَلًا أَصْحَٰبَ ٱلْقَرْيَةِ إِذْ جَآءَهَا ٱلْمُرْسَلُونَ  \n");
		translation_y(n);
		sound(n);
		break;
	case 14:
		printf("إِذْ أَرْسَلْنَآ إِلَيْهِمُ ٱثْنَيْنِ فَكَذَّبُوهُمَا فَعَزَّزْنَا بِثَالِثٍ فَقَالُوٓا۟ إِنَّآ إِلَيْكُم مُّرْسَلُونَ\n");
		translation_y(n);
		sound(n);
		break;
	case 15:
		printf("قَالُوا۟ مَآ أَنتُمْ إِلَّا بَشَرٌ مِّثْلُنَا وَمَآ أَنزَلَ ٱلرَّحْمَٰنُ مِن شَىْءٍ إِنْ أَنتُمْ إِلَّا تَكْذِبُونَ  \n");
		translation_y(n);
		sound(n);
		break;
	case 16:
		printf("قَالُوا۟ رَبُّنَا يَعْلَمُ إِنَّآ إِلَيْكُمْ لَمُرْسَلُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 17:
		printf("وَمَا عَلَيْنَآ إِلَّا ٱلْبَلَٰغُ ٱلْمُبِينُ\n");
		translation_y(n);
		sound(n);
		break;
	case 18:
		printf("قَالُوٓا۟ إِنَّا تَطَيَّرْنَا بِكُمْ ۖ لَئِن لَّمْ تَنتَهُوا۟ لَنَرْجُمَنَّكُمْ وَلَيَمَسَّنَّكُم مِّنَّا عَذَابٌ أَلِيمٌ \n");
		translation_y(n);
		sound(n);
		break;
	case 19:
		printf("قَالُوا۟ طَٰٓئِرُكُم مَّعَكُمْ ۚ أَئِن ذُكِّرْتُم ۚ بَلْ أَنتُمْ قَوْمٌ مُّسْرِفُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 20:
		printf("وَجَآءَ مِنْ أَقْصَا ٱلْمَدِينَةِ رَجُلٌ يَسْعَىٰ قَالَ يَٰقَوْمِ ٱتَّبِعُوا۟ ٱلْمُرْسَلِينَ \n");
		translation_y(n);
		sound(n);
		break;
	case 21:
		printf("ٱتَّبِعُوا۟ مَن لَّا يَسْـَٔلُكُمْ أَجْرًا وَهُم مُّهْتَدُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 22:
		printf("وَمَا لِىَ لَآ أَعْبُدُ ٱلَّذِى فَطَرَنِى وَإِلَيْهِ تُرْجَعُونَ\n");
		translation_y(n);
		sound(n);
		break;
	case 23:
		printf("ءَأَتَّخِذُ مِن دُونِهِۦٓ ءَالِهَةً إِن يُرِدْنِ ٱلرَّحْمَٰنُ بِضُرٍّ لَّا تُغْنِ عَنِّى شَفَٰعَتُهُمْ شَيْـًٔا وَلَا يُنقِذُونِ\n");
		translation_y(n);
		sound(n);
		break;
	case 24:
		printf("إِنِّىٓ إِذًا لَّفِى ضَلَٰلٍ مُّبِينٍ\n");
		translation_y(n);
		sound(n);
		break;
	case 25:
		printf("إِنِّىٓ ءَامَنتُ بِرَبِّكُمْ فَٱسْمَعُونِ\n");
		translation_y(n);
		sound(n);
		break;
	case 26:
		printf("قِيلَ ٱدْخُلِ ٱلْجَنَّةَ ۖ قَالَ يَٰلَيْتَ قَوْمِى يَعْلَمُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 27:
		printf("بِمَا غَفَرَ لِى رَبِّى وَجَعَلَنِى مِنَ ٱلْمُكْرَمِينَ \n");
		translation_y(n);
		sound(n);
		break;
	case 28:
		printf("وَمَآ أَنزَلْنَا عَلَىٰ قَوْمِهِۦ مِنۢ بَعْدِهِۦ مِن جُندٍ مِّنَ ٱلسَّمَآءِ وَمَا كُنَّا مُنزِلِينَ \n");
		translation_y(n);
		sound(n);
		break;
	case 29:
		printf(" إِن كَانَتْ إِلَّا صَيْحَةً وَٰحِدَةً فَإِذَا هُمْ خَٰمِدُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 30:
		printf(" يَٰحَسْرَةً عَلَى ٱلْعِبَادِ ۚ مَا يَأْتِيهِم مِّن رَّسُولٍ إِلَّا كَانُوا۟ بِهِۦ يَسْتَهْزِءُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 31:
		printf("أَلَمْ يَرَوْا۟ كَمْ أَهْلَكْنَا قَبْلَهُم مِّنَ ٱلْقُرُونِ أَنَّهُمْ إِلَيْهِمْ لَا يَرْجِعُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 32:
		printf("وَإِن كُلٌّ لَّمَّا جَمِيعٌ لَّدَيْنَا مُحْضَرُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 33:
		printf("وَءَايَةٌ لَّهُمُ ٱلْأَرْضُ ٱلْمَيْتَةُ أَحْيَيْنَٰهَا وَأَخْرَجْنَا مِنْهَا حَبًّا فَمِنْهُ يَأْكُلُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 34:
		printf("وَجَعَلْنَا فِيهَا جَنَّٰتٍ مِّن نَّخِيلٍ وَأَعْنَٰبٍ وَفَجَّرْنَا فِيهَا مِنَ ٱلْعُيُونِ\n");
		translation_y(n);
		sound(n);
		break;
	case 35:
		printf("لِيَأْكُلُوا۟ مِن ثَمَرِهِۦ وَمَا عَمِلَتْهُ أَيْدِيهِمْ ۖ أَفَلَا يَشْكُرُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 36:
		printf("سُبْحَٰنَ ٱلَّذِى خَلَقَ ٱلْأَزْوَٰجَ كُلَّهَا مِمَّا تُنۢبِتُ ٱلْأَرْضُ وَمِنْ أَنفُسِهِمْ وَمِمَّا لَا يَعْلَمُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 37:
		printf("وَءَايَةٌ لَّهُمُ ٱلَّيْلُ نَسْلَخُ مِنْهُ ٱلنَّهَارَ فَإِذَا هُم مُّظْلِمُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 38:
		printf(" وَٱلشَّمْسُ تَجْرِى لِمُسْتَقَرٍّ لَّهَا ۚ ذَٰلِكَ تَقْدِيرُ ٱلْعَزِيزِ ٱلْعَلِيمِ\n");
		translation_y(n);
		sound(n);
		break;
	case 39:
		printf(" وَٱلْقَمَرَ قَدَّرْنَٰهُ مَنَازِلَ حَتَّىٰ عَادَ كَٱلْعُرْجُونِ ٱلْقَدِيمِ\n");
		translation_y(n);
		sound(n);
		break;
	case 40:
		printf("لَا ٱلشَّمْسُ يَنۢبَغِى لَهَآ أَن تُدْرِكَ ٱلْقَمَرَ وَلَا ٱلَّيْلُ سَابِقُ ٱلنَّهَارِ ۚ وَكُلٌّ فِى فَلَكٍ يَسْبَحُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 41:
		printf("وَءَايَةٌ لَّهُمْ أَنَّا حَمَلْنَا ذُرِّيَّتَهُمْ فِى ٱلْفُلْكِ ٱلْمَشْحُونِ\n");
		translation_y(n);
		sound(n);
		break;
	case 42:
		printf("وَخَلَقْنَا لَهُم مِّن مِّثْلِهِۦ مَا يَرْكَبُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 43:
		printf("وَإِن نَّشَأْ نُغْرِقْهُمْ فَلَا صَرِيخَ لَهُمْ وَلَا هُمْ يُنقَذُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 44:
		printf("إِلَّا رَحْمَةً مِّنَّا وَمَتَٰعًا إِلَىٰ حِينٍ\n");
		translation_y(n);
		sound(n);
		break;
	case 45:
		printf("وَإِذَا قِيلَ لَهُمُ ٱتَّقُوا۟ مَا بَيْنَ أَيْدِيكُمْ وَمَا خَلْفَكُمْ لَعَلَّكُمْ تُرْحَمُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 46:
		printf("وَمَا تَأْتِيهِم مِّنْ ءَايَةٍ مِّنْ ءَايَٰتِ رَبِّهِمْ إِلَّا كَانُوا۟ عَنْهَا مُعْرِضِينَ \n");
		translation_y(n);
		sound(n);
		break;
	case 47:
		printf("وَإِذَا قِيلَ لَهُمْ أَنفِقُوا۟ مِمَّا رَزَقَكُمُ ٱللَّهُ قَالَ ٱلَّذِينَ كَفَرُوا۟ لِلَّذِينَ ءَامَنُوٓا۟ أَنُطْعِمُ مَن لَّوْ يَشَآءُ ٱللَّهُ أَطْعَمَهُۥٓ إِنْ أَنتُمْ إِلَّا فِى ضَلَٰلٍ مُّبِينٍ\n");
		translation_y(n);
		sound(n);
		break;
	case 48:
		printf("وَيَقُولُونَ مَتَىٰ هَٰذَا ٱلْوَعْدُ إِن كُنتُمْ صَٰدِقِينَ \n");
		translation_y(n);
		sound(n);
		break;
	case 49:
		printf("مَا يَنظُرُونَ إِلَّا صَيْحَةً وَٰحِدَةً تَأْخُذُهُمْ وَهُمْ يَخِصِّمُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 50:
		printf(" فَلَا يَسْتَطِيعُونَ تَوْصِيَةً وَلَآ إِلَىٰٓ أَهْلِهِمْ يَرْجِعُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 51:
		printf("وَنُفِخَ فِى ٱلصُّورِ فَإِذَا هُم مِّنَ ٱلْأَجْدَاثِ إِلَىٰ رَبِّهِمْ يَنسِلُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 52:
		printf(" قَالُوا۟ يَٰوَيْلَنَا مَنۢ بَعَثَنَا مِن مَّرْقَدِنَا هَٰذَا مَا وَعَدَ ٱلرَّحْمَٰنُ وَصَدَقَ ٱلْمُرْسَلُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 53:
		printf(" إِن كَانَتْ إِلَّا صَيْحَةً وَٰحِدَةً فَإِذَا هُمْ جَمِيعٌ لَّدَيْنَا مُحْضَرُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 54:
		printf("فَٱلْيَوْمَ لَا تُظْلَمُ نَفْسٌ شَيْـًٔا وَلَا تُجْزَوْنَ إِلَّا مَا كُنتُمْ تَعْمَلُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 55:
		printf("إِنَّ أَصْحَٰبَ ٱلْجَنَّةِ ٱلْيَوْمَ فِى شُغُلٍ فَٰكِهُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 56:
		printf(" هُمْ وَأَزْوَٰجُهُمْ فِى ظِلَٰلٍ عَلَى ٱلْأَرَآئِكِ مُتَّكِـُٔونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 57:
		printf(" لَهُمْ فِيهَا فَٰكِهَةٌ وَلَهُم مَّا يَدَّعُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 58:
		printf(" سَلَٰمٌ قَوْلًا مِّن رَّبٍّ رَّحِيمٍ\n");
		translation_y(n);
		sound(n);
		break;
	case 59:
		printf("وَٱمْتَٰزُوا۟ ٱلْيَوْمَ أَيُّهَا ٱلْمُجْرِمُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 60:
		printf("أَلَمْ أَعْهَدْ إِلَيْكُمْ يَٰبَنِىٓ ءَادَمَ أَن لَّا تَعْبُدُوا۟ ٱلشَّيْطَٰن إِنَّهُۥ لَكُمْ عَدُوٌّ مُّبِينٌ \n");
		translation_y(n);
		sound(n);
		break;
	case 61:
		printf("وَأَنِ ٱعْبُدُونِى  هَٰذَا صِرَٰطٌ مُّسْتَقِيمٌ\n");
		translation_y(n);
		sound(n);
		break;
	case 62:
		printf("وَلَقَدْ أَضَلَّ مِنكُمْ جِبِلًّا كَثِيرًا أَفَلَمْ تَكُونُوا۟ تَعْقِلُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 63:
		printf(" هٰذِهٖ جَهَنَّمُ الَّتِىۡ كُنۡتُمۡ تُوۡعَدُوۡنَ‐\n");
		translation_y(n);
		sound(n);
		break;
	case 64:
		printf("ٱصْلَوْهَا ٱلْيَوْمَ بِمَا كُنتُمْ تَكْفُرُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 65:
		printf(" ٱلْيَوْمَ نَخْتِمُ عَلَىٰٓ أَفْوَٰهِهِمْ وَتُكَلِّمُنَآ أَيْدِيهِمْ وَتَشْهَدُ أَرْجُلُهُم بِمَا كَانُوا۟ يَكْسِبُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 66:
		printf("وَلَوْ نَشَآءُ لَطَمَسْنَا عَلَىٰٓ أَعْيُنِهِمْ فَٱسْتَبَقُوا۟ ٱلصِّرَٰطَ فَأَنَّىٰ يُبْصِرُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 67:
		printf("وَلَوْ نَشَآءُ لَمَسَخْنَٰهُمْ عَلَىٰ مَكَانَتِهِمْ فَمَا ٱسْتَطَٰعُوا۟ مُضِيًّا وَلَا يَرْجِعُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 68:
		printf(" وَمَن نُّعَمِّرْهُ نُنَكِّسْهُ فِى ٱلْخَلْقِ أَفَلَا يَعْقِلُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 69:
		printf("وَمَا عَلَّمْنَٰهُ ٱلشِّعْرَ وَمَا يَنۢبَغِى لَهُۥٓ إِنْ هُوَ إِلَّا ذِكْرٌ وَقُرْءَانٌ مُّبِينٌ \n");
		translation_y(n);
		sound(n);
		break;
	case 70:
		printf(" لِّيُنذِرَ مَن كَانَ حَيًّا وَيَحِقَّ ٱلْقَوْلُ عَلَى ٱلْكَٰفِرِينَ \n");
		translation_y(n);
		sound(n);
		break;
	case 71:
		printf("أَوَلَمْ يَرَوْا۟ أَنَّا خَلَقْنَا لَهُم مِّمَّا عَمِلَتْ أَيْدِينَآ أَنْعَٰمًا فَهُمْ لَهَا مَٰلِكُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 72:
		printf("وَذَلَّلْنَٰهَا لَهُمْ فَمِنْهَا رَكُوبُهُمْ وَمِنْهَا يَأْكُلُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 73:
		printf(" وَلَهُمْ فِيهَا مَنَٰفِعُ وَمَشَارِبُ أَفَلَا يَشْكُرُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 74:
		printf("وَٱتَّخَذُوا۟ مِن دُونِ ٱللَّهِ ءَالِهَةً لَّعَلَّهُمْ يُنصَرُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 75:
		printf(" لَا يَسْتَطِيعُونَ نَصْرَهُمْ وَهُمْ لَهُمْ جُندٌ مُّحْضَرُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 76:
		printf("فَلَا يَحْزُنكَ قَوْلُهُمْ ۘ إِنَّا نَعْلَمُ مَا يُسِرُّونَ وَمَا يُعْلِنُونَ \n");
		translation_y(n);
		sound(n);
		break;
	case 77:
		printf("أَوَلَمْ يَرَ ٱلْإِنسَٰنُ أَنَّا خَلَقْنَٰهُ مِن نُّطْفَةٍ فَإِذَا هُوَ خَصِيمٌ مُّبِينٌ \n");
		translation_y(n);
		sound(n);
		break;
	case 78:
		printf("وَضَرَبَ لَنَا مَثَلًا وَنَسِىَ خَلْقَهُۥ ۖ قَالَ مَن يُحْىِ ٱلْعِظَٰمَ وَهِىَ رَمِيمٌ \n");
		translation_y(n);
		sound(n);
		break;
	case 79:
		printf("  قُلْ يُحْيِيهَا ٱلَّذِىٓ أَنشَأَهَآ أَوَّلَ مَرَّةٍ ۖ وَهُوَ بِكُلِّ خَلْقٍ عَلِيمٌ \n");
		translation_y(n);
		sound(n);
		break;
	case 80:
		printf(" ٱلَّذِى جَعَلَ لَكُم مِّنَ ٱلشَّجَرِ ٱلْأَخْضَرِ نَارًا فَإِذَآ أَنتُم مِّنْهُ تُوقِدُونَ\n");
		translation_y(n);
		sound(n);
		break;
	case 81:
		printf("أَوَلَيْسَ ٱلَّذِى خَلَقَ ٱلسَّمَٰوَٰتِ وَٱلْأَرْضَ بِقَٰدِرٍ عَلَىٰٓ أَن يَخْلُقَ مِثْلَهُم ۚ بَلَىٰ وَهُوَ ٱلْخَلَّٰقُ ٱلْعَلِيمُ \n");
		translation_y(n);
		sound(n);
		break;
	case 82:
		printf("إِنَّمَآ أَمْرُهُۥٓ إِذَآ أَرَادَ شَيْـًٔا أَن يَقُولَ لَهُۥ كُن فَيَكُونُ\n");
		translation_y(n);
		sound(n);
		break;
	case 83:
		printf(" فَسُبْحَٰنَ ٱلَّذِى بِيَدِهِۦ مَلَكُوتُ كُلِّ شَىْءٍ وَإِلَيْهِ تُرْجَعُونَ\n");
		translation_y(n);
		sound(n);
		break;
	}
}
void translation_y(int j)
{
    FILE *fp;
    int ch;
   //nt chh = -1;
    fp=fopen("surah_yaseen.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
   

    char arr[300];
   	for (int i=0;i<j;i++)
   	fgets(arr,300,fp);
   	
   	printf("%s",arr);
}

void search_by_zikr_y()
{
    char a[200];
    printf("Type the waqia you want to search=");
   scanf("%s",a);
    FILE *fp;
    
    char ch;
    fp=fopen("surah_yaseen.txt","rb");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    char b[1000];
    while(!feof(fp))
    {
        fgets(b,1000,fp);
        int pos=0;
    for(int i=0,j=0;i<strlen(b);i++)
    {
       char word[30];
       memset(word,0,30);
       
       // Extract word from sentence
       for(int j=i,k=0;b[j]!=32;j++,k++)
       {
           word[k] = b[j];
           pos = j;
       }
       
       
       // check word against user query
       if(strcmp(a,word)==0)
       {
           printf("%s",b);
           break;
       }

       }
       }
    fclose(fp);
    //main();
}

void translation_r(int j)
{
    FILE *fp;
    int ch;

    fp=fopen("surah_rahman.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
   

      char arr[200];
   	  for (int i=0;i<j;i++)
   	  fgets(arr,200,fp);
   	  printf("%s",arr);
}

void sound(int n)
{

  char bf[10];
  itoa(n,bf,10);
  strcat(bf,".wav");
  
 
  PlaySound(bf,NULL,SND_SYNC);
}

void wholeSurahYaseen(void)
{
    for(int i=0;i<83;i++)
    {
        int n=i+1;
        SurahYaseen(n);
    }
    main();
}

void wholeSurahRehman(void)
{
    for(int i=0;i<78;i++)
    {
        int n=i+1;
        SurahRahman(n);
    }
    main();
}


void searchmultiple_y ()
{
    int j,k;
    printf("Enter ayah from which you want to search=");
    scanf("%d",&j);
    printf("Enter ayah to which you want to search=");
    scanf("%d",&k);
    
    for (int d=j;d<=k;d++)
    {
        SurahYaseen(d);
    }
     system("pause");
    main();
}


int SurahRahman(int n)
{
	
   switch (n)
{
case 1:
	
	printf("ٱلرَّحْمَٰن�\n�");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 2:
	printf("عَلَّمَ ٱلْقُرْءَانَ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 3:
	printf("خَلَقَ ٱلْإِنسَٰنَ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 4:
	printf("عَلَّمَهُ ٱلْبَيَانَ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 5:
	printf("ٱلشَّمْسُ وَٱلْقَمَرُ بِحُسْبَانٍ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 6:
	printf("وَٱلنَّجْمُ وَٱلشَّجَرُ يَسْجُدَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 7:
	printf("وَٱلسَّمَآءَ رَفَعَهَا وَوَضَعَ ٱلْمِيزَانَ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 8:
	printf(" أَلَّا تَطْغَوْا۟ فِى ٱلْمِيزَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 9:
	printf("وَأَقِيمُوا۟ ٱلْوَزْنَ بِٱلْقِسْطِ وَلَا تُخْسِرُوا۟ ٱلْمِيزَانَ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 10:
	printf("وَٱلْأَرْضَ وَضَعَهَا لِلْأَنَامِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 11:
	printf("فِيهَا فَٰكِهَةٌ وَٱلنَّخْلُ ذَاتُ ٱلْأَكْمَامِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 12:
	printf("وَٱلْحَبُّ ذُو ٱلْعَصْفِ وَٱلرَّيْحَانُ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 13:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 14:
	printf("خَلَقَ ٱلْإِنسَٰنَ مِن صَلْصَٰلٍ كَٱلْفَخَّارِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 15:
	printf("وَخَلَقَ ٱلْجَآنَّ مِن مَّارِجٍ مِّن نَّارٍ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 16:
	printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 17:
	printf(" رَبُّ ٱلْمَشْرِقَيْنِ وَرَبُّ ٱلْمَغْرِبَيْنِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 18:
	printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 19:
	printf(" مَرَجَ ٱلْبَحْرَيْنِ يَلْتَقِيَانِ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 20:
	printf("بَيْنَهُمَا بَرْزَخٌ لَّا يَبْغِيَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 21:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 22:
	printf("يَخْرُجُ مِنْهُمَا ٱللُّؤْلُؤُ وَٱلْمَرْجَانُ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 23:
	printf("  فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 24:
	printf("وَلَهُ ٱلْجَوَارِ ٱلْمُنشَـَٔاتُ فِى ٱلْبَحْرِ كَٱلْأَعْلَٰمِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 25:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 26:
	printf("كُلُّ مَنْ عَلَيْهَا فَان� \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 27:
	printf("وَيَبْقَىٰ وَجْهُ رَبِّكَ ذُو ٱلْجَلَٰلِ وَٱلْإِكْرَامِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 28:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 29:
	printf("يَسْـَٔلُهُۥ مَن فِى ٱلسَّمَٰوَٰتِ وَٱلْأَرْضِ ۚ كُلَّ يَوْمٍ هُوَ فِى شَأْنٍ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 30:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 31:
	printf("سَنَفْرُغُ لَكُمْ أَيُّهَ ٱلثَّقَلَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 32:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 33:
	printf(" يَٰمَعْشَرَ ٱلْجِنِّ وَٱلْإِنسِ إِنِ ٱسْتَطَعْتُمْ أَن تَنفُذُوا۟ مِنْ أَقْطَارِ ٱلسَّمَٰوَٰتِ وَٱلْأَرْضِ فَٱنفُذُوا۟ ۚ لَا تَنفُذُونَ إِلَّا بِسُلْطَٰنٍ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 34:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 35:
	printf(" يُرْسَلُ عَلَيْكُمَا شُوَاظٌ مِّن نَّارٍ وَنُحَاسٌ فَلَا تَنتَصِرَانِ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 36:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 37:
	printf("فَإِذَا ٱنشَقَّتِ ٱلسَّمَآءُ فَكَانَتْ وَرْدَةً كَٱلدِّهَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 38:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 39:
	printf("فَيَوْمَئِذٍ لَّا يُسْـَٔلُ عَن ذَنۢبِهِۦٓ إِنسٌ وَلَا جَآنٌّ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 40:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 41:
	printf("يُعْرَفُ ٱلْمُجْرِمُونَ بِسِيمَٰهُمْ فَيُؤْخَذُ بِٱلنَّوَٰصِى وَٱلْأَقْدَامِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 42:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 43:
	printf("هَٰذِهِۦ جَهَنَّمُ ٱلَّتِى يُكَذِّبُ بِهَا ٱلْمُجْرِمُونَ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 44:
	printf(" يَطُوفُونَ بَيْنَهَا وَبَيْنَ حَمِيمٍ ءَانٍ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 45:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 46:
	printf("وَلِمَنْ خَافَ مَقَامَ رَبِّهِۦ جَنَّتَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 47:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 48:
	printf("ذَوَاتَآ أَفْنَانٍ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 49:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 50:
	printf("فِيهِمَا عَيْنَانِ تَجْرِيَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 51:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 52:
	printf("فِيهِمَا مِن كُلِّ فَٰكِهَةٍ زَوْجَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 53:
	printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 54:
	printf("مُتَّكِـِٔينَ عَلَىٰ فُرُشٍۭ بَطَآئِنُهَا مِنْ إِسْتَبْرَقٍ ۚ وَجَنَى ٱلْجَنَّتَيْنِ دَانٍ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 55:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 56:
	printf("فِيهِنَّ قَٰصِرَٰتُ ٱلطَّرْفِ لَمْ يَطْمِثْهُنَّ إِنسٌ قَبْلَهُمْ وَلَا جَآنٌّ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 57:
	printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 58:
	printf("كَأَنَّهُنَّ ٱلْيَاقُوتُ وَٱلْمَرْجَانُ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 59:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 60:
	printf("هَلْ جَزَآءُ ٱلْإِحْسَٰنِ إِلَّا ٱلْإِحْسَٰنُ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 61:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 62:
	printf("وَمِن دُونِهِمَا جَنَّتَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 63:
	printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 64:
	printf("مُدْهَآمَّتَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 65:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 66:
	printf("فِيهِمَا عَيْنَانِ نَضَّاخَتَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 67:
	printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 68:
	printf(" فِيهِمَا فَٰكِهَةٌ وَنَخْلٌ وَرُمَّانٌ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 69:
	printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 70:
	printf("فِيهِنَّ خَيْرَٰتٌ حِسَانٌ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 71:
	printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 72:
	printf("حُورٌ مَّقْصُورَٰتٌ فِى ٱلْخِيَامِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 73:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 74:
	printf("لَمْ يَطْمِثْهُنَّ إِنسٌ قَبْلَهُمْ وَلَا جَآنٌّ \n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 75:
	printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 76:
	printf("مُتَّكِـِٔينَ عَلَىٰ رَفْرَفٍ خُضْرٍ وَعَبْقَرِىٍّ حِسَانٍ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 77:
	printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
case 78:
	printf("تَبَٰرَكَ ٱسْمُ رَبِّكَ ذِى ٱلْجَلَٰلِ وَٱلْإِكْرَامِ\n");
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
}

}

void search_by_zikr_r()
{
    char a[200];
    printf("type the waqia you want to search=");
    scanf("%s",a);
    FILE *fp;
    
    char ch;
    fp=fopen("surah_rahman.txt","rb");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    char b[1000];
    while(!feof(fp))
    {
        fgets(b,1000,fp);
        int pos=0;
    for(int i=0,j=0;i<strlen(b);i++)
    {
       char word[30];
       memset(word,0,30);
       
       // Extract word from sentence
       for(int j=i,k=0;b[j]!=32;j++,k++)
       {
           word[k] = b[j];
           pos = j;
       }
       
       
       // check word against user query
       if(strcmp(a,word)==0)
       {
           printf("%s",b);
           break;
       }

       }
       }
    fclose(fp);
  
}



void searchmultiple_r()

{
    
    int j,k;
    printf("Enter ayah from which you want to search=");
    scanf("%d",&j);
    printf("Enter ayah to which you want to search=");
    scanf("%d",&k);
    
    
    for (int d=j;d<=k;d++)
    {
        SurahRahman(d);
    }
     system("pause");
    main();
}
    
  
