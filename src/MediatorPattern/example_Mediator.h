#ifndef SRC_MEDIATORPATTERN_EXAMPLE_MEDIATOR_H_
#define SRC_MEDIATORPATTERN_EXAMPLE_MEDIATOR_H_

#include "Mediator.h"
class example_ClassC;
class example_ClassD;
//IMediator的实现类
class example_Mediator: public IMediator {
public:
	example_Mediator();
	virtual ~example_Mediator();
	virtual void registA(IColleague* ptr);
	virtual void registB(IColleague* ptr);
	virtual void callA();
	virtual void callB();

protected:
	IColleague *m_a;
	IColleague *m_b;
};

#endif /* SRC_MEDIATORPATTERN_EXAMPLE_MEDIATOR_H_ */
