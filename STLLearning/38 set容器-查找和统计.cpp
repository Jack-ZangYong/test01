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
//		cout << "找到元素，为：" << *pos << endl;
//	}
//	else {
//		cout << "未找到元素" << endl;
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
//	//对于set而言，统计结果要么是0要么是1
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