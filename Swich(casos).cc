#include <iostream>
using namespace std;
int main()
{
	char variable;
	cout<<"Escoge una variable entre A, B, C, D, E, F,"<<endl;
	cin>>variable;
	variable = toupper(variable);
	switch(variable){
	case 'A': cout<<"Excelente"<<endl;break;
	case 'B': cout<<"Muy bien"<<endl; break;
	case 'C': cout<<"Bien"<<endl;break;
	case 'D': cout<<"Pasaste"<<endl;break;
	case 'F': cout<<"Intentalo nuevamente"<<endl;break;
	default: cout<<"Opción no vàlida"<<endl;
	}
	return 0;
}

