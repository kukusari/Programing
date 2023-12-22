#include <stdio.h>
#include <string.h>

void GetSet( int **data , int *num ) ;	

int main(){
		int *data, num;
		GetSet( &data , &num );
	
		printf("Number in the array have (%d) line:\n", num);
			for(int i = 0;  i < num; i++){
				printf("[%d]Member  :[%d]  \n" , i+1 , data[i]);
		}
		printf("-------End-------");
		
		delete []data;
		return 0;
}
void GetSet(int **data , int *num ){
		printf(" How many sort : ");
		scanf("%d" ,num);
		*data = new int[*num];
		printf("Number in the array:\n") ;
		for( int i = 0 ;  i < *num; i++ ){
			printf("Data  member[%d] : ", i+1 );
			scanf("%d", &(*data)[i]);
		}
}