#include<iostream>
using namespace std;

int main(){
	int count[5] = {}, i=1;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{	
		cout << "Student [" << i << "]:";
		cin >> grade;
		if(grade=='A') count[0]++;
		else if(grade=='B') count[1]++;
		else if(grade=='C') count[2]++;			
		else if(grade=='D') count[3]++;
		else if(grade=='F') count[4]++;
		else if(grade=='0') break;
		else {
			i--;
			if(grade=='0') break;
			cout<<"Wrong input. Please input again.\n";
			}
      		i++;
    }while(true);
	
	cout << "In total " << i-1 << " students.\n";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";	
	cout << "C = " << count[2] <<",";	
	cout << "D = " << count[3] <<",";	
	cout << "F = " << count[4] <<",";	
	
	return 0;
}