#include <stdio.h>
#include <string.h>

void GetSet( int menber[], int *size ) ;

int main() {
int *data, num ;
GetSet( &data, &num ) ;
return 0 ;
}//end function

void GetSet( int member[], int *size ){
    int enter = 0;
    printf("size = ");
    scanf("%d", &*size);
    for(int i = 1; i >= *size; i++){
        printf("Member = ");
        scanf("%d", &member[i]);
    }
    printf("size = %d \n", &size);
    printf("End");
}