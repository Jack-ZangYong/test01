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
//	//插入
//	//第一种
//	m.insert(pair<int, int>(1, 10));
//	//第二种
//	m.insert(make_pair(2, 20));
//	//第三种
//	m.insert(map<int, int>::value_type(3, 30));
//	//第四种
//	m[4] = 40;
//	//[]不建议插入， 用于利用key 访问value      若key 不存在，会自动创建，value 默认为0
//	cout << m[4] << endl;
//
//	printMap(m);
//
//	//删除
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3);  //按照key删除
//	printMap(m);
//	
//	//清空
//	//m.erase(m.begin(), m.end());
//	m.clear();
//	printMap(m);
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}