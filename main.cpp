
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
//#include <windows.h>
#include <unistd.h>
#include "game.h"

using namespace std;


int main()
{
   cout << "Hello " << endl;


   int n;
  int scores=0;
  bool notbreakk=true;
   while (notbreakk){
     cout << "what do you want to do?" << endl;
     cout << "1 for play Visual memory mode " << endl;
     cout << "2 for play Verbal memory mode " << endl;
     cout << "3 for visit and record past score and then quit" << endl;
     cout << "4 for qiut " << endl;
     cout << "p.s. you may play again and again to get highter score" << endl;
     cout << "your score now is "<< scores << endl;
       cin >> n;
       switch(n) {
           case 1:
           scores += visual();
           break;

           case 2:
           scores += verbal();
           break;

           case 3:
           score(scores);
           notbreakk = false;
           break;

           case 4:
           notbreakk = false;
           break;

           default:
           cout << "error, please enter again.";
       }
   }

   return 0;
}
