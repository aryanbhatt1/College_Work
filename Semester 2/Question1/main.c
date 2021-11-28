#include <stdio.h>
#include <stdlib.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
for(int i=0; i<e; i++)
    {
        fprintf(File,"%d",arr[i]);
    }
}n

int main()
{
    int array1[100], array2[100],num,e;
    FILE *File1,*File2,*File3;
    File1=fopen("C:\\Users\\Aryan\\Desktop\\Array1.txt","w");
    File2=fopen("C:\\Users\\Aryan\\Desktop\\Array2.txt","w");
    File3=fopen("C:\\Users\\Aryan\\Desktop\\Array3.txt","w");
    printf("Writing array in File 1");

    printf("Enter number of Elements :");
    scanf("%d",&e);
    for(int i=0; i<e; i++)
    {
        printf("Enter num: ");
        scanf("%d",&num);
        fprintf(File1,"%d",num);
    }
    for (int i=0;i<e;i++)
    {
        fscanf(File1,"%d", &array1[i]);
    }
    selectionSort(array1,e);
    fclose(File1);
    return 0;
}