#include "example_ClassD.h"
#include <iostream>
using namespace std;
example_ClassD::example_ClassD():m_mediator_ptr(nullptr) {

}

example_ClassD::~example_ClassD() {
}

void example_ClassD::func() {
	cout << __PRETTY_FUNCTION__ << endl;
}

void example_ClassD::setMediator(IMediator* p) {
	m_mediator_ptr = p;
}
