#ifndef SRC_MEDIATORPATTERN_EXAMPLE_CLASSA_H_
#define SRC_MEDIATORPATTERN_EXAMPLE_CLASSA_H_

//add
class MediatorOri;

class ClassA {
public:
	ClassA();
	virtual ~ClassA();
	void ADoSth();
	void wantBDoSth();
	void setMedia(MediatorOri* media) {
		m_media = media;
	}

private:
	MediatorOri* m_media;//add
};

#endif /* SRC_MEDIATORPATTERN_EXAMPLE_CLASSA_H_ */
