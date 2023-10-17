#include <stdio.h>

int main() {
	int m[2][3],i,j,min,s=0;
	printf("Ingrese una matriz de 2x3\n");
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			printf("Ingrese elemento (Fila %d Columna %d): ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	for(j=0;j<=2;j++){
		m[0][j]=m[0][j]*4;//Condición.
	}
	for(i=0;i<=1;i++){
		m[i][2]=m[i][2]*3;//Condición.
	}
	min=m[0][0];
	printf("\n");
	printf("Matriz modificada:\n");
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			printf("%d ",m[i][j]);
			s=s+m[i][j];
			if(m[i][j]<min){
				min=m[i][j];
			}
		}
		printf("\n");
	}
	printf("El menor valor de la matriz modificada es %d\n",min);
	printf("La suma total de los elementos de la matriz modificada es %d",s);
	return 0;
}
