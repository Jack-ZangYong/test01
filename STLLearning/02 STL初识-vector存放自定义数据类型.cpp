//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
////����Զ�����������  Person
//void test01() {
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	vector<Person> v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "Name: " << it->m_Name << " Age: " << it->m_Age << endl;
//	}
//}
//
////����Զ�����������  ָ��
//void test02() {
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	vector<Person*> v;
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "Name: " << (*it)->m_Name << " Age: " << (*it)->m_Age << endl;
//	}
//}
//
//int main() {
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}