#include<iostream>

using namespace std;

int longitud(char *A){
	int c= 0;
	for(int i = 0 ; A[i] !='\0' ; i++ )
		c++;
	return c;
}

void copiar(char *B , char *A , int tam){
	for( int i = 0 ; i < tam ; i++){
		A[i]  =  B[i];
	}
}

int main(){
	int n; // nro de espacios 1ra cadena 
	char B[n];
	cout<<"Elem maximos de la cadena \n ";cin>>n;
	cin.ignore();
	cout<<"\nCadena B\n";cin.getline(B,n);
	int tam = longitud(B);  // se asigna el tamaño de real de B a una variable
	char A[tam];
	
	
	cout<<"\nCadena A despues de copiarle la cadena B\n\n";
	copiar(B,A,tam);

	cout<<"\n\nImprimiendo el contenido de A\n\n";
	for(int i = 0 ; i < longitud(B); i ++ ){
		cout<<A[i];
	}
	
	return 0;
}
