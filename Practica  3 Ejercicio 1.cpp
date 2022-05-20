#include <iostream>
#include <math.h>

using namespace std;
int main(){
	int n,mult=0,mult1=0;
	cout<<"Ingrese cantidad de numeros  ";cin>>n;
	int N[n];
	for(int i=0;i<n;i++){
		cout<<"Ingrese el numero: ";cin>>N[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
				mult=N[i]*N[j];
			}
			if(mult>mult1){
				mult1=mult;
			}
		}
	}
	cout<<"EL producto mayor es: "<<mult1;
	return 0;
}
