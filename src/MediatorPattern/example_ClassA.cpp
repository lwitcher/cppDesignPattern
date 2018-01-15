#include "example_ClassA.h"

//需要做的就是包含该头文件并定义中介类的指针作为属性，在适当时机将中介者设置进来
//看实际情况，也可以将中介者作为单例或者全局对象
#include "MediatorOri.h"
#include <iostream>
using namespace std;

ClassA::ClassA():m_media(nullptr){
}

ClassA::~ClassA() {
}

void ClassA::ADoSth() {
	cout << __PRETTY_FUNCTION__  << endl;
}

void ClassA::wantBDoSth(){
	m_media->wantBDoSth();
}
