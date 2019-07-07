#ifndef _SIGNLETON_H_
#define _SIGNLETON_H_
#include <iostream>
using namespace std;

class Singleton
{
public:
    static Singleton *GetInstance()
    {
        if (m_Instance == NULL)
        {
            m_Instance = new Singleton();
            cout<<"get Singleton instance success"<<endl;
        }
        return m_Instance;
    }

private:
    Singleton(){cout<<"Singleton construction"<<endl;}
    static Singleton *m_Instance;

    // This is important
    class GC // ����������
    {
    public:
        GC()
        {
            cout<<"GC construction"<<endl;
        }
        ~GC()
        {
            cout<<"GC destruction"<<endl;
            // We can destory all the resouce here, eg:db connector, file handle and so on
            if (m_Instance != NULL)
            {
                delete m_Instance;
                m_Instance = NULL;
                cout<<"Singleton destruction"<<endl;
                system("pause");//����ͣ������Զ��˳��������������Ϣ
            }
        }
    };
    static GC gc;  //����������ľ�̬��Ա

};

Singleton *Singleton::m_Instance = NULL;
Singleton::GC Singleton::gc; //��ľ�̬��Ա��Ҫ���ⲿ��ʼ������һ�����Ҫ���������������GC�Ĺ��춼������룬��̸�Զ�����

#endif
