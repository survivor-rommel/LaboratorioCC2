#include<iostream>

using namespace std;

int ArrSum(const int lista[] ,const int si_ze){
	int sum = 0 ;
	for(int i = 0 ; i < si_ze ; i++ )
		sum+=lista[i];
	return sum;
}


// RECURSIVA  XDDDDDDD
int Arreglosuma(const int lista[], const int tam){
	if(tam == 1 ) 
		return lista[0];
	else 
		return lista[tam-1] + Arreglosuma(lista,tam-1); 
}



int main(){
	int  n ;
	cout<<"Cantidad de Elementos ? :\n";cin>>n;
	int lista1[n];
	for(int i = 0 ; i < n ; i++){
		cout<<"Elemento : "<<endl;
		cin>>lista1[i];
	}
	
	cout<<"Suma con funcion iterativa\n\n";
	cout<<ArrSum(lista1,n)<<"\n\n";
	cout<<"Suma con funcion recursiva\n\n";
	cout<<ArrSum(lista1,n)<<"\n\n";
	
	
	return 0;
}
