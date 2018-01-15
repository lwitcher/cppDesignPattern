#ifndef SRC_MEDIATORPATTERN_EXAMPLE_CLASSC_H_
#define SRC_MEDIATORPATTERN_EXAMPLE_CLASSC_H_

#include "Mediator.h"

class example_ClassC: public IColleague {
public:
	example_ClassC();
	virtual ~example_ClassC();
	virtual void func();
	virtual void setMediator(IMediator* p);
	void bizcode() {
		//example_ClassC的业务代码，干了一些事，又要调用ClassD的DDoSth函数
		//...这里是ClassC干的事
		//调用另一个类的函数
		m_mediator_ptr->callB();
	}
protected:
	IMediator* m_mediator_ptr;
	void DDoSth();
};

#endif /* SRC_MEDIATORPATTERN_EXAMPLE_CLASSC_H_ */
