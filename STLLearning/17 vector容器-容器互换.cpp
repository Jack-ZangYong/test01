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
////互换容器基本使用
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
//	cout << "互换前：" << endl;
//	cout << "v1 = " << endl;
//	printVector(v1);
//	cout << "v2 = " << endl;
//	printVector(v2);
//
//	v1.swap(v2);
//
//	cout << "互换后：" << endl;
//	cout << "v1 = " << endl;
//	printVector(v1);
//	cout << "v2 = " << endl;
//	printVector(v2);
//
//}
//
////实际使用
////巧用swap可以收缩内存空间
//void test02() {
//	vector<int> v;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//	}
//
//	cout << "v容量：" << v.capacity() << endl;
//	cout << "v大小：" << v.size() << endl;
//
//	v.resize(3);
//	cout << "v容量：" << v.capacity() << endl;
//	cout << "v大小：" << v.size() << endl;
//
//	vector<int>(v).swap(v);  //匿名对象 用v初始化 然后和v交换, 匿名对象调用后即销毁
//	cout << "v容量：" << v.capacity() << endl;
//	cout << "v大小：" << v.size() << endl;
//}
//
//int main() {
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}