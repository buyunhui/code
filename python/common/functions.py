def dec_singleton(cls, *args, **kwargs): # decorate
    instance = {}
    def _instance(*args, **kwargs):
        if cls not in instance:
            instance[cls] = cls(*args, *kwargs)
        return instance[cls]
    return _instance


class Singleton(object):  # decorate
    def __init__(self, obj):
        self.__instance = obj

    def __call__(self, *args, **kwargs):
        if self.__instance is None:
            self.__instance = self.__instance(*args, **kwargs)

        return self.__instance


class Meta_Singleton(type): #metaclass=Meta_Singleton
    def __init__(self, *args, **kwargs):
        self.__instance = None
        super(Singleton,self).__init__(*args, **kwargs)

    def __call__(self, *args, **kwargs):
        if self.__instance is None:
            self.__instance = super(Singleton,self).__call__(*args, **kwargs)
        return self.__instance


class New_Singleton(object):  #inhert
    def __new__(cls, *args, **kwargs):
        if not hasattr(cls,"_instance"):
            cls._instance = super(Singleton, cls).__new__(cls, *args, **kwargs)
        return cls._instance

print("xhjkhjhjhjhjhjkkxx")