//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void test01() {
//	vector<int> v;
//
//	int num = 0;  //ͳ�ƿ��ٿռ����
//	int* p = NULL;
//
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//
//		if (p != &v[0]) {  //ÿ�ο����¿ռ�ʱ��ָ��ָ���ԭ�ռ��׵�ַ�������¿ռ��׵�ַ
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "v�������� " << num << " �οռ�" << endl;
//	num = 0;
//	p = NULL;
//
//	vector<int> v2;
//	v2.reserve(100000);
//	for (int i = 0; i < 100000; i++) {
//		v2.push_back(i);
//
//		if (p != &v2[0]) {  //ÿ�ο����¿ռ�ʱ��ָ��ָ���ԭ�ռ��׵�ַ�������¿ռ��׵�ַ
//			p = &v2[0];
//			num++;
//		}
//	}
//	cout << "v2�������� " << num << " �οռ�" << endl;
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}