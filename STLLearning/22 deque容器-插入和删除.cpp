//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//void printDeque(const deque<int> d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	deque<int> d1;
//
//	d1.push_back(10);
//	d1.push_back(100);
//	printDeque(d1);
//
//	d1.push_front(20);
//	d1.push_front(200);
//	printDeque(d1);
//
//	d1.pop_back();
//	printDeque(d1);
//
//	d1.pop_front();
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 30);
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 2, 300);
//	printDeque(d1);
//
//	deque<int> d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//
//	deque<int>::iterator it = d2.begin();
//	it++;
//	d2.erase(it);
//	printDeque(d2);
//
//	//按区间删除
//	d2.erase(d2.begin(), d2.end());
//	printDeque(d2);
//
//	//清空函数
//	d1.clear();
//	printDeque(d1);
//
//}
//
//int main() {
//	test01();
//
//
//	system("pause");
//	return 0;
//}