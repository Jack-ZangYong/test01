//#include <iostream>
//#include <list>
//
//using namespace std;
//
//void test01() {
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//L[1] list不支持[]访问数据
//	//L.at(1) list不支持at访问数据
//
//	cout << L1.front() << endl;
//	cout << L1.back() << endl;
//
//	//验证迭代器是不支持随机访问的
//	list<int>::iterator it = L1.begin();
//	it++;
//
//	//it = it + 1;  错误  只能++  -- ，支持双向
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}