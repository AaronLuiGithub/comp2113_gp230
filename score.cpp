#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct scores{
    string name;
    int score;
};

int main()//change to int score(string newname,string newscore)
{
	string newname, newscore;
	cin >> newname >> newscore;//to be delete
    char filename[80] = "data.txt";
    ifstream fin;
	fin.open(filename);

    int n;
	if ( fin.fail() ){
		cout << "Error in file opening!" 	<< endl;
 		exit(1);
 	}
 	
 	fin >> n;
 	scores *a = new scores[n];
    for(int i =0; i<n;++i){
        fin >> a[i].name;
        fin >> a[i].score;  
		cout << a[i].name <<" "<< a[i].score <<endl;
    }
  	fin.close();

   ofstream fout;
   fout.open(filename);
   if ( fout.fail() ) {
      cout << "Error in file opening!" 	<< endl;
      exit(1);
   }
   ++n;
   fout << n << endl;
    for(int i =0; i<n+1;++i){
        fout << a[i].name <<" ";
        fout << a[i].score << endl;    
    }
    fout << newname <<" ";
	fout << newscore << endl;
   fout.close();

   return 0;
}
