#ifndef SRC_MEDIATORPATTERN_EXAMPLE_CLASSB_H_
#define SRC_MEDIATORPATTERN_EXAMPLE_CLASSB_H_
//add
class MediatorOri;

class ClassB {
public:
	ClassB();
	virtual ~ClassB();
	void BDoSth();
	void wantADoSth();

	void setMedia(MediatorOri* media) {
		m_media = media;
	}

private:
	MediatorOri* m_media; //add
};

#endif /* SRC_MEDIATORPATTERN_EXAMPLE_CLASSB_H_ */
