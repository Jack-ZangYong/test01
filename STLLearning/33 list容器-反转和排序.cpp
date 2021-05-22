//#include <iostream>
//#include <list>
//#include <algorithm>
//
//using namespace std;
//
//void printList(const list<int>& L) {
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//bool myCompare(int v1, int v2) {
//	return v1 > v2;
//}
//
//void test01() {
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(30);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(20);
//
//	cout << "反转前： " << endl;
//	printList(L1);
//
//	L1.reverse();
//	cout << "反转后： " << endl;
//	printList(L1);
//
//	cout << "排序后： " << endl;
//	L1.sort();  //默认规则  从小到大
//	printList(L1);
//	
//	L1.sort(myCompare);  //从大到小排
//	printList(L1);
//
//	//所有不支持随机访问迭代器的容器，不可以用标准算法
//	//不支持随机访问迭代器的容器，内部会提供相应算法
//	//sort(L1.begin(), L1.end());
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}