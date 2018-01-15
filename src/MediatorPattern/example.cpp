#include <iostream>
#include "example_ClassA.h"
#include "example_ClassB.h"
#include "example_ClassC.h"
#include "example_ClassD.h"
#include "example_Mediator.h"
#include "MediatorOri.h"

#include "Mediator.h"
using namespace std;

int main() {

	/*演示中介者模式原型
	 *该场景假定ClassA和ClassB是两个已经存在的业务类且无继承关系，且两者目前没有依赖关系。
	 *业务变化导致ClassA和ClassB两个对象中需要调用对方的方法，为了避免相互相互依赖的状况
	 *引入中介者模式，且尽量不对ClassA和ClassB造成侵入式影响。
	 *
	 */
	{
		ClassA clsa;
		ClassB clsb;
		MediatorOri mediator;
		mediator.regist(&clsa); //危险动作，请勿模仿
		mediator.regist(&clsb); //危险动作，请勿模仿
		clsa.setMedia(&mediator); //危险动作，请勿模仿
		clsb.setMedia(&mediator); //危险动作，请勿模仿

		//如果有一天，ClassA想调用ClassB的接口
		cout << "test for MediatorOri..." << endl;
		clsa.wantBDoSth(); //ClassA调用了ClassB的接口且没有和ClassB发生关联
		clsb.wantADoSth(); //反过来也是
	}

	{
		example_ClassC clsc;
		example_ClassD clsd;
		example_Mediator mediator;
		clsc.setMediator(&mediator); //危险动作，请勿模仿
		clsd.setMediator(&mediator); //危险动作，请勿模仿
		mediator.registA(&clsc); //危险动作，请勿模仿
		mediator.registB(&clsd); //危险动作，请勿模仿

		//如果有一天，ClassC的业务代码需要调用ClassD的接口
		cout << "test for Mediator_with_inherit..." << endl;
		clsc.bizcode(); //ClassC调用了ClassD的接口且没有和ClassD发生关联
		clsd.bizcode(); //反过来也是
	}
	return 0;
}
