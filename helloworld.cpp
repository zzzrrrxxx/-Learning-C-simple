/*Writer is a Chinese,so All comments are in Chinese.*/
/*作者是一个中国人，所以以下所有注释均为中文*/
/*2019-7-22*/
/*writer:zwaterrx*/
#include<iostream>
/*以#开头的语句为头文件，也可以单独作为一个头文件（*.h），然后在主文档中#include"(*.h的名字)"*/
using namespace std;
/*using为使用，namespace是命名空间，std是一个标准。cout  cin  等均在std中。
另外，每一条语句（头文件除外）结尾必须为英文分号(;)*/ 
int/*int是一个变量类型。类似的还有：bype、long、longlong、float等*/ main(/*此处放形参、实参。*/){
/*此花括号可放在第二行，但他必须为main后面的第一个非注释、非空的字符。*/
	cout << "helloworld" << endl;/*cout可以直接用是因为之前已引入std，否则为std::cout。后面的endl也是这样。*/
	/*<<是一个连接符。*/
	system("pause");/*pause的作用是点击任意键后再进行下面的内容。注意分号。*/
	/*同理，还有system("cls");*/
	return 0;/*给系统的返回值为0。*/
} /*注意：要有结束的花括号！*/
/*另外：//和/*都是注释，编译器会忽略。*/
