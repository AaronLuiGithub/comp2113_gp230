//cpp file to play verbal game, marks will be return.
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <string>
//#include <windows.h>
#include <unistd.h>
#include "game.h"
//usleep(microseconds);

using namespace std;

int verbal()
{
	int lives=3;
	int level=1;
	srand (time(NULL));
	string *answer;
	string temp;
	string input;
	int x;
	string mode="Verbal";

	while (lives>0) {
		int count=3;

		for (int i = 0; i < level; i++) {
			 x =rand() % 9 + 0;
			 temp.append(to_string(x));
		}
		
		answer=new string(temp);
		
		std::cout << *answer << " ";//has bug //fixed 0508
		std::cout.flush() ;

		sleep(3);

		cout << "\033[2K" ;

		std::cout << "The answer: " ;
		cin>>input;

		cout << "\033[2J" ;

		if (*answer!=input) {
			lives--;
			if (lives==0) {
				std::cout << "Wrong Answer! Game Over!" << '\n';
				std::cout << "Your score is:" <<level-1<< '\n';
				break;
			}
			std::cout << "Wrong Answer! Please try again!" << '\n';

			while (count >= 0){
					cout << "\rLevel resumes in " << count << flush;
					(1);
					count--;
			}

			cout << "\033[2J" ;
		}else{
			std::cout << "Correct!" << '\n';

			while (count >= 0){
					cout << "\rNext level begins in " << count << flush;
					sleep(1);
					count--;
			}

			cout << "\033[2J" ;
			level++;

		}
		temp.clear();
		delete answer;
	}
  return level-1;
}
