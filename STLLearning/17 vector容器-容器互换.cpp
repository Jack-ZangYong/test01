//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void printVector(vector<int>& v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////������������ʹ��
//void test01() {
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//
//	vector<int> v2;
//	for (int i = 10; i > 0; i--) {
//		v2.push_back(i);
//	}
//
//	cout << "����ǰ��" << endl;
//	cout << "v1 = " << endl;
//	printVector(v1);
//	cout << "v2 = " << endl;
//	printVector(v2);
//
//	v1.swap(v2);
//
//	cout << "������" << endl;
//	cout << "v1 = " << endl;
//	printVector(v1);
//	cout << "v2 = " << endl;
//	printVector(v2);
//
//}
//
////ʵ��ʹ��
////����swap���������ڴ�ռ�
//void test02() {
//	vector<int> v;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//	}
//
//	cout << "v������" << v.capacity() << endl;
//	cout << "v��С��" << v.size() << endl;
//
//	v.resize(3);
//	cout << "v������" << v.capacity() << endl;
//	cout << "v��С��" << v.size() << endl;
//
//	vector<int>(v).swap(v);  //�������� ��v��ʼ�� Ȼ���v����, ����������ú�����
//	cout << "v������" << v.capacity() << endl;
//	cout << "v��С��" << v.size() << endl;
//}
//
//int main() {
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}