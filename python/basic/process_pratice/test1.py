# encoding:utf-8

import time
import random
from multiprocessing import Process


def piao(name):
    print('%s piaoing' %name)
    time.sleep(random.randrange(1,5))
    print('%s piao end' %name)

class Piao(Process):
    def __init__(self,name):
        super().__init__()
        self.name=name
    def run(self):
        print('%s piaoing' %self.name)

        time.sleep(random.randrange(1,5))
        print('%s piao end' %self.name)

if __name__ == '__main__':
    p1=Process(target=piao,args=('aaa',)) #必须加,号
    p2=Process(target=piao,args=('bbb',))
    p3=Process(target=piao,args=('ccc',))
    p4=Process(target=piao,args=('ddd',))

    p1.start()
    p2.start()
    p3.start()
    p4.start()

    p1=Piao('aaa')
    p2=Piao('bbb')
    p3=Piao('ccc')
    p4=Piao('ddd')

    p1.start() #start会自动调用run
    p2.start()
    p3.start()
    p4.start()
    print('主线程')
    print('主线程')