#include<iostream>
#include<windows.h>
#include <vector>
#include<conio.h>
#include <shellapi.h>
#include<MMSystem.h>
#include<fstream>
#include<stdlib.h>
#include<time.h>
#include<fcntl.h>
#include<unistd.h>

#include"INTRO.h"
#include"FACTS.h"
#include"SOUND.h"

//#define matx 30
//#define maty 24
//#define right 0
//#define up 1
//#define left 2
//#define down 3

using namespace std;

class Surah_Rahman
{
    public:

Surah_Rahman1(int n)
{	
  fflush(stdout);
  switch (n)
 {
    case 1:
	cout << "ٱلرَّحْمَٰن \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
      case 2:
	cout << "عَلَّمَ ٱلْقُرْءَانَ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
      case 3:
	cout << "خَلَقَ ٱلْإِنسَٰنَ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
      case 4:
	cout << "عَلَّمَهُ ٱلْبَيَانَ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 5:
	cout << "ٱلشَّمْسُ وَٱلْقَمَرُ بِحُسْبَانٍ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 6:
	cout << "وَٱلنَّجْمُ وَٱلشَّجَرُ يَسْجُدَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 7:
	cout << "وَٱلسَّمَآءَ رَفَعَهَا وَوَضَعَ ٱلْمِيزَانَ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 8:
	cout << " أَلَّا تَطْغَوْا۟ فِى ٱلْمِيزَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 9:
	cout << "وَأَقِيمُوا۟ ٱلْوَزْنَ بِٱلْقِسْطِ وَلَا تُخْسِرُوا۟ ٱلْمِيزَانَ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 10:
	cout << "وَٱلْأَرْضَ وَضَعَهَا لِلْأَنَامِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 11:
	cout << "فِيهَا فَٰكِهَةٌ وَٱلنَّخْلُ ذَاتُ ٱلْأَكْمَامِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 12:
	cout << "وَٱلْحَبُّ ذُو ٱلْعَصْفِ وَٱلرَّيْحَانُ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 13:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 14:
	cout << "خَلَقَ ٱلْإِنسَٰنَ مِن صَلْصَٰلٍ كَٱلْفَخَّارِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 15:
	cout << "وَخَلَقَ ٱلْجَآنَّ مِن مَّارِجٍ مِّن نَّارٍ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 16:
	cout << " فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 17:
	cout << " رَبُّ ٱلْمَشْرِقَيْنِ وَرَبُّ ٱلْمَغْرِبَيْنِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 18:
	cout << " فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 19:
	cout << " مَرَجَ ٱلْبَحْرَيْنِ يَلْتَقِيَانِ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 20:
	cout << "بَيْنَهُمَا بَرْزَخٌ لَّا يَبْغِيَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 21:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 22:
	cout << "يَخْرُجُ مِنْهُمَا ٱللُّؤْلُؤُ وَٱلْمَرْجَانُ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 23:
	cout << "  فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 24:
	cout << "وَلَهُ ٱلْجَوَارِ ٱلْمُنشَـَٔاتُ فِى ٱلْبَحْرِ كَٱلْأَعْلَٰمِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 25:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 26:
	cout << "كُلُّ مَنْ عَلَيْهَا فَان� \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 27:
	cout << "وَيَبْقَىٰ وَجْهُ رَبِّكَ ذُو ٱلْجَلَٰلِ وَٱلْإِكْرَامِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 28:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 29:
	cout << "يَسْـَٔلُهُۥ مَن فِى ٱلسَّمَٰوَٰتِ وَٱلْأَرْضِ ۚ كُلَّ يَوْمٍ هُوَ فِى شَأْنٍ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 30:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 31:
	cout << "سَنَفْرُغُ لَكُمْ أَيُّهَ ٱلثَّقَلَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 32:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 33:
	cout << " يَٰمَعْشَرَ ٱلْجِنِّ وَٱلْإِنسِ إِنِ ٱسْتَطَعْتُمْ أَن تَنفُذُوا۟ مِنْ أَقْطَارِ ٱلسَّمَٰوَٰتِ وَٱلْأَرْضِ فَٱنفُذُوا۟ ۚ لَا تَنفُذُونَ إِلَّا بِسُلْطَٰنٍ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 34:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 35:
	cout << " يُرْسَلُ عَلَيْكُمَا شُوَاظٌ مِّن نَّارٍ وَنُحَاسٌ فَلَا تَنتَصِرَانِ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 36:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 37:
	cout << "فَإِذَا ٱنشَقَّتِ ٱلسَّمَآءُ فَكَانَتْ وَرْدَةً كَٱلدِّهَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 38:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 39:
	cout << "فَيَوْمَئِذٍ لَّا يُسْـَٔلُ عَن ذَنۢبِهِۦٓ إِنسٌ وَلَا جَآنٌّ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 40:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 41:
	cout << "يُعْرَفُ ٱلْمُجْرِمُونَ بِسِيمَٰهُمْ فَيُؤْخَذُ بِٱلنَّوَٰصِى وَٱلْأَقْدَامِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 42:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 43:
	cout << "هَٰذِهِۦ جَهَنَّمُ ٱلَّتِى يُكَذِّبُ بِهَا ٱلْمُجْرِمُونَ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 44:
	cout << " يَطُوفُونَ بَيْنَهَا وَبَيْنَ حَمِيمٍ ءَانٍ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 45:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 46:
	cout << "وَلِمَنْ خَافَ مَقَامَ رَبِّهِۦ جَنَّتَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 47:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 48:
	cout << "ذَوَاتَآ أَفْنَانٍ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 49:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 50:
	cout << "فِيهِمَا عَيْنَانِ تَجْرِيَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 51:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 52:
	cout << "فِيهِمَا مِن كُلِّ فَٰكِهَةٍ زَوْجَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 53:
	cout << " فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 54:
	cout << "مُتَّكِـِٔينَ عَلَىٰ فُرُشٍۭ بَطَآئِنُهَا مِنْ إِسْتَبْرَقٍ ۚ وَجَنَى ٱلْجَنَّتَيْنِ دَانٍ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 55:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 56:
	cout << "فِيهِنَّ قَٰصِرَٰتُ ٱلطَّرْفِ لَمْ يَطْمِثْهُنَّ إِنسٌ قَبْلَهُمْ وَلَا جَآنٌّ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 57:
	cout << " فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 58:
	cout << "كَأَنَّهُنَّ ٱلْيَاقُوتُ وَٱلْمَرْجَانُ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 59:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 60:
	cout << "هَلْ جَزَآءُ ٱلْإِحْسَٰنِ إِلَّا ٱلْإِحْسَٰنُ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 61:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 62:
	cout << "وَمِن دُونِهِمَا جَنَّتَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 63:
	cout << " فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 64:
	cout << "مُدْهَآمَّتَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 65:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 66:
	cout << "فِيهِمَا عَيْنَانِ نَضَّاخَتَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 67:
	cout << " فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 68:
	cout << " فِيهِمَا فَٰكِهَةٌ وَنَخْلٌ وَرُمَّانٌ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 69:
	cout << " فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 70:
	cout << "فِيهِنَّ خَيْرَٰتٌ حِسَانٌ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 71:
	cout << " فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 72:
	cout << "حُورٌ مَّقْصُورَٰتٌ فِى ٱلْخِيَامِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 73:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 74:
	cout << "لَمْ يَطْمِثْهُنَّ إِنسٌ قَبْلَهُمْ وَلَا جَآنٌّ \n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 75:
	cout << "فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 76:
	cout << "مُتَّكِـِٔينَ عَلَىٰ رَفْرَفٍ خُضْرٍ وَعَبْقَرِىٍّ حِسَانٍ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 77:
	cout << " فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
    case 78:
	cout << "تَبَٰرَكَ ٱسْمُ رَبِّكَ ذِى ٱلْجَلَٰلِ وَٱلْإِكْرَامِ\n";
	translation_r(n);
	n = n + 100;
	sound(n);
	break;
 } 
}


void translation_r(int k)
{   fflush(stdout);
    ifstream in("surah_rahman.txt");

	if(!in){
     	cout<< "Cannot open input file!" << endl;
//		return 1;
	}
	char str[100000];
	int i = 10000;
	// k will be taken as parameter in function xDDDDD
        for(int j=0;j<k;j++)
		{
          in.getline(str, i);
        }
        if(in) cout << str << endl;
        in.close();
}
 

   void wholeSurahRahman()
   { 
    for(int i=0;i<78;i++)
    {
        int v; 
		v=i+1;
        Surah_Rahman1(v);
        if (kbhit())
        {
        	break;  
	    }
        
    }
//    main();
   }


void Surah_Rahman1(int j,int k)
{
    
    
    for (int d=j;d<=k;d++)
    {
        Surah_Rahman1(d);
        if (kbhit())
        {
        	break;  
	    }
    }
     system("pause");
//    main;
}
    

void Surah_Rahman1(string a)
{
    
    
    ifstream file("surah_rahman.txt");
    
    if (!file.is_open())
    {
        cout << "Failed to open file!\n";
//        return -1;
    }


    string line;
    while (getline(file, line))
    {
        if (line.find(a) != std::string::npos)
        {
            cout << line << "\n";
            
        }
    }
  
}


  friend class menu;

};


class Surah_Yaseen
{ 
    public:

   SurahYaseen(int n)
   {
	switch (n)
	{
	case 1:
		cout << " يسٓ \n";
		translation_y(n);
		sound(n);
		break;
	case 2:
		cout << "وَٱلْقُرْءَانِ ٱلْحَكِيمِ\n";
		translation_y(n);
		sound(n);
		break;
	case 3:
		cout << "إِنَّكَ لَمِنَ ٱلْمُرْسَلِينَ \n";
		translation_y(n);
		sound(n);
		break;
	case 4:
		cout << "عَلَىٰ صِرَٰطٍ مُّسْتَقِيمٍ\n";
		translation_y(n);
		sound(n);
		break;
	case 5:
		cout << "تَنزِيلَ ٱلْعَزِيزِ ٱلرَّحِيمِ\n";
		translation_y(n);
		sound(n);
		break;
	case 6:
		cout << " لِتُنذِرَ قَوْمًا مَّآ أُنذِرَ ءَابَآؤُهُمْ فَهُمْ غَٰفِلُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 7:
		cout << "لَقَدْ حَقَّ ٱلْقَوْلُ عَلَىٰٓ أَكْثَرِهِمْ فَهُمْ لَا يُؤْمِنُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 8:
		cout << " إِنَّا جَعَلْنَا فِىٓ أَعْنَٰقِهِمْ أَغْلَٰلًا فَهِىَ إِلَى ٱلْأَذْقَانِ فَهُم مُّقْمَحُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 9:
		cout << "وَجَعَلْنَا مِنۢ بَيْنِ أَيْدِيهِمْ سَدًّا وَمِنْ خَلْفِهِمْ سَدًّا فَأَغْشَيْنَٰهُمْ فَهُمْ لَا يُبْصِرُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 10:
		cout << "وَسَوَآءٌ عَلَيْهِمْ ءَأَنذَرْتَهُمْ أَمْ لَمْ تُنذِرْهُمْ لَا يُؤْمِنُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 11:
		cout << "إِنَّمَا تُنذِرُ مَنِ ٱتَّبَعَ ٱلذِّكْرَ وَخَشِىَ ٱلرَّحْمَٰنَ بِٱلْغَيْبِ ۖ فَبَشِّرْهُ بِمَغْفِرَةٍ وَأَجْرٍ كَرِيمٍ\n";
		translation_y(n);
		sound(n);
		break;
	case 12:
		cout << "إِنَّا نَحْنُ نُحْىِ ٱلْمَوْتَىٰ وَنَكْتُبُ مَا قَدَّمُوا۟ وَءَاثَٰرَهُمْ ۚ وَكُلَّ شَىْءٍ أَحْصَيْنَٰهُ فِىٓ إِمَامٍ مُّبِينٍ\n";
		translation_y(n);
		sound(n);
		break;
	case 13:
		cout << "وَٱضْرِبْ لَهُم مَّثَلًا أَصْحَٰبَ ٱلْقَرْيَةِ إِذْ جَآءَهَا ٱلْمُرْسَلُونَ  \n";
		translation_y(n);
		sound(n);
		break;
	case 14:
		cout << "إِذْ أَرْسَلْنَآ إِلَيْهِمُ ٱثْنَيْنِ فَكَذَّبُوهُمَا فَعَزَّزْنَا بِثَالِثٍ فَقَالُوٓا۟ إِنَّآ إِلَيْكُم مُّرْسَلُونَ\n";
		translation_y(n);
		sound(n);
		break;
	case 15:
		cout << "قَالُوا۟ مَآ أَنتُمْ إِلَّا بَشَرٌ مِّثْلُنَا وَمَآ أَنزَلَ ٱلرَّحْمَٰنُ مِن شَىْءٍ إِنْ أَنتُمْ إِلَّا تَكْذِبُونَ  \n";
		translation_y(n);
		sound(n);
		break;
	case 16:
		cout << "قَالُوا۟ رَبُّنَا يَعْلَمُ إِنَّآ إِلَيْكُمْ لَمُرْسَلُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 17:
		cout << "وَمَا عَلَيْنَآ إِلَّا ٱلْبَلَٰغُ ٱلْمُبِينُ\n";
		translation_y(n);
		sound(n);
		break;
	case 18:
		cout << "قَالُوٓا۟ إِنَّا تَطَيَّرْنَا بِكُمْ ۖ لَئِن لَّمْ تَنتَهُوا۟ لَنَرْجُمَنَّكُمْ وَلَيَمَسَّنَّكُم مِّنَّا عَذَابٌ أَلِيمٌ \n";
		translation_y(n);
		sound(n);
		break;
	case 19:
		cout << "قَالُوا۟ طَٰٓئِرُكُم مَّعَكُمْ ۚ أَئِن ذُكِّرْتُم ۚ بَلْ أَنتُمْ قَوْمٌ مُّسْرِفُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 20:
		cout << "وَجَآءَ مِنْ أَقْصَا ٱلْمَدِينَةِ رَجُلٌ يَسْعَىٰ قَالَ يَٰقَوْمِ ٱتَّبِعُوا۟ ٱلْمُرْسَلِينَ \n";
		translation_y(n);
		sound(n);
		break;
	case 21:
		cout << "ٱتَّبِعُوا۟ مَن لَّا يَسْـَٔلُكُمْ أَجْرًا وَهُم مُّهْتَدُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 22:
		cout << "وَمَا لِىَ لَآ أَعْبُدُ ٱلَّذِى فَطَرَنِى وَإِلَيْهِ تُرْجَعُونَ\n";
		translation_y(n);
		sound(n);
		break;
	case 23:
		cout << "ءَأَتَّخِذُ مِن دُونِهِۦٓ ءَالِهَةً إِن يُرِدْنِ ٱلرَّحْمَٰنُ بِضُرٍّ لَّا تُغْنِ عَنِّى شَفَٰعَتُهُمْ شَيْـًٔا وَلَا يُنقِذُونِ\n";
		translation_y(n);
		sound(n);
		break;
	case 24:
		cout << "إِنِّىٓ إِذًا لَّفِى ضَلَٰلٍ مُّبِينٍ\n";
		translation_y(n);
		sound(n);
		break;
	case 25:
		cout << "إِنِّىٓ ءَامَنتُ بِرَبِّكُمْ فَٱسْمَعُونِ\n";
		translation_y(n);
		sound(n);
		break;
	case 26:
		cout << "قِيلَ ٱدْخُلِ ٱلْجَنَّةَ ۖ قَالَ يَٰلَيْتَ قَوْمِى يَعْلَمُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 27:
		cout << "بِمَا غَفَرَ لِى رَبِّى وَجَعَلَنِى مِنَ ٱلْمُكْرَمِينَ \n";
		translation_y(n);
		sound(n);
		break;
	case 28:
		cout << "وَمَآ أَنزَلْنَا عَلَىٰ قَوْمِهِۦ مِنۢ بَعْدِهِۦ مِن جُندٍ مِّنَ ٱلسَّمَآءِ وَمَا كُنَّا مُنزِلِينَ \n";
		translation_y(n);
		sound(n);
		break;
	case 29:
		cout << " إِن كَانَتْ إِلَّا صَيْحَةً وَٰحِدَةً فَإِذَا هُمْ خَٰمِدُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 30:
		cout << " يَٰحَسْرَةً عَلَى ٱلْعِبَادِ ۚ مَا يَأْتِيهِم مِّن رَّسُولٍ إِلَّا كَانُوا۟ بِهِۦ يَسْتَهْزِءُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 31:
		cout << "أَلَمْ يَرَوْا۟ كَمْ أَهْلَكْنَا قَبْلَهُم مِّنَ ٱلْقُرُونِ أَنَّهُمْ إِلَيْهِمْ لَا يَرْجِعُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 32:
		cout << "وَإِن كُلٌّ لَّمَّا جَمِيعٌ لَّدَيْنَا مُحْضَرُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 33:
		cout << "وَءَايَةٌ لَّهُمُ ٱلْأَرْضُ ٱلْمَيْتَةُ أَحْيَيْنَٰهَا وَأَخْرَجْنَا مِنْهَا حَبًّا فَمِنْهُ يَأْكُلُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 34:
		cout << "وَجَعَلْنَا فِيهَا جَنَّٰتٍ مِّن نَّخِيلٍ وَأَعْنَٰبٍ وَفَجَّرْنَا فِيهَا مِنَ ٱلْعُيُونِ\n";
		translation_y(n);
		sound(n);
		break;
	case 35:
		cout << "لِيَأْكُلُوا۟ مِن ثَمَرِهِۦ وَمَا عَمِلَتْهُ أَيْدِيهِمْ ۖ أَفَلَا يَشْكُرُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 36:
		cout << "سُبْحَٰنَ ٱلَّذِى خَلَقَ ٱلْأَزْوَٰجَ كُلَّهَا مِمَّا تُنۢبِتُ ٱلْأَرْضُ وَمِنْ أَنفُسِهِمْ وَمِمَّا لَا يَعْلَمُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 37:
		cout << "وَءَايَةٌ لَّهُمُ ٱلَّيْلُ نَسْلَخُ مِنْهُ ٱلنَّهَارَ فَإِذَا هُم مُّظْلِمُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 38:
		cout << " وَٱلشَّمْسُ تَجْرِى لِمُسْتَقَرٍّ لَّهَا ۚ ذَٰلِكَ تَقْدِيرُ ٱلْعَزِيزِ ٱلْعَلِيمِ\n";
		translation_y(n);
		sound(n);
		break;
	case 39:
		cout << " وَٱلْقَمَرَ قَدَّرْنَٰهُ مَنَازِلَ حَتَّىٰ عَادَ كَٱلْعُرْجُونِ ٱلْقَدِيمِ\n";
		translation_y(n);
		sound(n);
		break;
	case 40:
		cout << "لَا ٱلشَّمْسُ يَنۢبَغِى لَهَآ أَن تُدْرِكَ ٱلْقَمَرَ وَلَا ٱلَّيْلُ سَابِقُ ٱلنَّهَارِ ۚ وَكُلٌّ فِى فَلَكٍ يَسْبَحُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 41:
		cout << "وَءَايَةٌ لَّهُمْ أَنَّا حَمَلْنَا ذُرِّيَّتَهُمْ فِى ٱلْفُلْكِ ٱلْمَشْحُونِ\n";
		translation_y(n);
		sound(n);
		break;
	case 42:
		cout << "وَخَلَقْنَا لَهُم مِّن مِّثْلِهِۦ مَا يَرْكَبُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 43:
		cout << "وَإِن نَّشَأْ نُغْرِقْهُمْ فَلَا صَرِيخَ لَهُمْ وَلَا هُمْ يُنقَذُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 44:
		cout << "إِلَّا رَحْمَةً مِّنَّا وَمَتَٰعًا إِلَىٰ حِينٍ\n";
		translation_y(n);
		sound(n);
		break;
	case 45:
		cout << "وَإِذَا قِيلَ لَهُمُ ٱتَّقُوا۟ مَا بَيْنَ أَيْدِيكُمْ وَمَا خَلْفَكُمْ لَعَلَّكُمْ تُرْحَمُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 46:
		cout << "وَمَا تَأْتِيهِم مِّنْ ءَايَةٍ مِّنْ ءَايَٰتِ رَبِّهِمْ إِلَّا كَانُوا۟ عَنْهَا مُعْرِضِينَ \n";
		translation_y(n);
		sound(n);
		break;
	case 47:
		cout << "وَإِذَا قِيلَ لَهُمْ أَنفِقُوا۟ مِمَّا رَزَقَكُمُ ٱللَّهُ قَالَ ٱلَّذِينَ كَفَرُوا۟ لِلَّذِينَ ءَامَنُوٓا۟ أَنُطْعِمُ مَن لَّوْ يَشَآءُ ٱللَّهُ أَطْعَمَهُۥٓ إِنْ أَنتُمْ إِلَّا فِى ضَلَٰلٍ مُّبِينٍ\n";
		translation_y(n);
		sound(n);
		break;
	case 48:
		cout << "وَيَقُولُونَ مَتَىٰ هَٰذَا ٱلْوَعْدُ إِن كُنتُمْ صَٰدِقِينَ \n";
		translation_y(n);
		sound(n);
		break;
	case 49:
		cout << "مَا يَنظُرُونَ إِلَّا صَيْحَةً وَٰحِدَةً تَأْخُذُهُمْ وَهُمْ يَخِصِّمُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 50:
		cout << " فَلَا يَسْتَطِيعُونَ تَوْصِيَةً وَلَآ إِلَىٰٓ أَهْلِهِمْ يَرْجِعُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 51:
		cout << "وَنُفِخَ فِى ٱلصُّورِ فَإِذَا هُم مِّنَ ٱلْأَجْدَاثِ إِلَىٰ رَبِّهِمْ يَنسِلُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 52:
		cout << " قَالُوا۟ يَٰوَيْلَنَا مَنۢ بَعَثَنَا مِن مَّرْقَدِنَا هَٰذَا مَا وَعَدَ ٱلرَّحْمَٰنُ وَصَدَقَ ٱلْمُرْسَلُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 53:
		cout << " إِن كَانَتْ إِلَّا صَيْحَةً وَٰحِدَةً فَإِذَا هُمْ جَمِيعٌ لَّدَيْنَا مُحْضَرُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 54:
		cout << "فَٱلْيَوْمَ لَا تُظْلَمُ نَفْسٌ شَيْـًٔا وَلَا تُجْزَوْنَ إِلَّا مَا كُنتُمْ تَعْمَلُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 55:
		cout << "إِنَّ أَصْحَٰبَ ٱلْجَنَّةِ ٱلْيَوْمَ فِى شُغُلٍ فَٰكِهُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 56:
		cout << " هُمْ وَأَزْوَٰجُهُمْ فِى ظِلَٰلٍ عَلَى ٱلْأَرَآئِكِ مُتَّكِـُٔونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 57:
		cout << " لَهُمْ فِيهَا فَٰكِهَةٌ وَلَهُم مَّا يَدَّعُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 58:
		cout << " سَلَٰمٌ قَوْلًا مِّن رَّبٍّ رَّحِيمٍ\n";
		translation_y(n);
		sound(n);
		break;
	case 59:
		cout << "وَٱمْتَٰزُوا۟ ٱلْيَوْمَ أَيُّهَا ٱلْمُجْرِمُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 60:
		cout << "أَلَمْ أَعْهَدْ إِلَيْكُمْ يَٰبَنِىٓ ءَادَمَ أَن لَّا تَعْبُدُوا۟ ٱلشَّيْطَٰن إِنَّهُۥ لَكُمْ عَدُوٌّ مُّبِينٌ \n";
		translation_y(n);
		sound(n);
		break;
	case 61:
		cout << "وَأَنِ ٱعْبُدُونِى  هَٰذَا صِرَٰطٌ مُّسْتَقِيمٌ\n";
		translation_y(n);
		sound(n);
		break;
	case 62:
		cout << "وَلَقَدْ أَضَلَّ مِنكُمْ جِبِلًّا كَثِيرًا أَفَلَمْ تَكُونُوا۟ تَعْقِلُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 63:
		cout << " هٰذِهٖ جَهَنَّمُ الَّتِىۡ كُنۡتُمۡ تُوۡعَدُوۡنَ‐\n";
		translation_y(n);
		sound(n);
		break;
	case 64:
		cout << "ٱصْلَوْهَا ٱلْيَوْمَ بِمَا كُنتُمْ تَكْفُرُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 65:
		cout << " ٱلْيَوْمَ نَخْتِمُ عَلَىٰٓ أَفْوَٰهِهِمْ وَتُكَلِّمُنَآ أَيْدِيهِمْ وَتَشْهَدُ أَرْجُلُهُم بِمَا كَانُوا۟ يَكْسِبُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 66:
		cout << "وَلَوْ نَشَآءُ لَطَمَسْنَا عَلَىٰٓ أَعْيُنِهِمْ فَٱسْتَبَقُوا۟ ٱلصِّرَٰطَ فَأَنَّىٰ يُبْصِرُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 67:
		cout << "وَلَوْ نَشَآءُ لَمَسَخْنَٰهُمْ عَلَىٰ مَكَانَتِهِمْ فَمَا ٱسْتَطَٰعُوا۟ مُضِيًّا وَلَا يَرْجِعُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 68:
		cout << " وَمَن نُّعَمِّرْهُ نُنَكِّسْهُ فِى ٱلْخَلْقِ أَفَلَا يَعْقِلُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 69:
		cout << "وَمَا عَلَّمْنَٰهُ ٱلشِّعْرَ وَمَا يَنۢبَغِى لَهُۥٓ إِنْ هُوَ إِلَّا ذِكْرٌ وَقُرْءَانٌ مُّبِينٌ \n";
		translation_y(n);
		sound(n);
		break;
	case 70:
		cout << " لِّيُنذِرَ مَن كَانَ حَيًّا وَيَحِقَّ ٱلْقَوْلُ عَلَى ٱلْكَٰفِرِينَ \n";
		translation_y(n);
		sound(n);
		break;
	case 71:
		cout << "أَوَلَمْ يَرَوْا۟ أَنَّا خَلَقْنَا لَهُم مِّمَّا عَمِلَتْ أَيْدِينَآ أَنْعَٰمًا فَهُمْ لَهَا مَٰلِكُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 72:
		cout << "وَذَلَّلْنَٰهَا لَهُمْ فَمِنْهَا رَكُوبُهُمْ وَمِنْهَا يَأْكُلُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 73:
		cout << " وَلَهُمْ فِيهَا مَنَٰفِعُ وَمَشَارِبُ أَفَلَا يَشْكُرُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 74:
		cout << "وَٱتَّخَذُوا۟ مِن دُونِ ٱللَّهِ ءَالِهَةً لَّعَلَّهُمْ يُنصَرُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 75:
		cout << " لَا يَسْتَطِيعُونَ نَصْرَهُمْ وَهُمْ لَهُمْ جُندٌ مُّحْضَرُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 76:
		cout << "فَلَا يَحْزُنكَ قَوْلُهُمْ ۘ إِنَّا نَعْلَمُ مَا يُسِرُّونَ وَمَا يُعْلِنُونَ \n";
		translation_y(n);
		sound(n);
		break;
	case 77:
		cout << "أَوَلَمْ يَرَ ٱلْإِنسَٰنُ أَنَّا خَلَقْنَٰهُ مِن نُّطْفَةٍ فَإِذَا هُوَ خَصِيمٌ مُّبِينٌ \n";
		translation_y(n);
		sound(n);
		break;
	case 78:
		cout << "وَضَرَبَ لَنَا مَثَلًا وَنَسِىَ خَلْقَهُۥ ۖ قَالَ مَن يُحْىِ ٱلْعِظَٰمَ وَهِىَ رَمِيمٌ \n";
		translation_y(n);
		sound(n);
		break;
	case 79:
		cout << "  قُلْ يُحْيِيهَا ٱلَّذِىٓ أَنشَأَهَآ أَوَّلَ مَرَّةٍ ۖ وَهُوَ بِكُلِّ خَلْقٍ عَلِيمٌ \n";
		translation_y(n);
		sound(n);
		break;
	case 80:
		cout << " ٱلَّذِى جَعَلَ لَكُم مِّنَ ٱلشَّجَرِ ٱلْأَخْضَرِ نَارًا فَإِذَآ أَنتُم مِّنْهُ تُوقِدُونَ\n";
		translation_y(n);
		sound(n);
		break;
	case 81:
		cout << "أَوَلَيْسَ ٱلَّذِى خَلَقَ ٱلسَّمَٰوَٰتِ وَٱلْأَرْضَ بِقَٰدِرٍ عَلَىٰٓ أَن يَخْلُقَ مِثْلَهُم ۚ بَلَىٰ وَهُوَ ٱلْخَلَّٰقُ ٱلْعَلِيمُ \n";
		translation_y(n);
		sound(n);
		break;
	case 82:
		cout << "إِنَّمَآ أَمْرُهُۥٓ إِذَآ أَرَادَ شَيْـًٔا أَن يَقُولَ لَهُۥ كُن فَيَكُونُ\n";
		translation_y(n);
		sound(n);
		break;
	case 83:
		cout << " فَسُبْحَٰنَ ٱلَّذِى بِيَدِهِۦ مَلَكُوتُ كُلِّ شَىْءٍ وَإِلَيْهِ تُرْجَعُونَ\n";
		translation_y(n);
		sound(n);
		break;
	}
   }

   void SurahYaseen (int j,int k)
{
    
    
    for (int d=j;d<=k;d++)
    {
        SurahYaseen(d);
        if (kbhit())
        {
        	break;  
	    }
        
    }
     system("pause");
//     main();
}

void wholeSurahYaseen(void)
{
    for(int i=0;i<83;i++)
    {
        int n=i+1;
        SurahYaseen(n);
        if (kbhit())
        {
        	break;  
	    }
    }
//    main();
}

void SurahYaseen(string a)
{
    ifstream file("surah_yaseen.txt");
    
    if (!file.is_open())
    {
        cout << "Failed to open file!\n";
//        return 0;
    }


    string line;
    while (getline(file, line))
    {
        if (line.find(a) != std::string::npos)
        {
            cout << line << "\n";
            
        }
    }
}

void translation_y(int k)
{
    ifstream in("surah_yaseen.txt");

	if(!in){
     	cout<< "Cannot open input file!" << endl;
//		return 1;
	}
	char str[100000];
	int i = 10000;
	// k will be taken as parameter in function xDDDDD
        for(int j=0;j<k;j++)
		{
          in.getline(str, i);
        }
        if(in) cout << str << endl;
        in.close();
}
 
 friend class menu;
};




class menu
{
public:
    HANDLE hstdout;
    int index;
    int key;
    
	     menu()
		 {
            hstdout = GetStdHandle( STD_OUTPUT_HANDLE );
            index=1;
         }
    
	void showmenu(){
        key=0;
        system("cls");
        while(key!=13){
        gotoxy(3,3);
        colorit(15);
        cout<<"\t\t\t\t\tDIGITAL QURAN";//cout<<key<<"---"<<index;
        gotoxy(3,4);
        cout<<"\t\t\t\t\t==============";
        gotoxy(3,6);
        colorit(15);
        if(index==1){colorit(12);}
        cout<<"\t\t\t\t\tSurah Yaseen";
        gotoxy(3,8);
        colorit(15);
        if(index==2){colorit(12);}
        cout<<"\t\t\t\t\tSurah Rahman";
        gotoxy(3,10);
        colorit(15);
        if(index==3){colorit(12);}
        cout<<"\t\t\t\t\tQuran facts";
        gotoxy(3,12);
        colorit(15);
        if(index==4){colorit(12);}
        cout<<"\t\t\t\t\tAI ASSISTANT";
        gotoxy(3,14);
        colorit(15);
        if(index==5){colorit(12);}
        cout<<"\t\t\t\t\tEXIT";
        /////////////UP=224/72 Down=224/80 Enter=13
        key=getch();
        if(key==80){index++;}
        else if(key==72){index--;}
        if(index==6){index=1;}
        if(index==0){index=5;}
        }
        
		if(index==1)
		{
		start_yaseen();
		}
        
		else if (index==2)
		{
           start_rahman();   
        }
        
		else if (index==3)
		{
            Quran_fact fact;
            fact.Print_Out(114,6236,540,"Surah Yaseen","30","28","86","Surah Kausar","Surah Baqarah","Quran was revealed over 23 years: 13 in Mecca and 10 in Madina",
			               "1) The Quran will intercede for people who recited it on Judgment Day.\n2) 10 rewards for reciting a single letter of The Holy Quran.",14);
			cout << "\n\n\n\nPRESS ANY KEY TO CONTINUE...";
			getch();
            showmenu();
			               
        }
        
		else if (index==4)
		{
			system("cls");
			colorit(12);
            cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\"THIS FEATURE WILL BE IMPLEMENTED LATER IN SHA ALLAH\"";
            colorit(15);
			cout << "\n\n\n\nPRESS ANY KEY TO CONTINUE...";
			getch();
            showmenu();
        }
        
		else if (index==5)
		{
           system("taskkill/IM ConsolePauser.exe");
        }
    }
    
	
 void start_yaseen(){
        
        key=0;
        system("cls");
        while(key!=13){
        gotoxy(3,3);
        colorit(15);
        cout<<"\t\t\t\t\tSURAH YASEEN";//cout<<key<<"---"<<index;
        gotoxy(3,4);
        cout<<"\t\t\t\t\t==============";
        gotoxy(3,6);
        colorit(15);
        if(index==1){colorit(12);}
        cout<<"\t\t\t\t\tSearch Single Ayah";
        gotoxy(3,8);
        colorit(15);
        if(index==2){colorit(12);}
        cout<<"\t\t\t\t\tSearch Multiple ayah";
        gotoxy(3,10);
        colorit(15);
        if(index==3){colorit(12);}
        cout<<"\t\t\t\t\tSearch Waqia";
        gotoxy(3,12);
        colorit(15);
        if(index==4){colorit(12);}
        cout<<"\t\t\t\t\tSurah Yaseen Facts";
        gotoxy(3,14);
        colorit(15);
        if(index==5){colorit(12);}
        cout<<"\t\t\t\t\tWHOLE SURAH";
        gotoxy(3,16);
        colorit(15);
        if(index==6){colorit(12);}
        cout<<"\t\t\t\t\tEXIT";
        /////////////UP=224/72 Down=224/80 Enter=13
        key=getch();
        if(key==80){index++;}
        else if(key==72){index--;}
        if(index==7){index=1;}
        if(index==0){index=6;}
        }
        
		if(index==1)
		{
//		surah yaseen ka single ayah search opt
        system("cls");
        fflush(stdout);
        int z;
        cout << "ENTER AYAH NUMBER TO BE SEARCHED = ";
        cin >> z;
        Surah_Yaseen yasin;
        yasin.SurahYaseen(z);
        cout << "\nPRESS ANY KEY TO CONTINUE...";
        getch();
        start_yaseen();
		}
        
		else if (index==2)
		{
            system("cls");
            Surah_Yaseen Yasen;
            int j,k;
            cout << "Enter ayah from which you want to search=";
            cin >> j;
            cout << "Enter ayah to which you want to search=";
            cin >> k;
            Yasen.SurahYaseen(j,k);
            start_yaseen();
		}
        
		else if (index==3)
		{
            system("cls");
            Surah_Yaseen Yaseen;
            string a;
            cout << "Type the waqia you want to search=" ;
            cin >> a;
            Yaseen.SurahYaseen(a);
            cout << "\nPRESS ANY KEY TO CONTINUE...";
            getch();
            start_yaseen();
		}
        
		else if (index==4)
		{
            Surah_Yaseen_facts facts;
            DISPLAY_SurahYasinFacts(facts);
            start_yaseen();
        
		}
        
		else if (index==5)
		{
          system("cls");
          Surah_Yaseen yaseen;
          yaseen.wholeSurahYaseen();
          cout << "\nPRESS ANY KEY TO GO BACK TO THE MENU...";
          getch();
          getch();
          start_yaseen();
          
        }
        
        else if (index==6)
		{
        showmenu();
        }
    }
   
   
  void start_rahman()
{
        
        key=0;
        system("cls");
        while(key!=13){
        gotoxy(3,3);
        colorit(15);
        cout<<"\t\t\t\t\tSURAH RAHMAN";//cout<<key<<"---"<<index;
        gotoxy(3,4);
        cout<<"\t\t\t\t\t==============";
        gotoxy(3,6);
        colorit(15);
        if(index==1){colorit(12);}
        cout<<"\t\t\t\t\tSearch Single Ayah";
        gotoxy(3,8);
        colorit(15);
        if(index==2){colorit(12);}
        cout<<"\t\t\t\t\tSearch Multiple ayah";
        gotoxy(3,10);
        colorit(15);
        if(index==3){colorit(12);}
        cout<<"\t\t\t\t\tSearch Waqia";
        gotoxy(3,12);
        colorit(15);
        if(index==4){colorit(12);}
        cout<<"\t\t\t\t\tSurah Rahman Facts";
        gotoxy(3,14);
        colorit(15);
        if(index==5){colorit(12);}
        cout<<"\t\t\t\t\tWHOLE SURAH";
        gotoxy(3,16);
        colorit(15);
        if(index==6){colorit(12);}
        cout<<"\t\t\t\t\tEXIT";
        key=getch();
        if(key==80){index++;}
        else if(key==72){index--;}
        if(index==7){index=1;}
        if(index==0){index=6;}
        }
        
		if(index==1)
		{
//		surah Rahamn ka single ayah search opt
        system("cls");
        int z;
        cout << "ENTER AYAH NUMBER TO BE SEARCHED = ";
        cin >> z;
        Surah_Rahman rahman;
        rahman.Surah_Rahman1(z);
        cout << "\nPRESS ANY KEY TO CONTINUE...";
        getch();
        start_rahman();
        
		}
        
		else if (index==2)
		{
            system("cls");
            Surah_Rahman RAHMAN;
            int j,k;
            cout << "Enter ayah from which you want to search=";
            cin >> j;
            cout << "Enter ayah to which you want to search=";
            cin >> k;
            RAHMAN.Surah_Rahman1(j,k);   
            start_rahman();
        }
        
		else if (index==3)
		{
           system("cls");
           Surah_Rahman RAHman;
           string a;
           cout << "Type the waqia you want to search=" ;
           cin >> a;
           RAHman.Surah_Rahman1(a);
           cout << "\nPRESS ANY KEY TO CONTINUE...";
           getch();
           start_rahman();
        }
        
		else if (index==4)
		{
            Surah_Rahman_facts facts;
            DISPLAY_SurahRahmanFacts(facts);
			start_rahman(); 
        }
        
		else if (index==5)
		{
          system("cls");
          Surah_Rahman rahmaan;
          rahmaan.wholeSurahRahman();
          cout << "\nPRESS ANY KEY TO GO BACK TO THE MENU...";
          getch();
          getch();
          start_rahman();
        }
        
        else if (index==6)
		{
        showmenu();
        }
}
    
	

    
	void colorit(int col)
	{                                                  //12=red, 15=white---------------->this.colorit(12);  this.colorit(15);
        SetConsoleTextAttribute( hstdout, col );
    }

};

 
 
 
 
class ACTIVATE
{
	public:
	void EXECUTE()
	{
	   system("cls");
	   Intro();
	   getch();
	   menu MEN;
	   MEN.showmenu();	
	}	
		
};



int main()
{
	ACTIVATE DIGITAL_QURAN;
	DIGITAL_QURAN.EXECUTE();
}



