#ifndef _INC_SOUND
#define _INC_SOUND

#include<windows.h>
#include<MMSystem.h>
#include<stdlib.h>
#include<string>

void sound(int n)
{
  char bf[10];
  itoa(n,bf,10);
  strcat(bf,".wav");
  PlaySound(bf,NULL,SND_SYNC);
}



#endif

