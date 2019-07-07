#ifndef _ADAPTER_H_
#define _ADAPTER_H_

//Ŀ��ӿ��࣬�ͻ���Ҫ�Ľӿ�
class Target
{
public:
    Target();
    virtual ~Target();
    virtual void Request();//�����׼�ӿ�
};

//��Ҫ�������
class Adaptee
{
public:
    Adaptee();
    ~Adaptee();
    void SpecificRequest();
};

//��ģʽ���������࣬ͨ��public�̳л�ýӿڼ̳е�Ч����ͨ��private�̳л��ʵ�ּ̳е�Ч��
class Adapter:public Target,private Adaptee
{
public:
    Adapter();
    ~Adapter();
    virtual void Request();//ʵ��Target�����Request�ӿ�
};

//����ģʽ���������࣬�̳�Target�࣬������ϵķ�ʽʵ��Adaptee�ĸ���
class Adapter1:public Target
{
public:
    Adapter1(Adaptee* adaptee);
    Adapter1();
    ~Adapter1();
    virtual void Request();//ʵ��Target�����Request�ӿ�
private:
    Adaptee* _adaptee;
};
#endif