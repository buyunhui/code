#数据读取与导出
import pandas as pd
import numpy as np
pd.read_csv(filename,sep='')#从csv文件导入数据
pd.read_csv(filename,sep='',header=none)#导入没有头的文件
#构造DataFrame数据
df=pd.DataFrame([[1,2,3],[4,5,6]],columns=['f1','f2','f3'])
 
#导出数据
df.to_csv(filename,index=False)
 
#数据查看
df.head(n)#查看数据的前n行
df.tail(n)#查看DataFrame对象的最后n行
df.shape()#查看行数和列数
df.info()#查看索引、数据类型和内存信息
df.describe()# 查看数值型列的汇总统计
s=df['user_id']#根据列名以Serise的形式返回列
df[['user_id','item_id']]#以DataFrame形式返回多列
s.iloc['index_one']#按索引选取 数据
df.iloc[0,:]#返回第一行
df.iloc[0,0]#返回第一列的第一个元素
df.sample(frac=0.5)#采样
 
#数据整理
pd.isnull()#检查DataFrame对象中的控制，并返回一个Boolean数组
df.dropna(axis=0)#删除所有包含空值的行
df.dropna(axis=1)#删除所有包含空值的列
df.dropna(axis=1,thresh=n)#删除所有小于n个非空值的行
df.fillna(x)#用x替换DataFrame对象中的所有的空值
df.fillna(df.median)#中位数填充
s.replace(1,'one')#用'one'代替所有等于1的值
df.columns= ['a','b','c']#重命名列名
df.rename(columns=lambda x:x+1)#批量重命名列名
df.rename(index=lambda x:x+1 )#批量重命名索引
 
#数据处理
df[df[col]>0.5]#选择col列的值大于0.5的行
df.sort_values(by='col',ascending=True)#按照列col排序数据，默认升序排序
 
#数据合并
df1.append(df2)#将df2中的行添加到df1的尾部
pd.concat([df1,df2],axis=1)#按列合并
pd.concat([df1,df2],axis=0)#按行合并
 
df.corr()#返回所有列与列之间的相关系数
df.count()#返回每一列中的非空值的个数
df.dtypes()#查看数据类型
df['uesr_id'].hist()#查看变量分布
df.isnull().sum()#查看每一列缺失值的情况
df['user_id'].unique()#查看数据取值
 
 
a.sort_index(axis=1,ascending=False)#axis=1表示对所有的columns进行排序
a.sort(column='x')#对DataFrame中的值进行排序
选取对象
a['x']#选取特定的列，
选取行数据，通过切片[]来选择
a[0:3]#选取前三行的数据
 
loc是通过 行标签来选择数据
iloc通过行号索引行数据
ix通过行标签或者行号索引行数据（基于loc和iloc的混合）
a.loc['one']  #默认表示选取行为'one'的行
a.loc[:,'a','b']表示选取所有行以及columns为a,b的列
a.loc[['one','two'],['a','b']]表示选取‘one’和‘two’这两行以及columns为ab的列
a.loc[0]表示选取第一行的数据
 
条件选择
a[a.c>0]表示选择c列中大于0 的数据
赋值
a.loc[:,['a','c']=9 即将a和c列的所有行中的值设置为9
 
a.dropna(how='any')表示去掉包含缺失值的行
a.fillna(value=x) 表示用值为x 的数来对缺失值 进行填充
 
统计某一列x中格格之出现的次数 a['x'].value_counts()
 
对数据应用函数 a.apply(lambda x :x.max()-x.mnin())表示 返回所有列中最大值-最小值的差