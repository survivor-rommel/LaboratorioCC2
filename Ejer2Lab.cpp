#include<iostream>

using namespace std;

void reverse(int lista[] , int size){
	for(int i = size-1;i >=0 ; i--)
		cout<<lista[i]<<" ";
}

//  EL RECURSIVO XD
void reverse2(int lista[] , int size){
	if( size >= 0){
		cout<<lista[size-1]<<endl;
		reverse2(lista,size-1);
	}
	
	
}

int main(){
	int  n ;
	cout<<"Cantidad de Elementos ? :\n";cin>>n;
	int lista1[n];
	for(int i = 0 ; i < n ; i++){
		cout<<"Elemento : "<<endl;
		cin>>lista1[i];
	}
	for(int i = 0 ; i  < n ; i++ )
		cout<<lista1[i]<<" ";
	
	cout<<"\n\nIterativo";
	cout << "\n\n";
	reverse(lista1,n);
	
	cout<<"\n\nRecursivo\n";
	reverse(lista1,n);
	
	
	return 0;
}
