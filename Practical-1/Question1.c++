#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    printf("Enter the interger here: ");
    scanf("%d", &n);

    int *no;
    no = (int*)malloc(n * sizeof(int));

    if(no==NULL){
        printf("No Memory sapce\n");
        return 1;
    }
    printf("Enter %d integer: \n",n );
    for(int i=0 ; i<n ; i++){
        scanf("%d", &no[i]);
    }

    printf("Integer's are :\n ");
    for(int i=0; i<n ; i++){
        printf("%d ", no[i]);
    }

    int max = no[0];
    for(int i=1 ; i<n ; i++)
    {
        if (no[i]>max){
            max=no[i];
        }
    }
    printf("\nThe largest integer is: %d\n" , max);

    free(no);

    return 0;
}
