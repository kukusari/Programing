#include <stdio.h>

void explode( char str1[], char splitter, char str2[][10], int *count ) ;

int main() {
	char out[ 20 ][ 10 ] ;
	int num = 0 ;
	explode( "I/Love/You" , '/', out, &num  ) ;
	printf( "num = %d \n",num ) ;
    for ( int i = 0; i <= num ; i++ ) {
        printf( "\nstr2[%d] = %s \n", i , out[ i ]) ;
    }
	return 0 ;
}//end function
void explode( char str1[], char splitter, char str2[][ 10 ], int *count ) {
	int i  = 0 ;
	int j  = 0 ;
    *count = 0 ;
	printf( "%s \n", str1 ) ;
    while ( str1[i] != '\0' ) {
		switch ( str1[ i ] ) {
            case '/' :
                if ( splitter == str1[ i ]) {
                    str2[ *count ][ j ] = '\0' ;
                    ( *count )++ ;
                    j = 0 ;
                } else {
                    str2[*count][j] = str1[i];
                    j++;
                }
                break ;
            default :
                str2[ *count ][ j ] = str1[ i ] ;
                j++ ;
                break ;
        }
        printf( "count: %d     j : %d \n",(*count), j ) ;
        i++ ;
    }
}