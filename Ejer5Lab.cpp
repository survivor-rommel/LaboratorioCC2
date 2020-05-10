#include<iostream>

using namespace std;

int longitud(char *A){
	int c= 0;
	for(int i = 0 ; A[i] !='\0' ; i++ )
		c++;
	return c;
}

void concatenar(char *A , char *B , int n  , int n1){
	// n1 es el tamaño de la cadena mas grande (B) SUPUESTAMENTE PARA ASUMIR LOS ELEMENTOS DE A
	int d = longitud(B); // almacena un entero .. la longitud de la cadena B
	for(int i = 0  ;i < n1  ; i++ , d++ ){
		B[d] = A[i];
	}
	for(int i  = 0 ; i < n1 ; i ++  ){
		cout<<B[i];
		if(i == (longitud(B)-1)) // bueno con esto no imprimira valores basura ______
			break;
	}
}


int main(){
	int n ,n1;
	
	cout<<"Numero elementos de la A\n"; cin>>n;  // INGRESA EL ESPACIO MAXIMO ALMACENADO PARA SU LA CADENA A
	cout<<"Numero elementos de la B\n"; cin>>n1; // INGRESA EL ESPACIO MAXIMO ALMACENADO PARA SU LA CADENA B
	char A[n];
	char B[n1];
	cout<<"Cadena B"<<endl;
	cin.ignore();
	cin.getline(B,n1,'\n');
	cout<<"\nCadena A"<<endl;
	cin.getline(A,n,'\n');
	cout<<"\n\n";
	
	cout<<"La cadena concatenada es  : \n\n";
	concatenar(A,B,n,n1);cout<<"\n";
	
	system("pause");
	return 0;
}
