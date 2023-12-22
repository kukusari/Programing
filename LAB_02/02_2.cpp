#include <stdio.h>

char* reverse( char str1[]) ;

int main() {
	char text[ 50 ] = "I Love You" ;
	char *out ;
	out = reverse( text ) ;
	printf("Before reverse : %s\n ", text );
	printf("After reverse  : %s\n ", out );
	
	delete []out ;
	
	return 0;
}
char* reverse( char str1[]){
	int n = 0;
	while(str1[n] != '\0'){
		n++;    
	}
	char* str2 = new char[n];
	for( int i=0; i<n ; i++ ){
		str2[i] = str1[n - i - 1];
	}
	return str2;
} 