#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	char a = 'H';
//	a = (a > 'A' && a <= 'Z') ? (a + 32) : a;//��ĸСд��ascii��ȴ�д�Ĵ�32
//	printf("%c\n", a);//��� h
//	return 0;
//}

//int main()
//{
//	int x = -1;
//	do
//	{
//		x = x * x;
//	} while (!x);
//	return 0;//ѭ��1��
//}

//int main()
//{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	float d = 0;
//	a = 160.;//�Ϸ�������
//	a = 0.12;//�Ϸ�������
//		//a = e3; //һ����ʽΪa e n ,aΪʮ��������nΪʮ��������
//	//b = 123;
//	//b = 2e4.2;
//	//b = .e5;
//	c = -.18;//�Ϸ�������
//	c = 123e4;//�Ϸ�������
//	c = 0.0;//�Ϸ�������
//	//d = -e3;
//	d = .234;//�Ϸ�������
//	d = 1e3;//�Ϸ�������

//������1.2 1.2e2 1e2 1.e2 .2e2
//}

//int main()
//{
//	int i, * p = &i;
//	//�ȼ���int i; int *p=&i;
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int x = 1;
//	while (a < 10)
//	{
//		x++;
//		a++;
//	}
//	printf("%d %d\n", a, x);
//	return 0;
//	//ѭ��9��
//}

//#define D 2
//int main()
//{
//	int x = 5;
//	float y = 3.14;
//	char z = 'D';
//	x++;
//	y++;
//	z++;
//	//D++;//�겻�ܱ��޸�
//	return 0;
//}

//int main()
//{
//	int a;
//	float b;
//	scanf("a=%d,b=%f", &a, &b);//����Ӧ��Ϊ a=25,b=2.5
//	return 0;
//}

//void test(void* data)
//{
//	unsigned int value = *((unsigned int*)data);//�Ⱥ��Ҳ����ʲô
//	printf("%u\n", value);
//}
//
//int main()
//{
//	unsigned int value = 10;
//	test(&value);
//	return 0;
//}

////���ַ������ȴ�С��������
//void f(char* p[], int n)
//{
//	char* t;
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (strlen(*(p + i)) > strlen(*(p + j)))
//			{
//				t = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = t;
//			}
//		}
//	}
//}
//int main()
//{
//	char* s[] = { "hello","the","world" };// ->��h�ĵ�ַ����t�ĵ�ַ����w�ĵ�ַ��
//	f(s, 3);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s\n",s[i] );
//	}
//	return 0;
//}

//int main()
//{
//	int sum, pad, pAd;
//	sum = pad = 5;
//	pAd = ++sum, pAd++, ++pad;
//	printf("%d\n", pad);//6
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	int x = 35;
//	a = b = c = 0;
//	if (!a)
//		x--;
//	else if (b)
//		;
//	if (c)
//		x = 3;
//	else
//		x = 4;
//	printf("%d\n", x);//4
//	return 0;
//}

//int main()
//{
//	char* p[] = { "shanghai","beijing","guangzhou"};
//	printf("%c\n", *p[1] + 3);//��b'+3=�ַ�e
//	printf("%c\n", *(p[1] + 3));//j
//	return 0;
//}

//int mian()
//{
//	int m = 7, n = 4;
//	float a = 38.4, b = 6.4, x;
//	x = m / 2 + n * a / b + 1 / 2;
//	printf("%f\n", x);//27.000000
//	return 0;
//}


