#ifndef SRC_MEDIATORPATTERN_EXAMPLE_CLASSD_H_
#define SRC_MEDIATORPATTERN_EXAMPLE_CLASSD_H_

#include "Mediator.h"

class example_ClassD: public IColleague {
public:
	example_ClassD();
	virtual ~example_ClassD();
	virtual void func();
	virtual void setMediator(IMediator* p);
	void bizcode() {
		//example_ClassD的业务代码，干了一些事，又要调用ClassC的CDoSth函数
		//...这里是ClassD干的事
		//调用另一个类的函数
		m_mediator_ptr->callA();
	}
protected:
	IMediator* m_mediator_ptr;
	void CDoSth();
};

#endif /* SRC_MEDIATORPATTERN_EXAMPLE_CLASSD_H_ */
