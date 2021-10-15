#include<stdio.h>
#include<string.h>

//自定义函数
//写一个函数找出数组中想要的数字的
int binary_search(int arr[],int k,int sz)
{
	//算法的实现
	int left = 0;
	int right = sz -1;

	while(left<=right)
	{
		int mid = (left + right)/2;		//中间元素的下标
		if(arr[mid]<k)
		{
			left = mid+1;
		}
		else if(arr[mid]>k)
		{
			right = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	//二分查找
	//如果找到了返回这个数的下标，不能找到返回-1
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if(ret == -1)
	{
		printf("找不到指定的数字下标");
	}
	else
	{
		printf("找到了，该数字的下标为：%d\n",ret);
	}

	return 0;
}


////写一个函数判断是否是闰年
//int is_leap_year(int n)
//{
//	if((n%4 == 0 && n%100 != 0) || (n%400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d",&year);
//	if(is_leap_year(year) == 1)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//
//	return 0;
//}



////写一个函数判断一个数是否是素数
////是素数返回1，不是返回0
//int is_prime(int n)
//{
//	int i = 0;
//	for(i = 2;i<n;i++)
//	{
//		if(n%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	if (is_prime(a) == 1)
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//
//	return 0;
//}


////
////形参 - 函数体内定义的变量；实参 - 函数外部定义的变量
////当实参传给形参时，形参其实是对实参的一份临时拷贝，并不会改变实参
////函数的形参和实参分别占用不同的内存块，对形参的修改不会影响实参
////
////交换两个整型常量的内容
////“void”代表没有返回值
//void Swp1(int x,int y)		//由于只能在函数体内交换内容，Swp1无法实现交换
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swp2(int* pa,int* pb)		//建立两个指针变量，用来接收地址
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a,b = 0;
//	scanf("%d%d",&a,&b);
//	printf("a = %d b = %d\n",a,b);
//	//调用Swp1函数：传值调用
//	//Swp1(a,b);		//由于内容只在函数体内部交换，所以Swp1函数无法实现
//	//调用Swp2函数：传址调用
//	Swp2(&a,&b);		//取a和b的地址，用地址进行交换
//	printf("a = %d b = %d\n",a,b);
//
//	return 0;
//}


////获取两个数的较大值
//int getMax(int x,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a,b,max = 0;
//	scanf("%d%d",&a,&b);
//	max = getMax(a,b);
//	printf("较大值：max = %d\n",max);
//
//	return 0;
//}


////库函数
//int main()
//{
//	char arr[] = "hello world!";
//	memset(arr,'*',5);
//	//memset - memory set - 内存设置
//	//memset(ptr,value,num);
//	//ptr - 需要替换的数组。value - 需要替换的内容。num - 需要替换的字符数。
//	printf("%s\n",arr);		//"***** world"
//
//	return 0;
//}



//int main()
//{
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string length - 字符串长度
//	char arr1[] = "hello!";
//	char arr2[20] = "#####";
//	strcpy(arr2,arr1);		//库函数，引用头文件string.h
//	//strcpy(destination,source);
//	//destination - 被指向的拷贝数组目的地。source - 要拷贝的源数组。
//	//strcpy会将末尾的结束符“\0”也拷贝过去
//	printf("%s\n",arr2);		//“%s”字符串，打印到“%0”时结束打印
//
//	return 0;
//}


////定义Add加法函数
//int Add(int x,int y)		//Add也需要定义int型
//{
//	int z = 0;		
//	z = x+y;
//	return z;		//最终值需要返回z
//}
//int main()
//{
//	int a,b = 0;
//	int sum = 0;
//	scanf("%d%d",&a,&b);
//	sum = Add(a,b);
//	printf("sum = %d\n",sum);
//
//	return 0;
//}