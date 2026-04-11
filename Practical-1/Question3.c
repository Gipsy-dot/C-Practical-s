#include <stdio.h>
#include <stdlib.h>

struct customer{
    int ACno;
    char Name[50];
    char ACtype[30];
    float balance;
};
 
int main(){
    int n;

    printf("Enter the no. of customer: ");
    scanf("%d",&n);

    struct customer *ptr;
    ptr= (struct customer*)malloc(n * sizeof(struct customer));

    if(ptr==NULL){
        printf("NO valid space avaible\n");
        return 1;
    }
    for(int i=0; i<n; i++){
        printf("\n--------Customer no. %d-----------\n", i+1);

        printf("Enter Account no.:");
        scanf("%d", &ptr[i].ACno);

        printf("Enter your name here: ");
        scanf("%s",ptr[i].Name);

        printf("Enter Account type: ");
        scanf("%s", ptr[i].ACtype);

        printf("Enter your balance here: ");
        scanf("%f", &ptr[i].balance);
    }
    printf("\n--------All customer records--------\n");
    for(int i=0; i<n ;i++){
        printf("\nAccount no. %d", ptr[i].ACno);
        printf("\nName %s",ptr[i].Name);
        printf("\nAccount type %s", ptr[i].ACtype);
        printf("\nAccount Balance %.2f\n", ptr[i].balance);
    }
    printf("\n---------Customer with below 5000 balance--------\n");
    for(int i=0 ; i<n ; i++){
        if(ptr[i].balance < 5000){
            printf("Account no. : %d\n", ptr[i].ACno);
            printf("Name : %s\n" ,ptr[i].Name);
            printf("Balance : %.2f\n" ,ptr[i].balance);
        }
    }
    free(ptr);
    return 0;
}
