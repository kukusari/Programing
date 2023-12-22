#include <stdio.h>

void reverse( char str1[], char str2[] );

int main() {
    char text[ 50 ] = "I Love You" ;
    char out [ 50 ] ;
    reverse( text , out ) ;
    printf( "Input Text : %s\n", text ) ;
    printf( "Reverse    : %s\n", out ) ;
    
    delete []out ;
    
    return 0 ;
}
void reverse ( char str1[], char str2[] ) {
    int n = 0 ;
    while(str1[n] != '\0') {
        n++ ;
    }
    	for (int i = 0; i < n; i++) {
        	str2[i] = str1[n - i -1 ] ;
    }
}