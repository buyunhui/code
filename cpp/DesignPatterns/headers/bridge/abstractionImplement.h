#ifndef _ABSTRACTIONIMPLEMENT_H_
#define _ABSTRACTIONIMPLEMENT_H_

//������࣬������ʵ�ֵĽӿ�
class AbstractionImplement
{
public:
    virtual void Operation()=0;//��������ӿ�
    virtual ~AbstractionImplement();
protected:
    AbstractionImplement();
};

// �̳���AbstractionImplement,��AbstractionImplement�Ĳ�ͬʵ��֮һ
class ConcreteAbstractionImplementA:public AbstractionImplement
{
public:
    ConcreteAbstractionImplementA();
    void Operation();//ʵ�ֲ���
    ~ConcreteAbstractionImplementA();
protected:
};

// �̳���AbstractionImplement,��AbstractionImplement�Ĳ�ͬʵ��֮һ
class ConcreteAbstractionImplementB:public AbstractionImplement
{
public:
    ConcreteAbstractionImplementB();
    void Operation();//ʵ�ֲ���
    ~ConcreteAbstractionImplementB();
protected:
};
#endif