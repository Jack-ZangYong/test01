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
//		cout << "v1Ϊ��" << endl;
//
//	}
//	else {
//		cout << "v1��Ϊ�գ�����Ϊ��" << v1.capacity() << "  ��СΪ��" << v1.size() << endl;
//	}
//
//	v1.resize(15);
//	printVector(v1);   //�������ָ���Ŀռ��ԭ���ĳ��ˣ���ôĬ����0���
//
//	v1.resize(20, 100);//�������ָ���Ŀռ��ԭ���ĳ��ˣ���ô����ָ���������
//	printVector(v1);
//
//	v1.resize(5);
//	printVector(v1);  //�������ָ���Ŀռ��ԭ���Ķ��ˣ���ôɾ��ĩβ�����Ĳ���
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}