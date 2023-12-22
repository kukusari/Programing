#include <stdio.h>

struct student {
 char name[ 20 ] ;
 int age ;
 char sex ;
 float gpa ;
} ;

struct student upgrade( struct student child ) ;

int main() {
 float GPA_standard = 3.00;
 struct student aboy ;
 aboy.sex = 'M' ;
 aboy.gpa = 3.00 ;
 aboy = upgrade( aboy ) ;
 printf( " GPA standard : %.2f \n", GPA_standard ) ;
 printf( " before gpa : %.2f \n", aboy.gpa ) ;
 return 0 ; 

}//end function
struct student upgrade( struct student child ){
	char m;
	printf( "sex : M = men\n" ) ;
	printf( "sex : W = woman\n" ) ;
	printf( "ANS :" ) ;
	scanf ( " %c", &m ) ;
	switch ( m ) {
		case 'M':
			child.gpa = (child.gpa + (3 *(0.2))) ; 
			break;
		case 'W':
			child.gpa = (child.gpa + (0.2)) ; 
			break;
	 	default :
	 		break;
	}
	return child;
}