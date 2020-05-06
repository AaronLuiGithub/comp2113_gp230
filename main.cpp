  
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>     
#include <time.h>
#include <string>
#include <windows.h>
#include <unistd.h>
#include <game.h>

using namespace std;


int main()
{
   cout << "Hello " << endl; 
   cout << "what do you want to do?" << endl;
   cout << "Enter: " << endl;    
   cout << "1 for play Visual memory mode " << endl;
   cout << "2 for Verbal memory mode " << endl; 
   cout << "3 for visit past score " << endl; 
   cout << "4 for qiut " << endl;
   
   int n;
   while (true){
       cin >> n;
       switch(n) {
           case 1:
           
           case 2:
           
           case 3:
           
           case 4:
           break;
           
           default:
           cout << "error, please enter again.";
       }
   }
   
   return 0;
}