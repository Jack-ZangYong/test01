//#include <iostream>
//#include <vector>
//
//using namespace std;
//
////����ԭ�ͣ�
////
////- `push_back(ele); `                             //β������Ԫ��ele
////- `pop_back(); `                                 //ɾ�����һ��Ԫ��
////- `insert(const_iterator pos, ele); `            //������ָ��λ��pos����Ԫ��ele
////- `insert(const_iterator pos, int count, ele); ` //������ָ��λ��pos����count��Ԫ��ele
////- `erase(const_iterator pos); `                        //ɾ��������ָ���Ԫ��
////- `erase(const_iterator start, const_iterator end); ` //ɾ����������start��end֮���Ԫ��
////- `clear(); `                                         //ɾ������������Ԫ��
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