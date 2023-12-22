#include <stdio.h>

struct student (*GetStudent( int*room ) )[ 10 ] ;

struct student{
  char name[50];
};

int main() {
struct student ( *children )[ 10 ] ;
int group ;
children = GetStudent( &group ) ;
return 0 ;
}//end function

struct student (*GetStudent( int *room ) )[ 10 ] {
	char *numberstudent[10];
    printf("room = ");
    scanf("%d",room);

    for(int j = 1; j < *room; j++){
        printf("Enter student in room[%d]\n", j  );
        for(int i = 1; i <  10; i++){
            printf("Student[%d] =", i  );
            scanf("%s", numberstudent[i] );
        }
    }
}