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
//void test01() {
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//
//	printVector(v1);
//
//	if (v1.empty()) {
//		cout << "v1为空" << endl;
//
//	}
//	else {
//		cout << "v1不为空，容量为：" << v1.capacity() << "  大小为：" << v1.size() << endl;
//	}
//
//	v1.resize(15);
//	printVector(v1);   //如果重新指定的空间比原来的长了，那么默认用0填充
//
//	v1.resize(20, 100);//如果重新指定的空间比原来的长了，那么可以指定填充数据
//	printVector(v1);
//
//	v1.resize(5);
//	printVector(v1);  //如果重新指定的空间比原来的短了，那么删除末尾超出的部分
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}