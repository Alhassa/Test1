//

#include <stdio.h>

void func(void *pttr ,int i)
{
//	int z;
	int arr[i];
//	for(z=0;z<i;z++)
//	{
//		printf("\n enter no %d =",z);
//		scanf("%d",&arr[z]);
//	}


//	for(z=0;z<i;z++)
//		{
	//		printf("\n th2 no %d =",z);
			//scanf("%d",&arr[z]);
//		}
	//arr[0]=8;
	//printf("%d \n",arr[0]);
	printf("%d \n",sizeof(arr));

//if(i==1) {
	//(double*)pttr;
//	pttr=&z;
//	printf("%d \n",pttr++);
//}
	//z=sizeof(pttr);
//	printf("%d \n",sizeof(pttr));
}

int main(void)
{
	int u;
//printf("hello world");
//	return 0;
void *pttr;
scanf("%d",&u);
printf("%d \n",u);
func(pttr,u);
//	 int x=15;
//	 int* ptr;
//	ptr=&x;
//	*ptr=10;
// 	printf("%d \n",*ptr);

//	printf ("%d",*((int*) 01));
return 0;
}
