/*Solution of system of linear equations using Gauss-Jordan Method*/

#include <stdio.h>
#define MAXCOL 10
#define MAXROW 10

int main(){
	int dim,i,j,k,p;
	float coff[MAXROW][MAXCOL];
	float pivot,term;
	
	printf("Enter dimension: ");
	scanf("%d", &dim);
	
	printf("\nEnter augmented matrix: \n");
	for(i=0;i<dim;i++){
		for(j=0;j<dim+1;j++){
			printf("coff[%d][%d]: ",i,j);
			scanf("%f",&coff[i][j]);
		}
	}
	for(i=0;i<dim;i++){
		pivot=coff[i][i];
		
		for(j=0;j<dim+1;j++){
			coff[i][j]=coff[i][j]/pivot;
		}
		
		for(k=0;k<dim;k++){
			term=coff[k][i];
			if(i!=k){
				for(p=0;p<dim+1;p++){
					coff[k][p]-=term*coff[i][p];
				}
			}
		}
	}
	
	printf("\nThe solution is: ");
	for(i=0;i<dim;i++){
		printf("\n");
		for(j=dim;j<dim+1;j++){
			printf("x%d = %.f  ",i+1,coff[i][j]);
		}
	}
	return 0;
}
