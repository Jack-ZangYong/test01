//#include <iostream>
//#include <vector>
//#include <algorithm>  //��׼�㷨ͷ�ļ�
//
//using namespace std;
//
//void myPrint(int val) {
//	cout << val << endl;
//}
//
////vector�������ʹ��������������
//void test01() {
//	//����vector����
//	vector <int> v;
//	//�������в�������
//	for (int i = 10; i < 50; i += 10) {
//		v.push_back(i);
//	}
//
//	////ͨ�����������������е�����
//	//vector<int>::iterator itBegin = v.begin();  //��ʼ������   ָ�������е�һ��Ԫ��
//	//vector<int>::iterator itEnd = v.end();  //����������    ָ�����������һ��Ԫ�ص���һ��λ��
//	////��һ�ֱ�����ʽ
//	//while (itBegin != itEnd) {
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	////�ڶ��ֱ�����ʽ
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//	//	cout << *it << endl;
//	//}
//
//	//�����ֱ�����ʽ
//	//ʹ��STL�ṩ��׼�����㷨  ͷ�ļ�algorithm
//	for_each(v.begin(), v.end(), myPrint);
//
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}