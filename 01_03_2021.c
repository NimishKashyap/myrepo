/*
Need of experienceay
int <experienceay_name>[SIZE];
*/
//Sample Program
//To find and average of values in 1D experienceay
// #include<stdio.h>
// int main()
// {
//     int a[10],n,i;
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//         scanf("%d",&a[i]);
//     for(i=0;i<n;i++)
//         printf("%d ",a[i]);
    
//     return 0;
// }
//FINDING MINIMUM AND MAXIMUM IN A LIST
// #include<stdio.h>
// int main()
// {
//     int a[10],i,n,min, max;
//     scanf("%d",&n);
//     for(i= 0;i<n;i++)
//         scanf("%d",&a[i]);
//     min = a[0];
//     max = a[0];
//     for(i=1;i<n;i++)
//     {
//         if(a[i]>max)
//             max = a[i];
//         if(a[i]<min)
//             min = a[i];
//     }
//     printf("MAX: - %d and MIN: - %d",max,min);

//     return 0;
// }
//Linear search
//2D experienceay
////////////////////////////////////////////////////////////
//a) Team of experts 
// #include<stdio.h>

// int main()
// {
//     int arr[50],i,j;
//     int topArr[10], later[40];
//     for(i=0;i<50;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<50-1;i++)
//     {
//         for(j=0;j<50-i-1;j++)
//         {
//             if(arr[j]<arr[j+1])
//             {
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     printf("\n");
//     for(i=0;i<50;i++)
//     {
//         if(i<10)
//             topArr[i] = arr[i];
//         else    
//             later[i-10] = arr[i];
//     }
//     printf("Top universities are: ");
//     for(i=0;i<10;i++)
//     {
//         printf("%d ",topArr[i]);
//     }
//     printf("\n");
//     printf("Remaining Universities are: ");
//     for(i=0;i<40;i++)
//     {
//         printf("%d ",later[i]);
//     }
// }
// There are n employees
// #include<stdio.h>

// int main()
// {
//     int i,j,n;
//     scanf("%d",&n);
//     int experience[50];
//     for(i=0;i<n;i++)
//         scanf("%d",&experience[i]);
//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-i-1;j++)
//         {
//             if(experience[j]>experience[j+1])
//             {
//                 int temp = experience[j+1];
//                 experience[j+1] = experience[j];
//                 experience[j] = temp;
//             }
//         }
//     }
//     for(i=0;i<n;i++)
//         printf("%d ",experience[i]);
//     return 0;
// }

/////////////////////////////////////////////////////////
//d) A resturant
#include<stdio.h>

int main()
{
    int serve[2][3];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&serve[i][j]);
        }
    }
    printf("In 2D array form: \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",serve[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for(i=0;i<2;i++)
        sum += serve[i][0];
    printf("Men served by Resturant: %d\n",sum);
    sum = 0;
    for(i=0;i<2;i++)
        sum += serve[i][2];
    printf("Women served by Resturant: %d\n",sum);
    sum = 0;
    for(i=0;i<2;i++)
        sum += serve[i][3];
    printf("Children served by Resturant: %d",sum);

    return 0;
}