#include<stdio.h>
#include<string.h>

//�Զ��庯��
//дһ�������ҳ���������Ҫ�����ֵ�
int binary_search(int arr[],int k,int sz)
{
	//�㷨��ʵ��
	int left = 0;
	int right = sz -1;

	while(left<=right)
	{
		int mid = (left + right)/2;		//�м�Ԫ�ص��±�
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
	//���ֲ���
	//����ҵ��˷�����������±꣬�����ҵ�����-1
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if(ret == -1)
	{
		printf("�Ҳ���ָ���������±�");
	}
	else
	{
		printf("�ҵ��ˣ������ֵ��±�Ϊ��%d\n",ret);
	}

	return 0;
}


////дһ�������ж��Ƿ�������
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
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//
//	return 0;
//}



////дһ�������ж�һ�����Ƿ�������
////����������1�����Ƿ���0
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
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//
//	return 0;
//}


////
////�β� - �������ڶ���ı�����ʵ�� - �����ⲿ����ı���
////��ʵ�δ����β�ʱ���β���ʵ�Ƕ�ʵ�ε�һ����ʱ������������ı�ʵ��
////�������βκ�ʵ�ηֱ�ռ�ò�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
////
////�����������ͳ���������
////��void������û�з���ֵ
//void Swp1(int x,int y)		//����ֻ���ں������ڽ������ݣ�Swp1�޷�ʵ�ֽ���
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swp2(int* pa,int* pb)		//��������ָ��������������յ�ַ
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
//	//����Swp1��������ֵ����
//	//Swp1(a,b);		//��������ֻ�ں������ڲ�����������Swp1�����޷�ʵ��
//	//����Swp2��������ַ����
//	Swp2(&a,&b);		//ȡa��b�ĵ�ַ���õ�ַ���н���
//	printf("a = %d b = %d\n",a,b);
//
//	return 0;
//}


////��ȡ�������Ľϴ�ֵ
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
//	printf("�ϴ�ֵ��max = %d\n",max);
//
//	return 0;
//}


////�⺯��
//int main()
//{
//	char arr[] = "hello world!";
//	memset(arr,'*',5);
//	//memset - memory set - �ڴ�����
//	//memset(ptr,value,num);
//	//ptr - ��Ҫ�滻�����顣value - ��Ҫ�滻�����ݡ�num - ��Ҫ�滻���ַ�����
//	printf("%s\n",arr);		//"***** world"
//
//	return 0;
//}



//int main()
//{
//	//strcpy - string copy - �ַ�������
//	//strlen - string length - �ַ�������
//	char arr1[] = "hello!";
//	char arr2[20] = "#####";
//	strcpy(arr2,arr1);		//�⺯��������ͷ�ļ�string.h
//	//strcpy(destination,source);
//	//destination - ��ָ��Ŀ�������Ŀ�ĵء�source - Ҫ������Դ���顣
//	//strcpy�Ὣĩβ�Ľ�������\0��Ҳ������ȥ
//	printf("%s\n",arr2);		//��%s���ַ�������ӡ����%0��ʱ������ӡ
//
//	return 0;
//}


////����Add�ӷ�����
//int Add(int x,int y)		//AddҲ��Ҫ����int��
//{
//	int z = 0;		
//	z = x+y;
//	return z;		//����ֵ��Ҫ����z
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