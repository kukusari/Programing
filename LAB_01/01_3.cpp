#include <stdio.h>
#include <string.h>

int *GetSet( int *num ) ;

int main(){
	
	int *data, num ;
	data = GetSet( &num ) ;
		printf("Number in the array have : %d\n", num) ;	
    	for (int i = 0; i < num; i++) {
        	printf("[%d]Member  :[%d]  \n", i+1 , data[i]);
	}
	printf("-------End-------");
    delete []data ;
    return 0 ;
}
int *GetSet( int *num ){
	int **n;
    printf("How many sort:") ;
    scanf("%d", num);
     	 *n = new int[*num];
    	for (int i = 0; i < *num; i++){
    		printf("Data  member[%d] : ", i+1 );
        	scanf("%d", &(*n)[i]);
    }
    return *n;
}