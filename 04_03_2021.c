#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char string[50];
    fgets(string,sizeof(string),stdin);
    //Using strcpy()
    printf("COPYING STRINGS\n\n");
    char newString[50];
    strcpy(newString,string);
    fputs(newString,stdout);
    char copyString[50];
    int i=0;

    for(i=0;string[i]!='\0';i++)
        copyString[i] = string[i];
    string[i] = '\0';
    printf("\nThis is using loops: \n");
    fputs(copyString,stdout);

    //Using strcat()
    printf("\n\nConcatinating STRINGS\n\n");
    char a[] = "I love programming";
    char b[] = ", I am learning web development as well as DSA\n";
    strcat(a,b);
    fputs(a,stdout);

    printf("Without using strcat(): ");

    char catString[100];
    i=0;
    char x[100] = "I love programming";
    char y[100] = ", I am learning web";
    for(i=0;x[i]!='\0';i++);
    int j;
    for(j=0;y[j]!='\0';i++,j++)
    {
        x[i] = y[j];
    }
    x[i]='\0';
    for(i=0;x[i]!='\0';i++)
        printf("%c",x[i]);
    printf("\n\n");
    //Using strlen()
    printf("\n\nLength of STRINGS\n\n");
    
    char c[] = "This is to find length";
    int length = strlen(c);
    printf("\nWith strlen(): %d",length);

    i = 0;
    for(i=0;c[i]!='\0';i++);
    printf("\nLength of c without using strlen() is : %d\n",i);

    //Using strcmp()
    printf("\n\nCOMPARING STRINGS\n\n");
    char compare1[] = "This is to compare string";
    char compare2[] = "This is to compare string";
    int diff = strcmp(compare1,compare2);
    printf("\nValue of strcmp() is: %d",diff);

    i=0;
    int mydiff=0;
    while(compare1[i]!='\0' && compare2[i]!='\0')
    {
        if(compare1[i] != compare2[i])
            {
                mydiff = compare1[i] - compare2[i];
                break;
            }
        i++;
    }
    printf("\nValue of comparison without using strcmp() is : %d\n",mydiff);

    //Using strcmp() for different string
    mydiff =0;
    char compare3[] = "This is string 3";
    char compare4[] = "This is string 4";
    int diff1 = strcmp(compare3,compare4);
    printf("\nValue of strcmp() is: %d\n",diff1);
    i=0;
    while(compare3[i]!='\n' && compare4[i]!='\n')
    {
        if(compare3[i] != compare4[i])
            {
                mydiff = compare3[i] - compare4[i];
                break;
            }
        i++;
    }
    printf("\nValue of comparision without using strcmp() is : %d",mydiff);
    return 0;
}