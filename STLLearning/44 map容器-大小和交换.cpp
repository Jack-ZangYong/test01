//#include <iostream>
//#include <map>
//
//using namespace std;
//
//void printMap(const map<int, int>& m) {
//	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++) {
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01() {
//	map<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	if (m.empty()) {
//		cout << "mΪ�ա�" << endl;
//	}
//	else {
//		cout << "m��Ϊ�ա�" << endl;
//		cout << "m�Ĵ�СΪ��" << m.size() << endl;
//		printMap(m);
//	}
//}
//
//void test02() {
//	map<int, int> m1;
//
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(3, 30));
//	m1.insert(pair<int, int>(4, 40));
//
//	map<int, int> m2;
//
//	m2.insert(pair<int, int>(5, 10));
//	m2.insert(pair<int, int>(6, 20));
//	m2.insert(pair<int, int>(7, 30));
//	m2.insert(pair<int, int>(8, 40));
//
//	cout << "����ǰ��" << endl;
//	cout << "----------------------------" << endl;
//
//	printMap(m1);
//	printMap(m2);
//
//	m1.swap(m2);
//
//	cout << "������" << endl;
//	cout << "----------------------------" << endl;
//
//	printMap(m1);
//	printMap(m2);
//}
//
//int main() {
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}