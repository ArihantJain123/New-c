#include<stdio.h>
//new insert here we are here...new here hey there 

int main()
{
    int value[] = { 2,5,7,9,6};
    int *i,*j;

    i = &value[1];
    j = &value[5];
// print array here
    printf("sub of pointer = %d %d ",j-i, *j-*i);
     return 0;


}
