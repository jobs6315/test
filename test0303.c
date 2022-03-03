#include <stdio.h>
#include<string.h>
/*int main()
{
	for (;;)
	{
		printf("hehe\n");
	}
	return 0;
}*/
/*int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		
		for (; j < 10; j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}*/
/*int x, y;
for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
{
	printf("hehe\n");
	
}
return 0;*/
/*int mian()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k ==0; i++, k++)
		k++;
	return 0;
}*/
/*int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} 
	while (i <= 10);
	return 0;
}*/
/*int main()
{
	int i,n;
	 float sum = 1;
	scanf_s("%d",&n);
	for (i = 1; i <= n; i++)
		sum = sum * i;
	printf("%d!=%lf", n, sum);
	printf("\n");
	return 0;
}*/
/*int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n= 1; n <= 3; n++)
	{
		
			ret = ret *n;
		
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}*/
/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 11;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标是：%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("找不到\n");
	return 0;
}*/
/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{

		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}*/
/*int mian()
{
	    char arr1[] = "welcome to bit!!!!!!";
		char arr2[] = "####################";
		int left = 0;
		int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
		//int right = strlen(arr1)-1;
		while (left <= right)
		{
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", arr2);
			left++;
			right--;
		}
		return 0;
}*/
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
			scanf_s("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	return 0;
}
