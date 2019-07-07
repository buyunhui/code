#include "../headers/signleton/singleton.h"

int main(int argc, char *argv[])
{
    Singleton *singletonObj = Singleton::GetInstance();
    return 0;
}