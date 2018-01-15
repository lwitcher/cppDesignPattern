#include "example_ClassB.h"

//需要做的就是包含该头文件并定义中介类的指针作为属性，在适当时机将中介者设置进来
//看实际情况，也可以将中介者作为单例或者全局对象
#include "MediatorOri.h"

#include <iostream>
using namespace std;

ClassB::ClassB():m_media(nullptr) {

}

ClassB::~ClassB() {
}

void ClassB::BDoSth() {
	cout << __PRETTY_FUNCTION__  << endl;
}

void ClassB::wantADoSth(){
	m_media->wantADoSth();
}
