#include <stdio.h>

struct student {
 char name[ 20 ] ;
} ;

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
	
 struct student children[ 20 ][ 10 ] ;
 int group ;
 GetStudent( children, &group ) ;
		for( int i = 1 ; i <= group; i++ ){
			printf( "room [%d]\n " , i );
				for( int j = 1 ; j <= 10 ; j++ ){
					printf( "student[%d] = %s\n", j , children[i][ j ].name  ) ;
			}	
		}	
 return 0 ;

}//end function
void GetStudent( struct student child[][ 10 ], int *room ){
	printf( " How many room :" ) ;
	scanf( "%d" , room ) ;
		for( int i = 1 ; i <= *room; i++ ){
			printf( "room [%d]\n " , i );
				for( int j = 1 ; j <= 10 ; j++ ){
					printf( " student[%d] :" , j );
					scanf( "%s" ,child[i][ j ].name  ) ;
				}
		}		
}