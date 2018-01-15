#include "MediatorOri.h"

//相互依赖的情况在这里，不对业务代码ClassA和ClassB造成影响
#include "example_ClassA.h"
#include "example_ClassB.h"

MediatorOri::MediatorOri():m_a(nullptr),m_b(nullptr) {
}

MediatorOri::~MediatorOri() {
}

void MediatorOri::wantADoSth() {
	if(m_a != nullptr){
		m_a->ADoSth();
	}
}

void MediatorOri::wantBDoSth() {
	if(m_b != nullptr){
		m_b->BDoSth();
	}
}
