#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <string>
#include <windows.h>
#include <unistd.h>
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
		temp+="\0";
		answer=new string(temp);
		std::cout << *answer ;

		Sleep(3000);

		system("CLS");

		std::cout << "The answer: " ;
		cin>>input;

		system("CLS");

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
					Sleep(1000);
					count--;
			}

			system("CLS");
		}else{
			std::cout << "Correct!" << '\n';

			while (count >= 0){
					cout << "\rNext level begins in " << count << flush;
					Sleep(1000);
					count--;
			}

			system("CLS");
			level++;

		}
		temp.clear();
		delete answer;
	}
  return 0;
}
