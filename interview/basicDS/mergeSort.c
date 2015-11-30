#include <stdio.h>

void merge(int a[], int start, int middle, int end)
{
	int temp[end - start + 1];
	int p = start;
    int q = middle + 1;
	int k = 0;
	for(int i= start; i <= end; i++)
	{
		if(p > middle)
		{
			temp[k++]= a[q++];
		}
		else if(q > end)
		{
			temp[k++] =a[p++];
		}
		else if(a[p] < a[q])
		{
			temp[k++] = a[p++];
		}
		else
		{
			temp[k++]= a[q++];
		}
	}
	for(p=0; p <k; p++)
	{
		a[start++] =temp[p];
	}
}

int * mergeSort(int a[], int start, int end)
{
	if(start < end)
	{
		int mid = (end +start) / 2;
		
		mergeSort(a, start, mid);
		mergeSort(a, mid+1, end);
		
		merge(a, start, mid, end);
	}
	return a;
}

// +
// =
int main(void) {
	int a[] = {3, 5, 1, 2, 4};
	int *b = mergeSort(a, 0, 4);
	for(int p=0; p < 5; p++)
	{
		printf("%d ", b[p]);
	}
	
	return 0;
}
