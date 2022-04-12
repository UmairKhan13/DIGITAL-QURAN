#include<stdio.h>
#include<windows.h>
#include<MMSystem.h>
#include<conio.h>
#include<string.h>
#include<wchar.h>
#include<fcntl.h>
#define _O_U16TEXT 0x20000    
#define _INC_WCHAR

int translation_y(int j)
{
    FILE *fp;
    int ch;
    char chh;
    fp=fopen("surah_yaseen.txt","rb");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    
    while(!feof(fp))
    {
        ch=fgetc(fp);
        if (ch==j-1){
            while(chh!=j){
               
             chh=fgetc(fp);
             printf("%c",chh);   
            }
        }
    }
    
    fclose(fp);
}

void search_by_zikr_y()
{
    char a[200];
    printf("type the waqia u wanna search=");
    gets(a);
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
}

int translation_r(int j)
{
    
    FILE *fp;
    int ch;
    char chh;
    fp=fopen("surah_rahman.txt","rb");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    
    while(!feof(fp))
    {
        ch=fgetc(fp);
        if (ch==j-1){
            while(chh!=j){
               
             chh=fgetc(fp);
             printf("%c",chh);   
            }
        }
    }
    
    fclose(fp);
}

void sound(int n)
{
 	PlaySound("n.wav",NULL,SND_SYNC);
}

void wholeSurahYaseen(void)
{
    for(int i=0;i<83;i++)
    {
        SurahYaseen(i+1);
    }
}

void wholeSurahRehman(void)
{
    for(int i=0;i<78;i++)
    {
        SurahRahman(i+1);
    }
}

void SurahYaseen(int n)
{
    if (n!=0)
    {
	switch (n)
	{
	case '1':
		printf(" يسٓ");
		translation_y(n);
		sound(n);
		break;
	case '2':
		printf(" وَٱلْقُرْءَانِ ٱلْحَكِيمِ");
		translation_y(n);
		sound(n);
		break;
	case '3':
		printf("إِنَّكَ لَمِنَ ٱلْمُرْسَلِينَ");
		translation_y(n);
		sound(n);
		break;
	case '4':
		printf("عَلَىٰ صِرَٰطٍ مُّسْتَقِيمٍ");
		translation_y(n);
		sound(n);
		break;
	case '5':
		printf("تَنزِيلَ ٱلْعَزِيزِ ٱلرَّحِيمِ");
		translation_y(n);
		sound(n);
		break;
	case '6':
		printf(" لِتُنذِرَ قَوْمًا مَّآ أُنذِرَ ءَابَآؤُهُمْ فَهُمْ غَٰفِلُونَ");
		translation_y(n);
		sound(n);
		break;
	case '7':
		printf(" لَقَدْ حَقَّ ٱلْقَوْلُ عَلَىٰٓ أَكْثَرِهِمْ فَهُمْ لَا يُؤْمِنُونَ");
		translation_y(n);
		sound(n);
		break;
	case '8':
		printf(" إِنَّا جَعَلْنَا فِىٓ أَعْنَٰقِهِمْ أَغْلَٰلًا فَهِىَ إِلَى ٱلْأَذْقَانِ فَهُم مُّقْمَحُونَ");
		translation_y(n);
		sound(n);
		break;
	case '9':
		printf("وَجَعَلْنَا مِنۢ بَيْنِ أَيْدِيهِمْ سَدًّا وَمِنْ خَلْفِهِمْ سَدًّا فَأَغْشَيْنَٰهُمْ فَهُمْ لَا يُبْصِرُونَ");
		translation_y(n);
		sound(n);
		break;
	case '10':
		printf("وَسَوَآءٌ عَلَيْهِمْ ءَأَنذَرْتَهُمْ أَمْ لَمْ تُنذِرْهُمْ لَا يُؤْمِنُونَ");
		translation_y(n);
		sound(n);
		break;
	case '11':
		printf("إِنَّمَا تُنذِرُ مَنِ ٱتَّبَعَ ٱلذِّكْرَ وَخَشِىَ ٱلرَّحْمَٰنَ بِٱلْغَيْبِ ۖ فَبَشِّرْهُ بِمَغْفِرَةٍ وَأَجْرٍ كَرِيمٍ");
		translation_y(n);
		sound(n);
		break;
	case '12':
		printf("إِنَّا نَحْنُ نُحْىِ ٱلْمَوْتَىٰ وَنَكْتُبُ مَا قَدَّمُوا۟ وَءَاثَٰرَهُمْ ۚ وَكُلَّ شَىْءٍ أَحْصَيْنَٰهُ فِىٓ إِمَامٍ مُّبِينٍ");
		translation_y(n);
		sound(n);
		break;
	case '13':
		printf(" وَٱضْرِبْ لَهُم مَّثَلًا أَصْحَٰبَ ٱلْقَرْيَةِ إِذْ جَآءَهَا ٱلْمُرْسَلُونَ");
		translation_y(n);
		sound(n);
		break;
	case '14':
		printf(" إِذْ أَرْسَلْنَآ إِلَيْهِمُ ٱثْنَيْنِ فَكَذَّبُوهُمَا فَعَزَّزْنَا بِثَالِثٍ فَقَالُوٓا۟ إِنَّآ إِلَيْكُم مُّرْسَلُونَ");
		translation_y(n);
		sound(n);
		break;
	case '15':
		printf(" قَالُوا۟ مَآ أَنتُمْ إِلَّا بَشَرٌ مِّثْلُنَا وَمَآ أَنزَلَ ٱلرَّحْمَٰنُ مِن شَىْءٍ إِنْ أَنتُمْ إِلَّا تَكْذِبُونَ");
		translation_y(n);
		sound(n);
		break;
	case '16':
		printf("قَالُوا۟ رَبُّنَا يَعْلَمُ إِنَّآ إِلَيْكُمْ لَمُرْسَلُونَ");
		translation_y(n);
		sound(n);
		break;
	case '17':
		printf("وَمَا عَلَيْنَآ إِلَّا ٱلْبَلَٰغُ ٱلْمُبِينُ");
		translation_y(n);
		sound(n);
		break;
	case '18':
		printf("قَالُوٓا۟ إِنَّا تَطَيَّرْنَا بِكُمْ ۖ لَئِن لَّمْ تَنتَهُوا۟ لَنَرْجُمَنَّكُمْ وَلَيَمَسَّنَّكُم مِّنَّا عَذَابٌ أَلِيمٌ");
		translation_y(n);
		sound(n);
		break;
	case '19':
		printf("قَالُوا۟ طَٰٓئِرُكُم مَّعَكُمْ ۚ أَئِن ذُكِّرْتُم ۚ بَلْ أَنتُمْ قَوْمٌ مُّسْرِفُونَ");
		translation_y(n);
		sound(n);
		break;
	case '20':
		printf("وَجَآءَ مِنْ أَقْصَا ٱلْمَدِينَةِ رَجُلٌ يَسْعَىٰ قَالَ يَٰقَوْمِ ٱتَّبِعُوا۟ ٱلْمُرْسَلِينَ");
		translation_y(n);
		sound(n);
		break;
	case '21':
		printf("ٱتَّبِعُوا۟ مَن لَّا يَسْـَٔلُكُمْ أَجْرًا وَهُم مُّهْتَدُونَ");
		translation_y(n);
		sound(n);
		break;
	case '22':
		printf("وَمَا لِىَ لَآ أَعْبُدُ ٱلَّذِى فَطَرَنِى وَإِلَيْهِ تُرْجَعُونَ");
		translation_y(n);
		sound(n);
		break;
	case '23':
		printf("ءَأَتَّخِذُ مِن دُونِهِۦٓ ءَالِهَةً إِن يُرِدْنِ ٱلرَّحْمَٰنُ بِضُرٍّ لَّا تُغْنِ عَنِّى شَفَٰعَتُهُمْ شَيْـًٔا وَلَا يُنقِذُونِ");
		translation_y(n);
		sound(n);
		break;
	case '24':
		printf("إِنِّىٓ إِذًا لَّفِى ضَلَٰلٍ مُّبِينٍ");
		translation_y(n);
		sound(n);
		break;
	case '25':
		printf("إِنِّىٓ ءَامَنتُ بِرَبِّكُمْ فَٱسْمَعُونِ");
		translation_y(n);
		sound(n);
		break;
	case '26':
		printf("قِيلَ ٱدْخُلِ ٱلْجَنَّةَ ۖ قَالَ يَٰلَيْتَ قَوْمِى يَعْلَمُونَ");
		translation_y(n);
		sound(n);
		break;
	case '27':
		printf("بِمَا غَفَرَ لِى رَبِّى وَجَعَلَنِى مِنَ ٱلْمُكْرَمِينَ");
		translation_y(n);
		sound(n);
		break;
	case '28':
		printf(" وَمَآ أَنزَلْنَا عَلَىٰ قَوْمِهِۦ مِنۢ بَعْدِهِۦ مِن جُندٍ مِّنَ ٱلسَّمَآءِ وَمَا كُنَّا مُنزِلِينَ");
		translation_y(n);
		sound(n);
		break;
	case '29':
		printf(" إِن كَانَتْ إِلَّا صَيْحَةً وَٰحِدَةً فَإِذَا هُمْ خَٰمِدُونَ");
		translation_y(n);
		sound(n);
		break;
	case '30':
		printf(" يَٰحَسْرَةً عَلَى ٱلْعِبَادِ ۚ مَا يَأْتِيهِم مِّن رَّسُولٍ إِلَّا كَانُوا۟ بِهِۦ يَسْتَهْزِءُونَ");
		translation_y(n);
		sound(n);
		break;
	case '31':
		printf("أَلَمْ يَرَوْا۟ كَمْ أَهْلَكْنَا قَبْلَهُم مِّنَ ٱلْقُرُونِ أَنَّهُمْ إِلَيْهِمْ لَا يَرْجِعُونَ");
		translation_y(n);
		sound(n);
		break;
	case '32':
		printf("وَإِن كُلٌّ لَّمَّا جَمِيعٌ لَّدَيْنَا مُحْضَرُونَ");
		translation_y(n);
		sound(n);
		break;
	case '33':
		printf("وَءَايَةٌ لَّهُمُ ٱلْأَرْضُ ٱلْمَيْتَةُ أَحْيَيْنَٰهَا وَأَخْرَجْنَا مِنْهَا حَبًّا فَمِنْهُ يَأْكُلُونَ");
		translation_y(n);
		sound(n);
		break;
	case '34':
		printf(" وَجَعَلْنَا فِيهَا جَنَّٰتٍ مِّن نَّخِيلٍ وَأَعْنَٰبٍ وَفَجَّرْنَا فِيهَا مِنَ ٱلْعُيُونِ");
		translation_y(n);
		sound(n);
		break;
	case '35':
		printf("لِيَأْكُلُوا۟ مِن ثَمَرِهِۦ وَمَا عَمِلَتْهُ أَيْدِيهِمْ ۖ أَفَلَا يَشْكُرُونَ");
		translation_y(n);
		sound(n);
		break;
	case '36':
		printf("سُبْحَٰنَ ٱلَّذِى خَلَقَ ٱلْأَزْوَٰجَ كُلَّهَا مِمَّا تُنۢبِتُ ٱلْأَرْضُ وَمِنْ أَنفُسِهِمْ وَمِمَّا لَا يَعْلَمُونَ");
		translation_y(n);
		sound(n);
		break;
	case '37':
		printf("وَءَايَةٌ لَّهُمُ ٱلَّيْلُ نَسْلَخُ مِنْهُ ٱلنَّهَارَ فَإِذَا هُم مُّظْلِمُونَ");
		translation_y(n);
		sound(n);
		break;
	case '38':
		printf(" وَٱلشَّمْسُ تَجْرِى لِمُسْتَقَرٍّ لَّهَا ۚ ذَٰلِكَ تَقْدِيرُ ٱلْعَزِيزِ ٱلْعَلِيمِ");
		translation_y(n);
		sound(n);
		break;
	case '39':
		printf(" وَٱلْقَمَرَ قَدَّرْنَٰهُ مَنَازِلَ حَتَّىٰ عَادَ كَٱلْعُرْجُونِ ٱلْقَدِيمِ");
		translation_y(n);
		sound(n);
		break;
	case '40':
		printf("لَا ٱلشَّمْسُ يَنۢبَغِى لَهَآ أَن تُدْرِكَ ٱلْقَمَرَ وَلَا ٱلَّيْلُ سَابِقُ ٱلنَّهَارِ ۚ وَكُلٌّ فِى فَلَكٍ يَسْبَحُونَ");
		translation_y(n);
		sound(n);
		break;
	case '41':
		printf("وَءَايَةٌ لَّهُمْ أَنَّا حَمَلْنَا ذُرِّيَّتَهُمْ فِى ٱلْفُلْكِ ٱلْمَشْحُونِ");
		translation_y(n);
		sound(n);
		break;
	case '42':
		printf("وَخَلَقْنَا لَهُم مِّن مِّثْلِهِۦ مَا يَرْكَبُونَ");
		translation_y(n);
		sound(n);
		break;
	case '43':
		printf("وَإِن نَّشَأْ نُغْرِقْهُمْ فَلَا صَرِيخَ لَهُمْ وَلَا هُمْ يُنقَذُونَ");
		translation_y(n);
		sound(n);
		break;
	case '44':
		printf("إِلَّا رَحْمَةً مِّنَّا وَمَتَٰعًا إِلَىٰ حِينٍ");
		translation_y(n);
		sound(n);
		break;
	case '45':
		printf("وَإِذَا قِيلَ لَهُمُ ٱتَّقُوا۟ مَا بَيْنَ أَيْدِيكُمْ وَمَا خَلْفَكُمْ لَعَلَّكُمْ تُرْحَمُونَ");
		translation_y(n);
		sound(n);
		break;
	case '46':
		printf("وَمَا تَأْتِيهِم مِّنْ ءَايَةٍ مِّنْ ءَايَٰتِ رَبِّهِمْ إِلَّا كَانُوا۟ عَنْهَا مُعْرِضِينَ");
		translation_y(n);
		sound(n);
		break;
	case '47':
		printf("وَإِذَا قِيلَ لَهُمْ أَنفِقُوا۟ مِمَّا رَزَقَكُمُ ٱللَّهُ قَالَ ٱلَّذِينَ كَفَرُوا۟ لِلَّذِينَ ءَامَنُوٓا۟ أَنُطْعِمُ مَن لَّوْ يَشَآءُ ٱللَّهُ أَطْعَمَهُۥٓ إِنْ أَنتُمْ إِلَّا فِى ضَلَٰلٍ مُّبِينٍ");
		translation_y(n);
		sound(n);
		break;
	case '48':
		printf("وَيَقُولُونَ مَتَىٰ هَٰذَا ٱلْوَعْدُ إِن كُنتُمْ صَٰدِقِينَ");
		translation_y(n);
		sound(n);
		break;
	case '49':
		printf("مَا يَنظُرُونَ إِلَّا صَيْحَةً وَٰحِدَةً تَأْخُذُهُمْ وَهُمْ يَخِصِّمُونَ");
		translation_y(n);
		sound(n);
		break;
	case '50':
		printf(" فَلَا يَسْتَطِيعُونَ تَوْصِيَةً وَلَآ إِلَىٰٓ أَهْلِهِمْ يَرْجِعُونَ");
		translation_y(n);
		sound(n);
		break;
	case '51':
		printf("وَنُفِخَ فِى ٱلصُّورِ فَإِذَا هُم مِّنَ ٱلْأَجْدَاثِ إِلَىٰ رَبِّهِمْ يَنسِلُونَ");
		translation_y(n);
		sound(n);
		break;
	case '52':
		printf(" قَالُوا۟ يَٰوَيْلَنَا مَنۢ بَعَثَنَا مِن مَّرْقَدِنَا هَٰذَا مَا وَعَدَ ٱلرَّحْمَٰنُ وَصَدَقَ ٱلْمُرْسَلُونَ");
		translation_y(n);
		sound(n);
		break;
	case '53':
		printf(" إِن كَانَتْ إِلَّا صَيْحَةً وَٰحِدَةً فَإِذَا هُمْ جَمِيعٌ لَّدَيْنَا مُحْضَرُونَ");
		translation_y(n);
		sound(n);
		break;
	case '54':
		printf("فَٱلْيَوْمَ لَا تُظْلَمُ نَفْسٌ شَيْـًٔا وَلَا تُجْزَوْنَ إِلَّا مَا كُنتُمْ تَعْمَلُونَ");
		translation_y(n);
		sound(n);
		break;
	case '55':
		printf("إِنَّ أَصْحَٰبَ ٱلْجَنَّةِ ٱلْيَوْمَ فِى شُغُلٍ فَٰكِهُونَ");
		translation_y(n);
		sound(n);
		break;
	case '56':
		printf(" هُمْ وَأَزْوَٰجُهُمْ فِى ظِلَٰلٍ عَلَى ٱلْأَرَآئِكِ مُتَّكِـُٔونَ");
		translation_y(n);
		sound(n);
		break;
	case '57':
		printf(" لَهُمْ فِيهَا فَٰكِهَةٌ وَلَهُم مَّا يَدَّعُونَ");
		translation_y(n);
		sound(n);
		break;
	case '58':
		printf(" سَلَٰمٌ قَوْلًا مِّن رَّبٍّ رَّحِيمٍ");
		translation_y(n);
		sound(n);
		break;
	case '59':
		printf("وَٱمْتَٰزُوا۟ ٱلْيَوْمَ أَيُّهَا ٱلْمُجْرِمُونَ");
		translation_y(n);
		sound(n);
		break;
	case '60':
		printf("أَلَمْ أَعْهَدْ إِلَيْكُمْ يَٰبَنِىٓ ءَادَمَ أَن لَّا تَعْبُدُوا۟ ٱلشَّيْطَٰن إِنَّهُۥ لَكُمْ عَدُوٌّ مُّبِينٌ");
		translation_y(n);
		sound(n);
		break;
	case '61':
		printf("وَأَنِ ٱعْبُدُونِى  هَٰذَا صِرَٰطٌ مُّسْتَقِيمٌ");
		translation_y(n);
		sound(n);
		break;
	case '62':
		printf("وَلَقَدْ أَضَلَّ مِنكُمْ جِبِلًّا كَثِيرًا أَفَلَمْ تَكُونُوا۟ تَعْقِلُونَ");
		translation_y(n);
		sound(n);
		break;
	case '63':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_y(n);
		sound(n);
		break;
	case '64':
		printf("ٱصْلَوْهَا ٱلْيَوْمَ بِمَا كُنتُمْ تَكْفُرُونَ");
		translation_y(n);
		sound(n);
		break;
	case '65':
		printf(" ٱلْيَوْمَ نَخْتِمُ عَلَىٰٓ أَفْوَٰهِهِمْ وَتُكَلِّمُنَآ أَيْدِيهِمْ وَتَشْهَدُ أَرْجُلُهُم بِمَا كَانُوا۟ يَكْسِبُونَ");
		translation_y(n);
		sound(n);
		break;
	case '66':
		printf("وَلَوْ نَشَآءُ لَطَمَسْنَا عَلَىٰٓ أَعْيُنِهِمْ فَٱسْتَبَقُوا۟ ٱلصِّرَٰطَ فَأَنَّىٰ يُبْصِرُونَ");
		translation_y(n);
		sound(n);
		break;
	case '67':
		printf("وَلَوْ نَشَآءُ لَمَسَخْنَٰهُمْ عَلَىٰ مَكَانَتِهِمْ فَمَا ٱسْتَطَٰعُوا۟ مُضِيًّا وَلَا يَرْجِعُونَ");
		translation_y(n);
		sound(n);
		break;
	case '68':
		printf(" وَمَن نُّعَمِّرْهُ نُنَكِّسْهُ فِى ٱلْخَلْقِ أَفَلَا يَعْقِلُونَ");
		translation_y(n);
		sound(n);
		break;
	case '69':
		printf("وَمَا عَلَّمْنَٰهُ ٱلشِّعْرَ وَمَا يَنۢبَغِى لَهُۥٓ إِنْ هُوَ إِلَّا ذِكْرٌ وَقُرْءَانٌ مُّبِينٌ");
		translation_y(n);
		sound(n);
		break;
	case '70':
		printf(" لِّيُنذِرَ مَن كَانَ حَيًّا وَيَحِقَّ ٱلْقَوْلُ عَلَى ٱلْكَٰفِرِينَ");
		translation_y(n);
		sound(n);
		break;
	case '71':
		printf("أَوَلَمْ يَرَوْا۟ أَنَّا خَلَقْنَا لَهُم مِّمَّا عَمِلَتْ أَيْدِينَآ أَنْعَٰمًا فَهُمْ لَهَا مَٰلِكُونَ");
		translation_y(n);
		sound(n);
		break;
	case '72':
		printf("وَذَلَّلْنَٰهَا لَهُمْ فَمِنْهَا رَكُوبُهُمْ وَمِنْهَا يَأْكُلُونَ");
		translation_y(n);
		sound(n);
		break;
	case '73':
		printf(" وَلَهُمْ فِيهَا مَنَٰفِعُ وَمَشَارِبُ أَفَلَا يَشْكُرُونَ");
		translation_y(n);
		sound(n);
		break;
	case '74':
		printf("وَٱتَّخَذُوا۟ مِن دُونِ ٱللَّهِ ءَالِهَةً لَّعَلَّهُمْ يُنصَرُونَ");
		translation_y(n);
		sound(n);
		break;
	case '75':
		printf(" لَا يَسْتَطِيعُونَ نَصْرَهُمْ وَهُمْ لَهُمْ جُندٌ مُّحْضَرُونَ");
		translation_y(n);
		sound(n);
		break;
	case '76':
		printf(" فَلَا يَحْزُنكَ قَوْلُهُمْ ۘ إِنَّا نَعْلَمُ مَا يُسِرُّونَ وَمَا يُعْلِنُونَ");
		translation_y(n);
		sound(n);
		break;
	case '77':
		printf("أَوَلَمْ يَرَ ٱلْإِنسَٰنُ أَنَّا خَلَقْنَٰهُ مِن نُّطْفَةٍ فَإِذَا هُوَ خَصِيمٌ مُّبِينٌ");
		translation_y(n);
		sound(n);
		break;
	case '78':
		printf(" وَضَرَبَ لَنَا مَثَلًا وَنَسِىَ خَلْقَهُۥ ۖ قَالَ مَن يُحْىِ ٱلْعِظَٰمَ وَهِىَ رَمِيمٌ");
		translation_y(n);
		sound(n);
		break;
	case '79':
		printf(" قُلْ يُحْيِيهَا ٱلَّذِىٓ أَنشَأَهَآ أَوَّلَ مَرَّةٍ ۖ وَهُوَ بِكُلِّ خَلْقٍ عَلِيمٌ");
		translation_y(n);
		sound(n);
		break;
	case '80':
		printf("ٱلَّذِى جَعَلَ لَكُم مِّنَ ٱلشَّجَرِ ٱلْأَخْضَرِ نَارًا فَإِذَآ أَنتُم مِّنْهُ تُوقِدُونَ");
		translation_y(n);
		sound(n);
		break;
	case '81':
		printf(" أَوَلَيْسَ ٱلَّذِى خَلَقَ ٱلسَّمَٰوَٰتِ وَٱلْأَرْضَ بِقَٰدِرٍ عَلَىٰٓ أَن يَخْلُقَ مِثْلَهُم ۚ بَلَىٰ وَهُوَ ٱلْخَلَّٰقُ ٱلْعَلِيمُ");
		translation_y(n);
		sound(n);
		break;
	case '82':
		printf("إِنَّمَآ أَمْرُهُۥٓ إِذَآ أَرَادَ شَيْـًٔا أَن يَقُولَ لَهُۥ كُن فَيَكُونُ");
		translation_y(n);
		sound(n);
		break;
	case '83':
		printf("فَسُبْحَٰنَ ٱلَّذِى بِيَدِهِۦ مَلَكُوتُ كُلِّ شَىْءٍ وَإِلَيْهِ تُرْجَعُونَ");
		translation_y(n);
		sound(n);
		break;
	}
    }
    else 
    {
        wholeSurahYaseen();
    }
}

int searchmultiple_y ()
{
    int g,j;
    printf("Enter ayah from which you wannt to search=");
    scanf("%d",&g);
    printf("enter ayah to which you want to search=");
    scanf("%d",&j);
    
    FILE *fp;
    int ch;
    char chh;
    fp=fopen("surah_yaseen.txt","rb");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    
    while(!feof(fp))
    {
        ch=fgetc(fp);
        if (ch==g){
            while(chh!=j){
               
             chh=fgetc(fp);
             printf("%c",chh);   
            }
        }
    }
    
    fclose(fp);
}


void SurahRahman(int n)
{
	
	if (n!=0)
    {
    switch (n)
	{
	case '1':
		printf("ٱلرَّحْمَٰنُ");
		translation_r(n);
		n=n+100;
		sound(n);
		break;
	case '2':
		printf("عَلَّمَ ٱلْقُرْءَانَ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '3':
		printf("خَلَقَ ٱلْإِنسَٰنَ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '4':
		printf("عَلَّمَهُ ٱلْبَيَانَ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '5':
		printf("ٱلشَّمْسُ وَٱلْقَمَرُ بِحُسْبَانٍ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '6':
		printf("وَٱلنَّجْمُ وَٱلشَّجَرُ يَسْجُدَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '7':
		printf("وَٱلسَّمَآءَ رَفَعَهَا وَوَضَعَ ٱلْمِيزَانَ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '8':
		printf(" أَلَّا تَطْغَوْا۟ فِى ٱلْمِيزَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '9':
		printf(" وَأَقِيمُوا۟ ٱلْوَزْنَ بِٱلْقِسْطِ وَلَا تُخْسِرُوا۟ ٱلْمِيزَانَ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '10':
		printf("وَٱلْأَرْضَ وَضَعَهَا لِلْأَنَامِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '11':
		printf("فِيهَا فَٰكِهَةٌ وَٱلنَّخْلُ ذَاتُ ٱلْأَكْمَامِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '12':
		printf("وَٱلْحَبُّ ذُو ٱلْعَصْفِ وَٱلرَّيْحَانُ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '13':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '14':
		printf("خَلَقَ ٱلْإِنسَٰنَ مِن صَلْصَٰلٍ كَٱلْفَخَّارِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '15':
		printf("وَخَلَقَ ٱلْجَآنَّ مِن مَّارِجٍ مِّن نَّارٍ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '16':
		printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '17':
		printf(" رَبُّ ٱلْمَشْرِقَيْنِ وَرَبُّ ٱلْمَغْرِبَيْنِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '18':
		printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '19':
		printf(" مَرَجَ ٱلْبَحْرَيْنِ يَلْتَقِيَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '20':
		printf("بَيْنَهُمَا بَرْزَخٌ لَّا يَبْغِيَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '21':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '22':
		printf("يَخْرُجُ مِنْهُمَا ٱللُّؤْلُؤُ وَٱلْمَرْجَانُ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '23':
		printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '24':
		printf(" وَلَهُ ٱلْجَوَارِ ٱلْمُنشَـَٔاتُ فِى ٱلْبَحْرِ كَٱلْأَعْلَٰمِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '25':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '26':
		printf("كُلُّ مَنْ عَلَيْهَا فَانٍ");
		translation_r(n);
		sound(n);
		break;
	case '27':
		printf("وَيَبْقَىٰ وَجْهُ رَبِّكَ ذُو ٱلْجَلَٰلِ وَٱلْإِكْرَامِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '28':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '29':
		printf("يَسْـَٔلُهُۥ مَن فِى ٱلسَّمَٰوَٰتِ وَٱلْأَرْضِ ۚ كُلَّ يَوْمٍ هُوَ فِى شَأْنٍ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '30':
		printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '31':
		printf("سَنَفْرُغُ لَكُمْ أَيُّهَ ٱلثَّقَلَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '32':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		sound(n);
		break;
	case '33':
		printf(" يَٰمَعْشَرَ ٱلْجِنِّ وَٱلْإِنسِ إِنِ ٱسْتَطَعْتُمْ أَن تَنفُذُوا۟ مِنْ أَقْطَارِ ٱلسَّمَٰوَٰتِ وَٱلْأَرْضِ فَٱنفُذُوا۟ ۚ لَا تَنفُذُونَ إِلَّا بِسُلْطَٰنٍ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '34':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
		sound(n);
		break;
	case '35':
		printf(" يُرْسَلُ عَلَيْكُمَا شُوَاظٌ مِّن نَّارٍ وَنُحَاسٌ فَلَا تَنتَصِرَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '36':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '37':
		printf("فَإِذَا ٱنشَقَّتِ ٱلسَّمَآءُ فَكَانَتْ وَرْدَةً كَٱلدِّهَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '38':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '39':
		printf("فَيَوْمَئِذٍ لَّا يُسْـَٔلُ عَن ذَنۢبِهِۦٓ إِنسٌ وَلَا جَآنٌّ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '40':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '41':
		printf("يُعْرَفُ ٱلْمُجْرِمُونَ بِسِيمَٰهُمْ فَيُؤْخَذُ بِٱلنَّوَٰصِى وَٱلْأَقْدَامِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '42':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '43':
		printf("هَٰذِهِۦ جَهَنَّمُ ٱلَّتِى يُكَذِّبُ بِهَا ٱلْمُجْرِمُونَ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '44':
		printf(" يَطُوفُونَ بَيْنَهَا وَبَيْنَ حَمِيمٍ ءَانٍ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '45':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '46':
		printf("وَلِمَنْ خَافَ مَقَامَ رَبِّهِۦ جَنَّتَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '47':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '48':
		printf("ذَوَاتَآ أَفْنَانٍ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '49':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '50':
		printf("فِيهِمَا عَيْنَانِ تَجْرِيَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '51':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '52':
		printf("فِيهِمَا مِن كُلِّ فَٰكِهَةٍ زَوْجَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '53':
		printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '54':
		printf(" مُتَّكِـِٔينَ عَلَىٰ فُرُشٍۭ بَطَآئِنُهَا مِنْ إِسْتَبْرَقٍ ۚ وَجَنَى ٱلْجَنَّتَيْنِ دَانٍ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '55':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '56':
		printf("فِيهِنَّ قَٰصِرَٰتُ ٱلطَّرْفِ لَمْ يَطْمِثْهُنَّ إِنسٌ قَبْلَهُمْ وَلَا جَآنٌّ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '57':
		printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '58':
		printf("كَأَنَّهُنَّ ٱلْيَاقُوتُ وَٱلْمَرْجَانُ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '59':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '60':
		printf("هَلْ جَزَآءُ ٱلْإِحْسَٰنِ إِلَّا ٱلْإِحْسَٰنُ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '61':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '62':
		printf("وَمِن دُونِهِمَا جَنَّتَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '63':
		printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '64':
		printf("مُدْهَآمَّتَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '65':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '66':
		printf("فِيهِمَا عَيْنَانِ نَضَّاخَتَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '67':
		printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '68':
		printf(" فِيهِمَا فَٰكِهَةٌ وَنَخْلٌ وَرُمَّانٌ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '69':
		printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '70':
		printf("فِيهِنَّ خَيْرَٰتٌ حِسَانٌ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '71':
		printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '72':
		printf("حُورٌ مَّقْصُورَٰتٌ فِى ٱلْخِيَامِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '73':
		printf("فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '74':
		printf("لَمْ يَطْمِثْهُنَّ إِنسٌ قَبْلَهُمْ وَلَا جَآنٌّ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '75':
		printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '76':
		printf("مُتَّكِـِٔينَ عَلَىٰ رَفْرَفٍ خُضْرٍ وَعَبْقَرِىٍّ حِسَانٍ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '77':
		printf(" فَبِأَىِّ ءَالَآءِ رَبِّكُمَا تُكَذِّبَانِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	case '78':
		printf("تَبَٰرَكَ ٱسْمُ رَبِّكَ ذِى ٱلْجَلَٰلِ وَٱلْإِكْرَامِ");
		translation_r(n);
		n=n+100;
        sound(n);
		break;
	}
    }
    else
    {
        wholeSurahRehman();
    }    
}

void search_by_zikr_r()
{
    char a[200];
    printf("type the waqia u wanna search=");
    gets(a);
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
   }
}
}
int searchmultiple_r()
{
    int g,j;
    printf("Enter ayah from which you wannt to search=");
    scanf("%d",&g);
    printf("enter ayah to which you want to search=");
    scanf("%d",&j);
    
    FILE *fp;
    int ch;
    char chh;
    fp=fopen("surah_rahman.txt","rb");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    
    while(!feof(fp))
    {
        ch=fgetc(fp);
        if (ch==g){
            while(chh!=j)
            {
               
             chh=fgetc(fp);
             printf("%c",chh);   
            }
        }
    }
    
    fclose(fp);
}

int main()
{
    int a;
	printf("Enter 1 for Surah Rahman\n 2 for Surah Yaseen: ");
	scanf("%d", &a);
	if (a == 1)
    {
        int n;
	    printf("To print whole surah enter 0\nTo search any single ayah enter 1\nto search multiple ayah press 3\nto search any specific thing surah press 4:\n");
	    scanf(" %d", &n);
        if(n==0)
        {
            
            SurahRahman(n);
        }
        if(n==1)
        {
            int c;
            printf("enter ayah number to be searched=");
            scanf(" %c",c);
            SurahRahman(c);
        }
        if(n==3)
        {
            searchmultiple_r();
        }
        if(n==4)
        {
            search_by_zikr_r();
        }
    }
	else if(a==2)
    {
        int n;
	    printf("To print whole surah enter 0\nTo search any single ayah enter 1\nto search multiple ayah press 3\nto search any specific thing surah press 4:\n");
	    scanf(" %d", &n);
        if(n==0)
        {
            
            SurahYaseen(n);
        }
        if(n==1)
        {
            int c;
            printf("enter ayah number to be searched=");
            scanf(" %c",c);
            SurahYaseen(c);
        }
        if(n==3)
        {
            searchmultiple_y();
        }
        if(n==4)
        {
            search_by_zikr_y();
        }
    }
}



