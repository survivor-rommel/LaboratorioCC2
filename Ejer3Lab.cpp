#include<iostream>

using namespace std;

void ascendente(int lista[], int size){
	int  aux , min ;
	for(int i = 0 ;i < size  ; i++ ){
		min = i;
		for(int j = i+1 ; j < size ; j++){
			if( lista[j] < lista[min])
				min = j;	
		}
		aux  = lista[i];
		lista[i] = lista[min];
		lista[min] = aux;
	}
	for(int i = 0 ; i < size ; i++ )
		cout<<lista[i]<<" ";
	
}
int main(){
	int  n ;
	cout<<"Cantidad de Elementos ? :\n";cin>>n;
	int lista1[n];
	for(int i = 0 ; i < n ; i++){
		cout<<"Elemento : "<<endl;
		cin>>lista1[i];
	}
	ascendente(lista1,n);
	
	return 0;
}
