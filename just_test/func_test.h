#ifndef FUNC_TEST_H
#define FUNC_TEST_H
#include <vector>
using namespace std;

void exchange(int &a, int &b);
void order_test1(int a[10]);
void divt(int a, int b, int num);
int shuju(double a, double b = 1.2);
int shuju(int a, int b);
int fact(int a);
int submax(const vector<int> &a, int left, int right);
int max2(int a, int b);
int max3(int a, int b,int c);
#endif