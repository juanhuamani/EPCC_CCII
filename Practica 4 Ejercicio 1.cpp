#include <iostream>
#include <fstream>
#include <cmath>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
	int seconds,min,h,s;
	cout<<"SEGUNDOS : ";
	cin>>seconds;
	s=seconds;
	min=seconds/60;
	seconds=seconds%60;
	h=min/60;
	min=min%60;
	cout<<s<<" seconds = "<<h<<" hour(s) "<<min<<" minute(s) "<<seconds<<" second(s) ";
	return 0;
}
