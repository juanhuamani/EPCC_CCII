#include <iostream>
#include <math.h>

using namespace std;

//Your job is to write a program that reads integers from the
//standar input, sorts them into ascending order, and then
//prints the sorted numbers, one per line.

int main(){
	int n,aux;
	cout<<"Ingrese la cantidad de numeros : ";
	cin>>n;
	int N[n];
	for(int i=0;i<n;i++){
		cout<<"Ingrese numero : ";cin>>N[i];
	}
	
	cout<<"\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(N[j]>N[j+1]){
				aux=N[j];
				N[j]=N[j+1];
				N[j+1]=aux;
			}
		}
	}
	

	for(int i=1;i<=n;i++){
		cout<<N[i]<<" ";
	}
	return 0;
}
