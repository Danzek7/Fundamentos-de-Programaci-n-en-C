#include <stdio.h>
void main()
{
	struct Producto
	{
		int codigo;
		char descripcion[100];
		char tipo[30];
		char marca[50];
		int precio;
		int stock;
	};
	struct Producto p={2100,"Manzana roja en bolsa de 1kg","frutas","dole",890,50};
	printf("Producto:\n%s - $%i",p.descripcion,p.precio);
	printf("\n%i / %s / %s",p.codigo,p.tipo,p.marca);
	////////////////////////////////////////////////////////////
	struct InfoPersona
	{
		int ID;
		int nombre[30];
		char direccion[60];
		char ciudad[20];
	};
	struct Empleado
	{
		struct InfoPersona infoEmpleado; //Declaración en base a la estructura general
		double sueldo; //Declaración de datos particular a Empleado
	};
	struct Cliente
	{
		struct InfoPersona infoCliente;
		double credito;
	};
	//Declaración de variables de tipo estructura
	struct Empleado emp;
	struct Cliente cli;
	//Datos de empleado
	emp.infoEmpleado.ID=100;
	strcpy(emp.infoEmpleado.nombre,"Edmund Hillary");
	strcpy(emp.infoEmpleado.direccion,"New Zealand");
	strcpy(emp.infoEmpleado.ciudad,"Tuakau");
	emp.sueldo=1200000;
}
