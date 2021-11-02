#include<stdio.h>
#include"../include/2d_array.h"
double *sgs_clib_2d_double_array(double arr[3][3])
{
 
    printf("Enter the elements of the array - ");
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
    {
        scanf("%lf",&arr[i][j]);
    }
    }
    return arr;
}
