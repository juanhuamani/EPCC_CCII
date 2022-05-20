#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
string ordenar(string x){
	sort(x.begin(),x.end());
	return x;
}
bool anagram(string a,string b){
	return ordenar(a)==ordenar(b);
}

int main(){
	string a,b;
	cout<<"Primera palabra : ";cin>>a;
	cout<<"Segunda palabra : ";cin>>b;
	
	if(anagram(a,b)){
		 cout<<"Son anagramas "<<endl;
	}else{
		cout<<" No son anagramas "<<endl;
	}
	return 0;
}
