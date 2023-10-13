#include <stdio.h>

int main() {
	int m[20][6],i,j;
	float p=0;
	for(i=0;i<=19;i++){
		printf("Piso numero %d\n",i+1);
		for(j=0;j<=5;j++){
			printf("Ingrese la cantidad de habitantes del departamento numero %d: ",j+1);
			scanf("%d",&m[i][j]);
			while(m[i][j]<0){
				printf("Ingreso invalido\n");
				printf("Ingrese la cantidad de habitantes nuevamente: ");
				scanf("%d",&m[i][j]);
			}
			p=p+m[i][j];
		}
		printf("\n");
	}
	printf("Cantidad total de habitantes: %.0f\n",p);
	p=p/20;
	printf("Promedio de habitantes por piso: %.2f\n",p);
	return 0;
}
