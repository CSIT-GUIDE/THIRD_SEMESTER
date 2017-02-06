#include<stdio.h>
#define MAXCOL 10
#define MAXROW 10

int main(){
	int dim,i,j,k,p;
	float coff[MAXROW][MAXCOL];
	float pivot,term;
	
	printf("Enter dimension: ");
	scanf("%d", &dim);
	
	printf("\nEnter Coefficien matrix: \n");
	for(i=0;i<dim;i++){
		for(j=0;j<dim;j++){
			printf("coff[%d][%d]: ",i,j);
			scanf("%f",&coff[i][j]);
		}
	}
	for(i=0;i<dim;i++){
		for(j=dim;j<2*dim;j++){
			if(i==j-dim){
				coff[i][j]=1;
			}
			else{
				coff[i][j]=0;
			}
		}
	}
	
	for(i=0;i<dim;i++){
		pivot=coff[i][i];
		
		for(j=0;j<2*dim;j++){
			coff[i][j]=coff[i][j]/pivot;
		}
		
		for(k=0;k<dim;k++){
			term=coff[k][i];
			if(i!=k){
				for(p=0;p<2*dim;p++){
					coff[k][p]-=term*coff[i][p];
				}
			}
		}
	}
	
	for(i=0;i<dim;i++){
		printf("\n");
		for(j=dim;j<2*dim;j++){
			printf("%.3f ", coff[i][j]);			
		}
	}
}

