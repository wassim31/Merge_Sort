#include "main.h"
int main(void)
{
    int array[N] = {0,-5,-2,50,-50,-100,20,300};
    print(array,N);
    merge_sort(array,0,N-1);
    print(array,N);
    return 0;
}
int merge_sort(int *array, int start, int finish)
{

    if(finish > start)
    {
        int middle = start + (finish - start)/2;
        merge_sort(array,start,middle);
        merge_sort(array,middle+1,finish);
        merge(array,start,middle,finish);

    }
  

}
int merge(int *array, int start, int middle, int finish)
{
    int n1 = middle - start + 1;
    int n2 = finish - middle;
    int i,j,k;
    int *a1 = (int*)malloc(sizeof(int) * n1);
    int *a2 = (int*)malloc(sizeof(int) * n2);
    for(i = 0 ; i < n1 ; i++)
    {
        a1[i] = array[start + i];
    }
    for (j = 0; j < n2; j++)
    {
        a2[j] = array[middle + 1 + j];
    }

    i= 0;
    j = 0;
    k = start;
    while(i < n1 && j < n2)
    {
        if(a1[i] <= a2[j])
        {
            array[k] = a1[i];
            i++;
        }
        else
        {
            array[k] = a2[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        array[k] = a1[i];
        i++,k++;
    }
    while(j < n2)
    {
        array[k] = a2[j];
        j++,k++;
    }
    free(a1);
    free(a2);

}

void print(int *array, int size)
{
    for(int i = 0 ; i < size ; i++)
        printf("%d ", array[i]);
    printf("\n");
}