#ifndef SRC_MEDIATORPATTERN_MEDIATORORI_H_
#define SRC_MEDIATORPATTERN_MEDIATORORI_H_

class ClassA;
//前置声明，ClassA的头文件不会曝露给ClassB
class ClassB;
//前置声明，ClassB的头文件不会曝露给ClassA

class MediatorOri {
public:
	MediatorOri();
	virtual ~MediatorOri();
	void wantADoSth(); //调用ClassA的方法
	void wantBDoSth(); //调用ClassB的方法
	void regist(ClassA* p) {
		m_a = p;
	}
	void regist(ClassB* p) {
		m_b = p;
	}

private:
	ClassA* m_a;
	ClassB* m_b;
};

#endif /* SRC_MEDIATORPATTERN_MEDIATORORI_H_ */
