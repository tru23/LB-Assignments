#include <stdio.h>
#include <stdlib.h>

void Index(int Arr[], int iLength, int no)
{
    int i=0;
    int FirstIndex=-1;
   
    for(i=iLength;i>0;i--)
    {
        if(Arr[i]==no)
        {
            FirstIndex=i;
            
        }
       
    }
    if(FirstIndex!=-1)
    {
        printf("First occurance index %d\n",FirstIndex);
    }

    else{
        printf("Number not found\n");
    }

    
}
int main()
{
    int iSize = 0;
  
    int iCnt = 0;
    int *p = NULL;
    int iValue=0;

    printf("enetr the number of elements ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter element=");
        scanf("%d", &p[iCnt]);
    }
    printf("enter the element to find First occurance ");
    scanf("%d",&iValue);
    Index (p, iSize,iValue);
    
    
    free(p);

    return 0;
}