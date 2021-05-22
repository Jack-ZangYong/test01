//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void test01() {
//	vector<int> v;
//
//	int num = 0;  //统计开辟空间次数
//	int* p = NULL;
//
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//
//		if (p != &v[0]) {  //每次开辟新空间时，指针指向的原空间首地址不等于新空间首地址
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "v共开辟了 " << num << " 次空间" << endl;
//	num = 0;
//	p = NULL;
//
//	vector<int> v2;
//	v2.reserve(100000);
//	for (int i = 0; i < 100000; i++) {
//		v2.push_back(i);
//
//		if (p != &v2[0]) {  //每次开辟新空间时，指针指向的原空间首地址不等于新空间首地址
//			p = &v2[0];
//			num++;
//		}
//	}
//	cout << "v2共开辟了 " << num << " 次空间" << endl;
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}