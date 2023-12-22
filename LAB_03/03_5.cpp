#include <stdio.h>

struct student {
    char name[20];
};

struct student (*GetStudent(int *room))[10];

int main() {
    struct student (*children)[10];
    int group;
    children = GetStudent( &group );

    for (int i = 0; i < group; i++) {
        printf("room [%d]\n", i + 1) ;
        for (int j = 0; j < 10; j++) {
            printf("student[%d] = %s\n", j + 1, children[i][j].name) ;
        }
    }

    return 0 ;
}

struct student (*GetStudent(int *room))[10] {
    printf("How many rooms: ");
    scanf("%d", room);

    struct student (*student)[10] = new struct student[*room][10];

    for (int i = 0; i < *room; i++) {
        printf("room [%d]\n", i + 1) ;
        for (int j = 0; j < 10; j++) {
            printf(" student[%d]: ", j + 1) ;
            scanf("%s", student[i][j].name);
        }
    }

    return student ;
}