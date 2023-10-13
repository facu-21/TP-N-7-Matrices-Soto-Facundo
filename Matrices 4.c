#include <stdio.h>

int main() {
	int m[3][12],i,j,c=1,l,k=0,r,t=0,tl=0;
	for(i=0;i<=2;i++){
		for(j=0;j<=11;j++){
			m[i][j]=0;
		}
	}
	while(c>0){
		k++;
		printf("Ingreso de planilla numero %d\n",k);
		printf("Ingrese linea de colectivo: ");
		scanf("%d",&l);
		while(l>3 || l<1){
			printf("Ingreso invalido\n");
			printf("Ingrese linea nuevamente: ");
			scanf("%d",&l);
		}
		printf("Ingrese numero de coche: ");
		scanf("%d",&c);
		if(c<1){
			printf("\nIngreso finalizado\n\n");
			break;
		}
		while(c<1 || c>12){
			printf("Ingreso invalido\n");
			printf("Ingrese numero de coche nuevamente: ");
			scanf("%d",&c);
		}
		printf("Ingrese el monto recaudado: ");
		scanf("%d",&r);
		m[l-1][c-1]=m[l-1][c-1]+r;
		printf("\n");
	}
	printf("Recaudacion de cada coche:\n\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=11;j++){
			printf("Recaudacion de coche numero %d linea %d: %d\n",j+1,i+1,m[i][j]);
			tl=tl+m[i][j];
		}
		printf("\nRecaudacion total de la linea %d: %d\n\n",i+1,tl);
		t=t+tl;
		tl=0;
	}
	printf("Recaudacion total de la empresa: %d\n",t);
	return 0;
}
