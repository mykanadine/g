//Bubble sort

#include <stdio.h>
#include<stdbool.h>
void bubblesort(int a[], int length);

int main()
{
	int a[] = {3,2,5,1,23,0,7,9,10,6};
	int length = 10;
	bubblesort(a,length);


for (int i = 0; i<length; i++){
	printf("a[%d] = %d\n",i, a[i]);
}
}

void bubblesort(int a[], int length){
	bool swapped = false;
	do
		{swapped = false;
		for(int i = 0; i<length;i++){
		for(int j = 0; j<(length -1-i ); j++){
			if(a[j]<a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] =  temp;
				swapped = true;
				
			}
		}
	}
} while(swapped);
}
