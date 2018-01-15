#include "example_ClassC.h"
#include <iostream>
using namespace std;
example_ClassC::example_ClassC():m_mediator_ptr(nullptr) {
}

example_ClassC::~example_ClassC() {
}

void example_ClassC::func() {
	cout <<  __PRETTY_FUNCTION__ << endl;
}

void example_ClassC::setMediator(IMediator* p) {
	m_mediator_ptr = p;
}
