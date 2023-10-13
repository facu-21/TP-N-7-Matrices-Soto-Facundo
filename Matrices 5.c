#include <stdio.h>

int main() {
	int m[100][3],i,j,p,l,t,n;
	float pr;
	for(i=0;i<=99;i++){
		printf("Numero de legajo: %d\n",i+1);
		printf("Notas del alumno:\n");
		for(j=0;j<=2;j++){
			printf("Ingrese su nota del trimestre numero %d: ",j+1);
			scanf("%d",&m[i][j]);
			while(m[i][j]<0 || m[i][j]>10){
				printf("Ingreso invalido\n");
				printf("Ingrese la nueva nota nuevamente: ");
				scanf("%d",&m[i][j]);
			}
		}
		printf("\n");
	}
	printf("Ingreso finalizado\n\n");
	printf("¿Desea hacer alguna modificacion en las notas? (1-SI 2-NO): ");
	scanf("%d",&p);
	while(p<1 || p>2){
		printf("Respuesta invalida\n");
		printf("Ingresela nuevamente: ");
		scanf("%d",&p);
	}
	while(p==1){
		printf("Ingrese el numero de legajo del estudiante que desea modificar: ");
		scanf("%d",&l);
		while(l<1 || l>100){
			printf("Ingreso invalido\n");
			printf("Ingrese el numero de legajo nuevamente: ");
			scanf("%d",&l);
		}
		printf("Ingrese el numero del trimestre que desea modificar: ");
		scanf("%d",&t);
		while(t<1 || t>3){
			printf("Ingreso invalido\n");
			printf("Ingrese el numero de trimestre nuevamente: ");
			scanf("%d",&t);
		}
		printf("Anterior nota: %d\n",m[l-1][t-1]);
		printf("Ingrese la nueva nota que desea registrar: ");
		scanf("%d",&n);
		while(n<0 || n>10){
			printf("Ingreso invalido\n");
			printf("Ingrese la nueva nota nuevamente: ");
			scanf("%d",&n);
		}
		printf("¿Esta seguro de que desea ejecutar esta modificacion? (1-SI 2-NO): ");
		scanf("%d",&p);
		printf("\n");
		while(p<1 || p>2){
			printf("Respuesta invalida\n");
			printf("Ingresela nuevamente: ");
			scanf("%d",&p);
		}
		if(p==1){
			printf("Modificacion confirmada\n");
			m[l-1][t-1]=n;
		}
		else{
			printf("Modificacion cancelada\n");
		}
		printf("¿Desea hacer otra modificacion en las notas? (1-SI 2-NO): ");
		scanf("%d",&p);
		printf("\n");
		while(p<1 || p>2){
			printf("Respuesta invalida\n");
			printf("Ingresela nuevamente: ");
			scanf("%d",&p);
		}
		if(p==2){
			printf("Modificaciones finalizadas\n");
		}
	}
	printf("\n");
	for(i=0;i<=99;i++){
		printf("Numero de legajo: %d\n",i+1);
		printf("Notas del alumno:\n");
		for(j=0;j<=2;j++){
			printf("Nota del trimestre numero %d: %d\n",j+1,m[i][j]);
			pr=pr+m[i][j];
		}
		pr=pr/3;
		printf("Promedio del alumno: %.2f\n\n",pr);
		pr=0;
	}
	return 0;
}
