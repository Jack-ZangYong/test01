//#include <iostream>
//#include <string>
//
//using namespace std;
//
////����ԭ�ͣ�
////
////- `string& operator+=(const char* str); `                   //����+=������
////- `string& operator+=(const char c); `                      //����+=������
////- `string& operator+=(const string & str); `                //����+=������
////- `string& append(const char* s); `                         //���ַ���s���ӵ���ǰ�ַ�����β
////- `string& append(const char* s, int n); `                  //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
////- `string& append(const string & s); `                      //���ַ���s���ӵ���ǰ�ַ�����β
////- `string& append(const string & s, int pos, int n); `      //�ַ���s��pos��ʼ��n���ַ����ӵ���ǰ�ַ�����β
//
//void test01() {
//	string str1 = "��";
//	cout << "str1 = " << str1 << endl;
//	str1 += "���й�";
//	cout << "str1 = " << str1 << endl;
//	str1 += ':';
//	cout << "str1 = " << str1 << endl;
//	string str2 = "�Ϻ�";
//	str1 += str2;
//	cout << "str1 = " << str1 << endl;
//
//	string str3 = "I ";
//	cout << "str3 = " << str3 << endl;
//	str3.append("Love China");
//	cout << "str3 = " << str3 << endl;
//	str3.append(":Shanghai Henan", 9);
//	cout << "str3 = " << str3 << endl;
//	string str4 = "aaa and Henan nnn.";
//	str3.append(str4);
//	cout << "str3 = " << str3 << endl;
//	str3.append(str4, 4, 9);
//	cout << "str3 = " << str3 << endl;
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}