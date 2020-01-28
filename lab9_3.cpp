#include<iostream>
#include<string>
#include<cmath>
#include<fstream>
using namespace std;

int main(){
	int count=0;
	float sum=0, mean, sd, pw;
	string textline;
	ifstream source("D:\\261102\\lab9\\lab9-2562-2-sunnyxbunny\\score.txt");
	while(getline(source,textline))
	{
		//cout<<textline<<"\n";
		sum+=atof(textline.c_str());
        pw+=pow(atof(textline.c_str()),2);
		count++;
	}
	mean = sum/count;
	sd = sqrt((pw/count)-pow(mean,2));
	cout<<"Number of data = "<<count<<"\n";
	cout<<"mean = "<<mean<<"\n";
	cout<<"Standard deviation = "<<sd;
	
	
	return 0;
}