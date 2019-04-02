#include "iostream"
#include <string>
#include <fstream>
#include "stdio.h"
#include "func_test.h"
#include<cstdlib>
#include <time.h>
#include <vector>
using namespace std;

extern int abit = 12;


//int main()
//{

//	int a[100];
//	srand(time(NULL));
//	a= rand() ;

	//divt(1, 1000,34);
	//vector<int>  squares = { 0,1,2,3 };
	//string str = "sglgjk";
	//int ang = 'djsd';
	//const int test_1 = 456;
	//int test_2 = test_1;
	//const int &test_3 = test_1;

	/*string word;
	vector <unsigned> score(11,0);
	unsigned grade;
	while (cin >> grade)
	{
		if (grade <100)
			++score[grade / 10];
		for (int i = 0; i < 11; i++)
			cout << score[i]<<"niakj"<<endl;
	}*/

	//int a = 10;
	//a = a++;
	//cout << a;
	//cout << shuju(1, 2)<< endl;
	//getchar();

	/*class Mose;
	class Dose
	{
		Mose * ptr1;
	};
	class Mose
	{
	public:
		int a1  ;
		Dose dose1;
	};*/

	//cout << "hello,world!" << ends;
	//cout << "hello,world!" << flush;
	//cout << "hello,world!" << endl;
	//os << "hello";
//	cout << unitbuf;
//	cout << nounitbuf;
//	ofstream wfile1;
//	wfile1.open("data.txt");
//	wfile1 << "12346789" << endl;
//	wfile1.close();
//	//cout << "Enter your name: ";
//	
//	ifstream rfile1;
//	rfile1.open("data.txt");
//	char temp[100];
//	for (int i = 0; i < 15; i++)
//	{
//		rfile1 >> temp;
//		cout << temp;
//	}
//	return -1;
//}

int main(int argc, char **argv)
{
	//string str;
	//for (int i = 0; i != argc; ++i)
	//	str += argv[i];
	////char *b = (char*)str.c_str();
	//cout << str << endl;
	//system("pause");
	//return 0;
	vector<int> a{ 3,5,-5,3,-1,4,9,-5,- 4, 5,3,-2,4,-5,8,5,2,4,2,-9,3,5,3,2,-5};
	cout << submax(a, 0, int(a.size() - 1))<<endl;
	system("pause");
}

