//#include <iostream>
//#include <string>
//
//using namespace std;
//
////1������
//void test01() {
//	string str1 = "abcdefgdef";
//	int pos = str1.find("cd");
//	cout << "cd��һ�γ��ֵ�λ�ã�" << pos << endl;
//
//	pos = str1.find("ad");
//	if (pos == -1) {
//		cout << "δ�ҵ��ַ���" << endl;
//	}
//	else {
//		cout << "�ַ�����һ�γ��ֵ�λ�ã�" << pos << endl;
//	}
//
//	//rfind��find����rfind���������ң�find���������ң��±�λ�ö��Ǵ�����������
//	//��rfind�ҵ����������ֵ�λ�ã�find�ҵ����ǵ�һ�γ��ֵ�λ��
//	pos = str1.rfind("de");
//	if (pos == -1) {
//		cout << "δ�ҵ��ַ���" << endl;
//	}
//	else {
//		cout << "�ַ������һ�γ��ֵ�λ�ã�" << pos << endl;
//	}
//}
//
////2���滻
//void test02() {
//	string str2 = "abcdefg";
//	cout << "�滻ǰ��" << str2 << endl;
//
//	str2.replace(1, 3, "1111");
//	cout << "�滻��" << str2 << endl;
//}
//
//int main() {
//	//test01();
//	test02();
//
//
//	system("pause");
//	return 0;
//}