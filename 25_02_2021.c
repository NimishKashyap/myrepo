
// Operators
// 1) Arithmetic
// 2) LOGICAL (&& ||)
// 3) RELATIONAL (<= >= == < >)
// 4) sizeof()
// 5) Conditional  (? :)
// 6) Precedence 
// 7) Assignment =

// int main()
// {
//     int a=4,b=6,c=3,d,e,f,g;
//     d=-a+b*c;
//     e=(a+b)*c;
//     f=a*b/c;
//     g=a*(b/c);

//     printf("a=%d b=%d c=%d\n\n",a,b,c);
//     printf("-%d+%d*%d=%d\n",a,b,c,d);
//     printf("(%d+%d)*%d = %d\n",a,b,c,e);
//     printf("%d*%d/%d = %d\n",a,b,c,f);
//     printf("%d*(%d/%d)=%d\n",a,b,c,g);

//     return 0;

// }

// int main()
// {
//     int a = 2,b=35;
//     printf("%d",a^b);
// }
/////////////////////////////////////////////////////////
//EXERCISE PROBLEMS

//1 A general Service company....
// #include<stdio.h>
// int main()
// {
//     int ratePerHour = 45;
//     int hoursWork,materialCost;
//     scanf("%d",&hoursWork);
//     scanf("%d",&materialCost);
//     int labourCost = ratePerHour*hoursWork;
//     int totalCost = labourCost+materialCost;

//     printf("Labour Cost: - %d\n",labourCost);
//     printf("Total Cost:- %d",totalCost);

//     return 0;

// }
/////////////////////////////////////////////////////
//2) MR BENNET
// #include<stdio.h>
// int main()
// {
//     float length, breadth, height, costPerSq;
//     scanf("%f%f%f%f",&length,&breadth,&height,&costPerSq);
//     //Considering height and breadth is used for painting
//     float totalPaintingSq = height*breadth;

//     float totalCost = totalPaintingSq*costPerSq*2;
//     printf("%.2f",totalCost);

//     return 0;
// }
//////////////////////////////////////////////////////
//3)A Farm Produces...
// #include<stdio.h>
// int main()
// {
//     int details[4];
//     float prices[4];
//     int i;
//     for(i=0;i<4;i++)
//     {
//         scanf("%d%f",&details[i],&prices[i]);
//     }
//     printf("Details: \n");
//     for( i = 0; i < 4; i++)
//     {
//         printf("%d Price:- %.2f\n",details[i],prices[i]);
//     }
//     return 0;
// }
////////////////////////////////////////////////
//
#include<stdio.h>
int main()
{
    float basicPay, da, hra,pf;
    scanf("%f",&basicPay);
    scanf("%f",&da);
    scanf("%f",&hra);
    scanf("%f",&pf);

    float grossPay = basicPay + basicPay*da/100 + basicPay*hra/100 - basicPay*pf/100;
    printf("Basic Pay: %.2f",grossPay);

    return 0;

}


///////////////////////////////////////////////
// #include<stdio.h>
// int main()
// {
//     int a=60,b=13;
//     printf("%d\n",a^b);
//     printf("%d\n",a&b);
//     printf("%d\n",a|b);
//     printf("%d\n",a<<2);
//     printf("%d\n",a>>2);
//     printf("%d\n",~a);
//     printf("%d\n",~b);

//     return 0;
// }