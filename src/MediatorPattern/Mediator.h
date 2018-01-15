#ifndef SRC_MEDIATORPATTERN_H_
#define SRC_MEDIATORPATTERN_H_
/*中介者模式原型，不具有继承关系，仅提供中介者模式的基本形式
 * 使用实例见example.cpp example_ClassA.h/cpp example_ClassB.h/cpp MediatorOri.h
 **/

/*
 * 使用继承关系的中介者模式
 */
class IMediator;

/*
 * 在这里是否有必要用IColleague作为基类，有些需要讨论的地方
 * 使用接口的目的是尽量抽象IColleague的功能，不让IColleague具体的实现曝露出来。
 * 但是这里有以下原因打破了这种愿望：
 * 首先IMediator的registA/registB已经在函数签名上显示了参与中介者管理的类的信息，被接口隐藏起来的类型已经曝露
 * 其次接口IColleague要求对外提供统一的接口形式，无论业务代码是什么样子的，均在该接口中统一。事实上参与中介者模式的
 * 类的接口很难统一成一个(或一系列)简单的接口。因此最后要么与IMediator一样，IColleague中提供的函数会越来越多，
 * 要么发现还不如放弃IColleague，直接使用业务类。
 */
class IColleague {
public:
	//提供一个供外界调用的接口
	virtual void func()=0;
	//设置自身持有的中介者
	virtual void setMediator(IMediator* p)=0;
	IColleague() {

	}
	virtual ~IColleague() {

	}
};

/*
 * IMediator也有类似的问题，若选择了有继承关系的IMediator，那么中介者的子类包括IMediator
 * 都需要维护相当大范围的接口类型。在小型项目中这样是得不偿失的，在大型项目或特殊场景中有
 * 中介者的行为要求随时变化的需求，此时使用带有多态行为的中介者也许是个好的选择。
 */
class IMediator {
public:
	virtual void registA(IColleague* ptr)=0;
	virtual void registB(IColleague* ptr)=0;
	virtual void callA()=0;
	virtual void callB()=0;
	IMediator() {

	}
	virtual ~IMediator() {

	}
};
#endif //SRC_MEDIATORPATTERN_H_
