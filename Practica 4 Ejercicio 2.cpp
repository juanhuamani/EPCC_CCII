#include <iostream>
#include <fstream>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;


int main(){
	double celcius,F;
	cout<<"Ingrese su terperatura en Celcius ";
	cin>>celcius;
	F=(celcius*9/5)+32;
	cout<< fixed<<setprecision(1)<<celcius;
	cout<<" = "<<F;
	return 0;
}
