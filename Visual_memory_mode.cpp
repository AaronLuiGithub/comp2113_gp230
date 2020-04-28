//The game will have 3 level, 2*2,3*3,4*4

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>


using namespace std;

void printing(bool *x,int level){//maybe can upgrade? I will do it later
	int sqrlevel = sqrt(level); 
	for (int i=0; i<level; ++i){
		if (x[i]== true)  cout<<"1"; 
		else cout<<"0";
		if ((i%sqrlevel)==(sqrlevel-1))	cout << endl;
	}
}

int getlevel(){
	int level;
	cout << "what level you want to play?(2-4)"
	cin >> level;
	if (level==2 or level==3 or level==4) return level;
	else return getlevel();
}

void input(bool *x2,int level){//to be finish
	char temp;
	for(int i=0;i<level;++i){
		cin >> temp;
		if (temp=='1') x2[i]=true;
		else if (temp=='0') x2[i]=false;
		else {
			cout << "error input, please input again";
			input(x2, level);
		}
	}
}

int main(){
	srand(time(NULL) );
	int level;
	level= getlevel();
	level = level*level;
	bool *x = new bool [level];//I know how to use 2d dynamic array but I don't want to use it.
	bool *x2 = new bool [level];
	
	for (int i=0; i<level; ++i){  //rendom out picture
		if ((rand()%2)>0.5)  x[i]=true;
		else  x[i]=false;
	}
	
	printing(x,level);
	//sleep(1200);
	cout<<"press enter to start answer";
	getchar();
	system("cls||clear");//to be improve...
	
	input(x2,level);
	
	bool win=true;
	for (int i=0; i<level; ++i){  //rendom out picture
		if (x2[i]!=x[i])  {
			cout <<"wrong answer, you are weak.";
			win=false;
		}
	}
	if (win==true) cout << "correct answer, you are strong.";
	
	delete[]x;
	delete[]x2;
	
	return 0;
	
}


