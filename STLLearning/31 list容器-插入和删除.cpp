//#include <iostream>
//#include <list>
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
//void test01() {
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	L1.push_front(100);
//	L1.push_front(200);
//	L1.push_front(300);
//	L1.push_front(400);
//
//	printList(L1);
//
//	//βɾ
//	L1.pop_back();
//	printList(L1);
//
//	//ͷɾ
//	L1.pop_front();
//	printList(L1);
//
//	//insert����
//	list<int>::iterator it = L1.begin();
//	L1.insert(++it, 1000);
//	printList(L1);
//
//	//eraseɾ��
//	L1.erase(--it);
//	printList(L1);
//
//	L1.push_back(100000);
//	L1.push_back(100000);
//	L1.push_back(100000);
//	L1.push_back(100000);
//	printList(L1);
//
//	//remove�Ƴ�
//	L1.remove(100000);
//	printList(L1);
//
//	//clear���
//	L1.clear();
//	printList(L1);
//
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}