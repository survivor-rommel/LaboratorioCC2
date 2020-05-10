#include<iostream>

using namespace std;

int tamanio(char *c){
	int a = 0;
	for(int i = 0 ; c[i] !='\0' ; i++)
		a++;
	return a;
}
int tamanio2(char *c, int itera){
	int suma = 0;
	if(c[itera] == '\0')
		return suma;
	return (suma+=1) + tamanio2(c,itera+1);	
}

int main(){

	char cad[] = "rommelguapo";
	
	cout<<"La cadena tiene : "<<tamanio(cad)<<" elementos "<<endl;
	cout<<"\n\nUso de la funcion Recursiva\n\nLa cadena tiene : "<<tamanio2(cad,0)<<" elementos "<<endl;
	
	return 0;
}
/*
int tamanio2(char *c){
	static int a = 0;
	if(c[a++] !='\0')
		return  tamanio2(c) + a;	
}
*/
