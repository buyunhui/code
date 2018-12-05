from multiprocessing import Process
import time
import random
class Piao(Process):
    def __init__(self,name):
        # self.name=name
        # super().__init__() #Process的__init__方法会执行self.name=Piao-1,
        #                    #所以加到这里,会覆盖我们的self.name=name

        #为我们开启的进程设置名字的做法
        super().__init__()
        self.name=name

    def run(self):
        print('%s is piaoing' %self.name)
        time.sleep(random.randrange(1,3))
        print('%s is piao end' %self.name)
if __name__ == '__main__':
    p=Piao('aaa')
    p.start()
    print('开始')
    print(p.pid) #查看pid