//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//void printDeque(const deque<int>& d);
//
//void test01() {
//	deque<int> d1;
//
//	for (int i = 0; i < 10; i++) {
//		d1.push_back(i);
//	}
//
//	printDeque(d1);
//
//	deque<int> d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int> d3(10, 100);
//	printDeque(d3);
//
//	deque<int> d4(d3);
//	printDeque(d4);
//
//}
//
//void printDeque(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		//*it = 100;        const deque<int>& d限定了d的内容不可修改，此时的迭代器要使用const_iterator
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}