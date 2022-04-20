#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100

/*
    Function: alphabeticsort
    ****************
    It does

    n: it's showing how many will go

    MAX_LEN: it is saying the maximum lenght of is giving array

    arr: it is doing alphabetic sort with simgle sorting system and using strcpy function

    returns: it doesnt return

*/
void alphabeticSort(char arr[][MAX_LEN],int n);
/*
    Function: generateTagParser
    ****************
    It does

    temp: it is finding the length of string

    arr: it is printing the array

    returns: it doesnt return

*/
void generateTagParser(char temp[],char arr[]);

int main(){
    int selection = 999;
    
    while(selection == 999 || selection == 1 || selection == 2){
    printf("Enter for menu:\n1 for menu1\n2 for menu2\n"); //menu process
    scanf("%d",&selection); 
        if(selection == 1){
            int i,j,n;
            char my_string[100][MAX_LEN];
            printf("Enter the count of how many strings you will enter....\n"); //to ask how many count
            scanf("%d",&n);
            printf("Enter the strings:\n");
                for(i=0;i<n;i++){
                scanf("%s",my_string[i]);
            }
            alphabeticSort(my_string,n);
        }
        else if(selection == 2){
            //part 2
            char arr[100],temp[100];
            printf("Enter a string\n"); 
            scanf("%s",arr);
            strcpy(temp,arr);
            generateTagParser(temp,arr);
        }
        else{
            printf("exited the program:");
        }
        
    }
    return 0;
}

void alphabeticSort(char arr[][MAX_LEN],int n){
    int i,j;
    char temp_sort[100];
    printf("Given arrayy is\n"); //first to show array
      for(i=0;i<n;i++){
        printf("%d: %s\n",i,arr[i]);
      }
    for(i=0;i<n;i++){ //to make sorting
         for(j=i+1;j<n;j++){
            if(strcmp(arr[i],arr[j])>0){strcpy(temp_sort,arr[i]);strcpy(arr[i],arr[j]);strcpy(arr[j],temp_sort);} //i use strcpy function to easily do the sorting process
        } 
    }
    printf("Sorted arrayis\n"); //to show last results
    for(i=0;i<n;i++){
           printf("%d: %s\n",i,arr[i]);
    }
}

void generateTagParser(char temp[],char arr[]){
    int karakterSayisi = 0;
    int i = 0;
    int j = 0;
    while(arr[i]!='\0'){ //to find the length of string
        karakterSayisi++;
        temp[j+2]=arr[i];
        i++;
        j++;
    }
    i=0,j=0;
    if(karakterSayisi>=5 && karakterSayisi<=10){
        while(arr[i]!='\0'){ //to find the length of string
        temp[j+1]=arr[i];
        i++;
        j++;
    }
}

    if(karakterSayisi<5){ //to find out if lenght of string less than 5
        temp[0] = '<';
        temp[1] = '<';
        temp[karakterSayisi+2] = '>';
        temp[karakterSayisi+3] = '>';
        printf("%s\n",temp);
    }
    else if(karakterSayisi>=5 && karakterSayisi<=10){ //to find out if lenght of string is higher than 5 and less than 10
        temp[0] = '*';
        temp[karakterSayisi+1] = '*';
        printf("%s\n",temp);
      
    }
    else{ //to find out if lenght of string higher than 10
        temp[0] = '/';
        temp[1] = '+';
        temp[karakterSayisi+2] = '+';
        temp[karakterSayisi+3] = '/';
        printf("%s\n",temp);
        
    }

}