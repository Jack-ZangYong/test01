//#include <iostream>
//#include <set>
//
//using namespace std;
//
//void test01() {
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//
//	set<int>::iterator pos = s1.find(20);
//
//	if (pos != s1.end()) {
//		cout << "�ҵ�Ԫ�أ�Ϊ��" << *pos << endl;
//	}
//	else {
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//}
//
//void test02() {
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(30);
//	s1.insert(30);
//	s1.insert(40);
//
//	//����set���ԣ�ͳ�ƽ��Ҫô��0Ҫô��1
//	int num = s1.count(30);
//
//	cout << num << endl;
//}
//
//int main() {
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}