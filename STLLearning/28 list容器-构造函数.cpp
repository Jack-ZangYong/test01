//#include <iostream>
//#include <list>
//
//using namespace std;
//
//void printList(const list<int>& l) {
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	list<int> l;  //Ĭ�Ϲ���
//
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	l.push_back(40);
//
//	printList(l);
//
//	list<int> l1(l.begin(), l.end());  //���䷽ʽ����
//	printList(l1);
//
//	list<int> l2(l1);  //��������
//	printList(l2);
//
//	list<int> l3(4, 100);  //n��elem����
//	printList(l3);
//
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}