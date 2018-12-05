# encoding:utf-8

import requests
from lxml import etree
 
#代理IP的信息存储
def write_proxy(proxies):
    print(proxies)
    for proxy in proxies:
        with open("ip_proxy.txt", 'a+') as f:
            print("正在写入：", proxy)
            f.write(proxy + '\n')
    print("录入完成！！！")
 
 
 
#解析网页，并得到网页中的代理IP
def get_proxy(html):
    #对获取的页面进行解析
    selector = etree.HTML(html)
    #print(selector.xpath("//title/text()"))
    proxies = []
    #信息提取
    for each in selector.xpath("//tr[@class='odd']"):
        #ip.append(each[0])
        ip = each.xpath("./td[2]/text()")[0]
        port = each.xpath("./td[3]/text()")[0]
        proxy = ip + ":" + port
 
        proxies.append(proxy)
    print(len(proxies))
    test_proxies(proxies)
 
 
 
#验证已得到IP的可用性，本段代码通过访问百度网址，返回的response状态码判断（是否可用）。
def test_proxies(proxies):
    proxies = proxies
    url= "http://www.baidu.com/"
    header = {"User-Agent": "Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/67.0.3396.99 Safari/537.36",
    }
    normal_proxies=[]
    count = 1
    for proxy in proxies:
        print("第%s个。。" % count)
        count+=1
        try:
            response=requests.get(url,headers=header,proxies= {"http":proxy},timeout= 1)
            if response.status_code == 200:
                print("该代理IP可用：",proxy)
                normal_proxies.append(proxy)
            else:
                print("该代理IP不可用：",proxy)
        except Exception:
            print("该代理IP无效：", proxy)
            pass
    #print(normal_proxies)
    write_proxy(normal_proxies)
 
 
def get_html(url):
    header = {
        "User-Agent":
        "Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/67.0.3396.99 Safari/537.36",
    }
    response = requests.get(
        url,
        headers=header,
    )
    #print(response.text)
    get_proxy(response.text)
 
 
if __name__ == "__main__":
 
    url = "http://www.xicidaili.com/nn/"
    get_html(url)



