#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    int s;

    printf("Enter the length of string: ");
    scanf("%d", &s);

    char *ptr;
    ptr=(char*)malloc(s+1 * sizeof(char));

    if(ptr==NULL){
        printf("NO avaible space for your string\n ");
        return 1;
    }

    getchar();

    printf("Enter your String here: ");
    fgets(ptr,s+1,stdin);

    printf("Entered string is: %s\n", ptr);
    printf("lenght of the string is: %lu\n" ,strlen(ptr));
      
    free(ptr);
    return 0;

    
}