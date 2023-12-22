#include <stdio.h>
#include <string.h>

int GetSet( int **data,int *num ) ;

int main() {
	
 	int *data, num ;
 	num = GetSet( &data, &num ) ;
 		printf("Number in the array have : %d\n", num) ;	
    	for (int i = 0; i < num; i++) {
        	printf("[%d]Member  :[%d]  \n", i+1 , data[i]);
	}
	printf("-------End-------");
    delete []data;
 	return 0 ;
}

int GetSet( int **data,int *num )
{
    printf("How many sort:") ;
    scanf("%d", num) ;
    *data = new int[*num];
    	for (int i = 0; i < *num; i++) {
    		printf("Data  member[%d] : ", i+1 );
        	scanf("%d", &(*data)[i]);
    }
    return *num;
}