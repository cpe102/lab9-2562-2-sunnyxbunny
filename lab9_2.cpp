#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
	string textline;
	ifstream cheerbook;
	cheerbook.open("D:\\261102\\lab9\\lab9-2562-2-sunnyxbunny\\cheerbook.txt");
	ofstream desk ("D:\\261102\\lab9\\lab9-2562-2-sunnyxbunny\\cheerbook_copy.txt");
	desk << "-------------------- SOTUS ---------------------"<<endl;
	while(getline(cheerbook,textline)){
	desk <<textline<<"\n";
	}
	//cheerbook.open ("D:\\261102\\lab9\\lab9-2562-2-sunnyxbunny\\cheerbook_copy.txt");
	desk << "-------------------- SOTUS ---------------------";
	cheerbook.close();
	return 0;
}