#include <stdio.h>
#include <stdlib.h>

struct patient{
    int Patientid;
    char name[50];
    int age;
    char Disease[40];
    int fee;
};
int main(){
    int n,r;

    printf("Enter no. of Patient here: ");
    scanf("%d", &n);

    struct patient *ptr;
    ptr = (struct patient*)malloc(n * sizeof(struct patient));

    if(ptr==NULL){
        printf("Invalid space in memory\n");
        return 1;
    }
    for(int i =0; i<n ;i++){
        printf("\n-------||Patient no. %d||-----\n", i+1);
        printf("Enter Patient ID: ");
        scanf("%d", &ptr[i].Patientid);
        printf("Enter Patient name here: ");
        scanf("%s", ptr[i].name);
        printf("Enter Patient Age: ");
        scanf("%d", &ptr[i].age);
        printf("Which disease: ");
        scanf("%s", ptr[i].Disease);
        printf("Enter fee: ");
        scanf("%d", &ptr[i].fee);
    }
    printf("\n--------||Records of all Patient||------\n ");
    for(int i=0 ; i<n ; i++){
        printf("\n----Patient no. || %d ||------", i+1);
        printf("\nPatient ID: %d", ptr[i].Patientid);
        printf("\nPatient Name: %s", ptr[i].name);
        printf("\nPatient Age: %d", ptr[i].age);
        printf("\nPatient Disease: %s", ptr[i].Disease);
        printf("\nPatient Fee: %d\n", ptr[i].fee);
    }
    printf("\n-----||Search Patient||-----\n");
    printf("Enter Patient ID here: ");
    scanf("%d", &r);
    for(int i =0; i< n; i++){
        if(r==ptr[i].Patientid){
            printf("-----||Patient found||-----\n");
            printf("Patient id: %d\n", ptr[i].Patientid);
            printf("Patient name: %s\n", ptr[i].name);
            printf("Patient age: %d\n", ptr[i].age);
            printf("Patient disease: %s\n", ptr[i].Disease);
        }
    } 

    free(ptr);
    return 0;
}