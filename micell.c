#include<stdio.h>
int main()
{
    unsigned int age;
    float salary,sal, employee,employer;
    scanf("%f",&salary);
    scanf("%d",&age);

    if(salary>=2000)
    {
        sal = 20000;
    }
    else{
        sal = salary;
    }
    
    if(age<=55)
    {
        employee = (float)sal*0.20;
        employer = (float)sal*0.17;
    }
    else if(age>55 && age <=60)
    {
        employee = (float)sal*0.13;
        employer = (float)sal*0.13;
    }
    else if(age>60 && age <=65)
    {
        employee = (float)sal*0.075;
        employer = (float)sal*0.09;
    }
    else
    {
        employee = (float)sal*0.05;
        employer = (float)sal*0.075;
    }
    printf("%.0f",12*(employee+employer));
}
