#ifndef _ABSTRACTION_H_
#define _ABSTRACTION_H_

class AbstractionImplement;

class Abstraction
{
public:
    virtual void Operation()=0;//����ӿڣ���ʾ������֧�ֵĲ���
    virtual ~Abstraction();
protected:
    Abstraction();
};

class RefinedAbstractionA:public Abstraction
{
public:
    RefinedAbstractionA(AbstractionImplement* imp);//���캯��
    virtual void Operation();//ʵ�ֽӿ�
    virtual ~RefinedAbstractionA();//��������
private:
    AbstractionImplement* _imp;//˽�г�Ա
};

class RefinedAbstractionB:public Abstraction
{
public:
    RefinedAbstractionB(AbstractionImplement* imp);//���캯��
    virtual void Operation();//ʵ�ֽӿ�
    virtual ~RefinedAbstractionB();//��������
private:
    AbstractionImplement* _imp;//˽�г�Ա
};
#endif