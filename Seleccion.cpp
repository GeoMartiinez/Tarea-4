#include<iostream>
using namespace std;

main (){
	/* int notas[4];
	notas[0]=80;
	notas[1]=65;
	notas[2]=60;
	notas[3]=65;
	
	cout<<notas[0]<<endl;
	cout<<notas[1]<<endl;
	cout<<notas[2]<<endl;
	cout<<notas[3]<<endl;
	
	
	for(int i=0;i<=3;i++){
		cout<<i<<":"<<notas[i]<<endl;
	}
	*/
	
	/*int tam=0, suma=0, promedio=0;
	cout<<"Cuantas notas desea ingresar: ";
	cin>>tam;
	int notas[tam];
	for(int i=0;i<tam;i++){
		cout<<"Ingrese Nota "<<i+1<<": ";
		cin>>notas[i];
	}
	
	for(int i=0;i<tam;i++){
		suma+= notas[i];
	}
	promedio = suma / tam;
	cout<<"El promedio es: "<<promedio<<endl;
	*/
	
	/*int tam=0, suma=0, promedio=0;
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"Ingrese Nota "<<tam<<": ";
		cin>>notas[tam-1];
		cout<<"Desea Ingresar otra Nota (s/n): ";
		cin>>res;
	}while(res=='s'||res=='S');
	
	for (int i=0;i<tam;i++){
		//cout<<notas[i]<<endl;
		suma+=notas[i];
	}
	promedio = suma/tam;
	cout<<"El promedio es: "<<promedio<<endl;
	*/
	
	/*string nombre;
	int dato;
	cout<<"Ingrese Dato: ";
	cin>>dato;
	cin.ignore();
	cout<<"Ingrese Nombre Completo: ";
	getline(cin,nombre);
	
	cout<<nombre<<endl;
	*/
	
	string semana[7]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
	semana[3] = "Jueves";
	for (int i=0;i<7;i++){
		cout<<semana[i]<<endl;
	}
	
	system("pause");
}
