/*
Decision-making & Branching
1) IF-ELSE
2) LOOP
3) SWITCH
*/
//Largest of Three Numbers
// #include<stdio.h>
// int main()
// {
//     int a=10,b=20,c=30, largest;
//     largest = a;
//     if(b>largest)
//         largest = b;
//     if(c>largest)
//         largest = c;
//     printf("%d is Greater!",largest);
// }
///////////////////////////////////////////////////////////
//a) Branching Problem
//The election Commision
// #include<stdio.h>
// int main()
// {
//     int age;
//     scanf("%d",&age);
//     if(age>=16 && age<18)
//     {
//         printf("Eligible");
//     }
//     else{
//         printf("Not eligible");
//     }
// }
//////////////////////////////////////////////////////////
//b) Apoorva super market
// #include<stdio.h>
// int main()
// {
//     int quantity[50], price[50];
//     int n;
//     float expense=0;

//     float offer = 20;
//     int i;
//     printf("Enter number of items: \n");
//     scanf("%d",&n);

//     for(i=0;i<n;i++)
//     {
//         printf("Enter Quantity for item: %d \n",i+1);
//         scanf("%d",&quantity[i]);
//         printf("\nEnter price for item: %d\n",i+1);
//         scanf("%d",&price[i]);

//         expense += quantity[i]*price[i];
//     }
//     printf("\n");
//     printf("Total expense before discout: - %.2f\n",expense);
//     if(expense>5000)
//     {
//         expense = expense -expense*offer;
//     }
//     printf("Final Expense after discout: %.2f",expense);


// }
///////////////////////////////////////////////////////
//Looping/Branching
//Regional Meteorological Centre
// #include<stdio.h>
// int main()
// {
//     int num;
//     int numHot,numPle, numCold;
//     int values[50];

//     scanf("%d",&num);
//     int i;
    
//     for(i = 0;i<num;i++)
//     {
//         scanf("%d",&values[i]);
                 
//     }
//     for(i=0;i<num;i++)
//     {
//         if(values[i]>=85)
//         {
//             numHot++;
//         }
//         else if(values[i]>=60 && values[i]<=84)
//         {
//             numPle++;
//         }
//         else{
//             numCold++;
//         } 
//     }
//     printf("Number of Hot places= %d\n",numHot);
//     printf("Number of Pleasant places= %d\n",numPle);
//     printf("Number of Cold places= %d\n",numCold);
    

// }
///////////////////////////////////////////////////////////
//B) Our institution has decided
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int initial = 120;
    int i;
    int sum = 0;
    for(i=0;i<n;i++)
    {
        sum += initial;
        initial+= 60;
    }
    printf("Total Number of students: %d",sum);
}