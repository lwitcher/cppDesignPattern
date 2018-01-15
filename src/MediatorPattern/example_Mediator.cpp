
#include "example_Mediator.h"

example_Mediator::example_Mediator():m_a(nullptr),m_b(nullptr) {
}

example_Mediator::~example_Mediator() {
}

void example_Mediator::registA(IColleague* ptr) {
	m_a = ptr;
}
void example_Mediator::registB(IColleague* ptr) {
	m_b = ptr;
}

void example_Mediator::callA() {
	m_a->func();
}

void example_Mediator::callB() {
	m_b->func();
}
