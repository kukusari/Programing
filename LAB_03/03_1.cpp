#include <stdio.h>

struct student {
 char name[ 20 ] ;
 int age ;
 char sex ;
 float gpa ;
} ;

void upgrade( struct student child ) ;

int main() {
 struct student aboy ;
 aboy.sex = 'M'  ;
 aboy.gpa = 3.00 ;
 upgrade( aboy ) ;
 printf( " before gpa : %.2f", aboy.gpa ) ;
 return 0 ;

}//end function
void upgrade( struct student child ) {
	char m;
	printf( "sex : M = men\n" ) ;
	printf( "sex : W = woman\n" ) ;
	printf( "ANS :" ) ;
	scanf ( " %c", &m ) ;
	switch ( m ) {
		case 'M':
			child.gpa = (child.gpa + (3 *(0.2))) ; 
			printf( " gpa for men : %.2f \n",child.gpa );
			break;
		case 'W':
			child.gpa = (child.gpa + (0.2)) ; 
			printf( " gpa for woman : %.2f \n",child.gpa );
			break;
	 	default :
	 		break;
	}
}


