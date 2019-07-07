#include "../headers/bridge/abstraction.h"
#include "../headers/bridge/abstractionImplement.h"
#include <iostream>

using namespace std;

int main()
{
    /* �����󲿷�������ʵ�ֲ��ַ��룬ʹ�����ǿ��Զ����ر仯

    1������Abstraction��ʵ��AbstractionImplement����;

    2�����󲿷�Abstraction���Ա仯����new RefinedAbstractionA(imp)��new RefinedAbstractionB(imp2);

    3��ʵ�ֲ���AbstractionImplementҲ���Ա仯����new ConcreteAbstractionImplementA()��new ConcreteAbstractionImplementB();

    */

    AbstractionImplement* imp = new ConcreteAbstractionImplementA();        //ʵ�ֲ���ConcreteAbstractionImplementA
    Abstraction* abs = new RefinedAbstractionA(imp);                        //���󲿷�RefinedAbstractionA
    abs->Operation();

    cout << "-----------------------------------------" << endl;

    AbstractionImplement* imp1 = new ConcreteAbstractionImplementB();        //ʵ�ֲ���ConcreteAbstractionImplementB
    Abstraction* abs1 = new RefinedAbstractionA(imp1);                        //���󲿷�RefinedAbstractionA
    abs1->Operation();

    cout << "-----------------------------------------" << endl;

    AbstractionImplement* imp2 = new ConcreteAbstractionImplementA();        //ʵ�ֲ���ConcreteAbstractionImplementA
    Abstraction* abs2 = new RefinedAbstractionB(imp2);                        //���󲿷�RefinedAbstractionB
    abs2->Operation();

    cout << "-----------------------------------------" << endl;

    AbstractionImplement* imp3 = new ConcreteAbstractionImplementB();        //ʵ�ֲ���ConcreteAbstractionImplementB
    Abstraction* abs3 = new RefinedAbstractionB(imp3);                        //���󲿷�RefinedAbstractionB
    abs3->Operation();

    cout << endl;
    return 0;
}