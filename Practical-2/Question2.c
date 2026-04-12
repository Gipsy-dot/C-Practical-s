#include <stdio.h>
#include <stdlib.h>


struct Enrollment {
    int enrollID;
    char studentName[50];
    char courseName[50];
    int duration;
};

int main() {
    int n, choice, searchID;
    int total = 0;

    printf("Enter how many enroll no. want: ");
    scanf("%d", &n);

    struct Enrollment *ptr;
    ptr = (struct Enrollment*) malloc(n * sizeof(struct Enrollment));

    if (ptr == NULL) {
        printf("No memory space!\n");
        return 1;
    }

    total = n;

   
    for (int i = 0; i < n; i++) {
        printf("\nEnrollment %d\n", i + 1);
        printf("Enter Enrollment ID: ");
        scanf("%d", &ptr[i].enrollID);

        printf("Enter Student Name: ");
        scanf("%s", ptr[i].studentName);

        printf("Enter Course Name: ");
        scanf("%s", ptr[i].courseName);

        printf("Enter Duration: ");
        scanf("%d", &ptr[i].duration);
    }

    printf("\nDo you want to add more enrollments? (1 = Yes / 0 = No): ");
    scanf("%d", &choice);

    if (choice == 1) {
        int extra;
        printf("How many more enrollments to add? ");
        scanf("%d", &extra);

        ptr = (struct Enrollment*) realloc(ptr, (total + extra) * sizeof(struct Enrollment));

        if (ptr == NULL) {
            printf("Reallocation failed!\n");
            return 1;
        }

        for (int i = total; i < total + extra; i++) {
            printf("\nEnrollment %d\n", i + 1);
            printf("Enter Enrollment ID: ");
            scanf("%d", &ptr[i].enrollID);

            printf("Enter Student Name: ");
            scanf("%s", ptr[i].studentName);

            printf("Enter Course Name: ");
            scanf("%s", ptr[i].courseName);

            printf("Enter Duration: ");
            scanf("%d", &ptr[i].duration);
        }
        total += extra;
    }

    printf("\n===== All Enrollment Records =====\n");
    for (int i = 0; i < total; i++) {
        printf("\nEnrollment ID: %d", ptr[i].enrollID);
        printf("\nStudent Name: %s", ptr[i].studentName);
        printf("\nCourse Name: %s", ptr[i].courseName);
        printf("\nDuration: %d \n", ptr[i].duration);
    }

    printf("\nEnter Enrollment ID to search: ");
    scanf("%d", &searchID);

    for (int i = 0; i < total; i++) {
        if (ptr[i].enrollID == searchID) {
            printf("\nRecord Found!");
            printf("\nStudent Name: %s", ptr[i].studentName);
            printf("\nCourse Name: %s", ptr[i].courseName);
            printf("\nDuration: %d\n", ptr[i].duration);
        }
    }
    free(ptr);

    return 0;
}
