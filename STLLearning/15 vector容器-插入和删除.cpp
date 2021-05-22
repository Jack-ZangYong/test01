//#include <iostream>
//#include <vector>
//
//using namespace std;
//
////函数原型：
////
////- `push_back(ele); `                             //尾部插入元素ele
////- `pop_back(); `                                 //删除最后一个元素
////- `insert(const_iterator pos, ele); `            //迭代器指向位置pos插入元素ele
////- `insert(const_iterator pos, int count, ele); ` //迭代器指向位置pos插入count个元素ele
////- `erase(const_iterator pos); `                        //删除迭代器指向的元素
////- `erase(const_iterator start, const_iterator end); ` //删除迭代器从start到end之间的元素
////- `clear(); `                                         //删除容器中所有元素
//
//void printVector(vector<int>& v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	printVector(v);
//
//	v.pop_back();
//	printVector(v);
//
//	v.insert(v.begin(), 100);
//	printVector(v);
//
//	v.insert(v.begin(), 2, 1000);
//	printVector(v);
//
//	//v.erase(v.begin(), v.end());
//	v.clear();
//	printVector(v);
//
//
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}