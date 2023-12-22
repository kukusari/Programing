#include <stdio.h>

int* GetMatrix( int *row, int *col );
				
int main(){
 int *data, m, n ;
 data = GetMatrix( &m , &n );
		printf("Number in the array have [%d][%d]) line:\n", m , n );
			for(int i = 0;  i < m; i++)
				for(int j = 0;  j < n; j++){
				printf("Member[%d][%d]  :[%d]\n", i ,j , data[i * n + j]);
		}
		printf("-------End-------");
		delete []data; 		
 		return 0;
}		
int* GetMatrix( int *row, int *col ){
	printf("How many row : ");
	scanf("%d" ,row);
	printf("How many cols : ");
	scanf("%d" ,col);
	int *number = new int[*row * *col];
		printf("Number in the array:\n") ;
		for( int i = 0 ;  i < *row; i++ )
			for( int j = 0 ;  j < *col; j++ ){
			printf("Data  member[%d][%d] : ", i , j  );
			scanf("%d", &number[i* *col + j]);
	}
	return number;
}

             