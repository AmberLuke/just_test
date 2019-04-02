#include "func_test.h"
#include "stdio.h"
#include"iostream"
#include <vector>

using namespace std;

void exchange(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

void order_test1(int a[10])
{
	int i = 0;
	int j = 9;

	while (i < j)
	{
		if (a[i] <= 6 && a[j] > 6)
		{
			j--;
			if (i == j)
			{
				exchange(a[0], a[i]);
				break;
			}
			i++;
		}
		else if (a[i] <= 6 && a[j] <= 6)
			i++;
		else if (a[i] > 6 && a[j] > 6)
			j--;
		else if (a[i] > 6 && a[j] <= 6)
		{
			exchange(a[i], a[j]);
			j--;
			if (i == j)
			{
				exchange(a[0], a[i]);
				break;
			}
			i++;
		}
		if (i == j)
		{
			exchange(a[0], a[i]);
			break;
		}
	}


}


void divt(int a, int b, int num)
{
	int static counter = 0;

	if ((a + b) / 2 > num)
	{
		counter++;
		divt(a, (a + b) / 2, num);
	}
	else if ((a + b) / 2 < num)
	{
		counter++;
		divt((a + b) / 2, b, num);
	}
	else if ((a + b) / 2 == num)
	{
		counter++;
		std::cout << "需要计算的次数为：" << counter << std::endl;
		getchar();
	}
}

int shuju(double a, double b )
{
	return 0;
}

int shuju(int a, int b)
{
	return 1;
}

int fact(int a)
{
	static int  b = 1;
	if (a == 1)
	{
		return 1;
	}
	else
	{
		b = a * fact(a - 1);
		return b;
	}
}

int max2(int a, int b)
{
	return (a > b ? a : b);
}

int max3(int a, int b, int c)
{
	return (max2(a,b) > c ? max2(a, b) : c);
}

//找出最大相连子序列的递归算法
//找出生成[left,right]的子数组中的最大和
//不试图保留具体的最佳序列
int submax(const vector<int> &a, int left, int right)
{
	if (left == right)
		if (a[left] > 0)
		{
			return a[left];
		}
		else
			return 0;

	int center = (left + right) / 2;
	int leftsubmax = submax(a, left, center);
	int rightsubmax = submax(a, center+1, right);

	int maxleftsub = 0, leftsub = 0;
	//1.//auto ptr = a.begin();
	for (int i = center+1; i <= right; ++i)
	{
		//1.//leftsub += (*ptr++);
		leftsub += a[i];
		maxleftsub = max2(leftsub, maxleftsub);
	}
		
	int maxrightsub = 0, rightsub = 0;
	//1.//auto ptr = a.begin();
	for (int i = center; i >= left; --i)
	{
		//1.//leftsub += (*ptr++);
		rightsub += a[i];
		maxrightsub = max2(rightsub, maxrightsub);
	}

	return max3(leftsubmax, rightsubmax, maxleftsub + maxrightsub);


}