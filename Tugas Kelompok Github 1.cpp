#include <stdio.h>

int main(){
	int a,b,i,j;
	int max=0, min;
	
	scanf("%d%d", &a, &b);
	int A[a][b];
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d", &A[i][j]);
		}
	}

	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(A[i][j]>=max) max=A[i][j];
		}
	}
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(A[i][j]<=min) min=A[i][j];
		}
	}

	printf("%d\n", max);
	printf("%d", min);

return 0;
}


