#include<stdio.h>

void fPortada();
void fLeerT(int *, int *, int *);
void fCompruebaT(int *, int *, int *);

main(){
	int a, b, c, o;
	fPortada();
  	do{
  		fLeerT(&a, &b, &c);
  		fCompruebaT(&a, &b, &c);
  		if (a==b && a==c){
  			printf("\n	El triangulo formado es Equilatero.");
  		}
  		else if ((a==b) || (b==c) || (a==c)){
  			printf("\n	El triangulo formado es Isosceles.");
  		}
  		else if (a!=b && a!=c && b!=c){
  			printf("\n	El triangulo formado es Escaleno.");
  		}
  		printf("\n\tDesea calcular otro triangulo?\n");
  		printf("\tSi=1\tNo=0\t");
  		scanf("%d",&o);
  		while(o!=1 && o!=0){
  			printf("\n	Opcion no valida.");
  			printf("\tSi=1\tNo=0\t");
  		    scanf("%d",&o);
  		}
  		system("cls");
  	}while(o==1);
}

void fPortada(){
	system("color 17");
	printf("\n\t\t\tPrograma Triangulos");
  	printf("\n\t\t\t___________________\n");
  	printf("\n\t\tEstre programa te ayudara a determinar el");
  	printf("\n\t\ttipo de triangulo dependiendo del valor");
  	printf("\n\t\tque tu asignes a cada lado.\n\n\n");

  	system("pause");
  	system("cls");
}

void fLeerT(int *a, int *b, int *c)
{
	printf("\n	Introdusca valores del triangulo.\n");
  	printf("\n	Lado a: ");
  	scanf("%d",a);
  	while (*a <= 0)
	{
  		printf("\n	Debe de ser un valor mayor que 0.\n");
  		printf("\n	Lado a: ");
  	    scanf("%d",a);
  	}
  	
  	printf("\n	Lado b: ");
  	scanf("%d",b);
  	while (*b <= 0)
	{
  		printf("\n	Debe de ser un valor mayor que 0.\n");
  		printf("\n	Lado b: ");
  	    scanf("%d",b);
  	}
  	
  	printf("\n	Lado c: ");
  	scanf("%d",c);
	while (*c == 0)
	{
  		printf("Debe de ser un valor mayor que 0.\n");
  		printf("\n	Lado c: ");
  	    scanf("%d",c);
  	}
  	system("cls");
}

void fCompruebaT(int *a, int *b, int *c)
{
	while (*a >= (*b+*c) || *b >= (*a+*c) || *c >= (*a+*b))
	{
  		printf("\n	Los valores introducidos no forman un triangulo.\n");
  		printf("	Pruebe de nuevo.\n");
  		printf("\n	Introdusca valores del triangulo.\n");
	  	printf("\n	Lado a: ");
	  	scanf("%d",a);
	  	while (*a <= 0)
		  {
	  		printf("\n	Debe de ser un valor mayor que 0.");
	  		printf("\n	Lado a: ");
	  	    scanf("%d",a);
	  	}
	  	printf("\n	Lado b: ");
	  	scanf("%d",b);
	  	while (*b <= 0)
		  {
	  		printf("\n	Debe de ser un valor mayor que 0.");
	  		printf("\n	Lado b: ");
	  	    scanf("%d",b);
	  	}
	  	printf("\n	Lado c: ");
	  	scanf("%d",c);
	  	while (*c == 0){
	  		printf("\n	Debe de ser un valor mayor que 0.");
	  		printf("\n	Lado c: ");
	  	    scanf("%d",c);
	  	}
  	}
}
