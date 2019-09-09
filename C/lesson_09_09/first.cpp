#include <iostream>
#include <cstdlib>
#include <conio>
using namespace std;

struct Transp
{
  int trm[6];
  int trb[15];
  int atb[10];
};


main() {
  char typ, c, mar;
  int i, tpass=0, tcash=0;
  struct Transp cash={}, pass={};

  while (1)
  {
    c=getch()
    if(c==27){
      break;
    }

    typ = (char)rand()%27+97;
    if(typ=='a'){
      mar=rand()%10;
      cash.atb[mar]+=5;
      pass.atb[mar]++;
    }
    if(typ=='b'){
      mar=rand()%15;
      cash.trb[mar]+=4;
      pass.trb[mar]++;
    }
    if(typ=='m'){
      mar=rand()%6;
      cash.trm[mar]+=3;
      pass.trm[mar]++;
    }
  }
  cout << "trm\nmar pass cash\n"
  for(i=0;i<6;i++){
    cout << i+1 << " " << pass.trm[i] << " " << cash.trm[i]<< endl;
    tcash+=cash.trm[i]
    tpass+=cash.trm[i]
  } 
  cout<<"-----------------\n" << tpass <<" "<< tcash;
  cout<< "trb\nmar pass cash \n"
  for(i=0;i<15;i++){
    cout<<i+1<<pass.trb[i]<< cash.trb[i]
    tcash+=cash.trb[i]
    tpass+=pass.trb[i]
  }
  // cout<<tpass<<tcash
}