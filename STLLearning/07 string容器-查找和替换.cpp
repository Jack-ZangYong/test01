//#include <iostream>
//#include <string>
//
//using namespace std;
//
////1、查找
//void test01() {
//	string str1 = "abcdefgdef";
//	int pos = str1.find("cd");
//	cout << "cd第一次出现的位置：" << pos << endl;
//
//	pos = str1.find("ad");
//	if (pos == -1) {
//		cout << "未找到字符串" << endl;
//	}
//	else {
//		cout << "字符串第一次出现的位置：" << pos << endl;
//	}
//
//	//rfind和find区别：rfind从右往左找，find从左往右找，下标位置都是从左往右数的
//	//即rfind找到的是最后出现的位置，find找到的是第一次出现的位置
//	pos = str1.rfind("de");
//	if (pos == -1) {
//		cout << "未找到字符串" << endl;
//	}
//	else {
//		cout << "字符串最后一次出现的位置：" << pos << endl;
//	}
//}
//
////2、替换
//void test02() {
//	string str2 = "abcdefg";
//	cout << "替换前：" << str2 << endl;
//
//	str2.replace(1, 3, "1111");
//	cout << "替换后：" << str2 << endl;
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