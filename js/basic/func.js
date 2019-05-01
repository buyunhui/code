var xiaoming = {
    name: 'С��',
    birth: 1990,
    age: function () {
        var that = this; // �ڷ����ڲ�һ��ʼ�Ͳ���this
        function getAgeFromBirth() {
            var y = new Date().getFullYear();
            return y - that.birth; // ��that������this
        }
        return getAgeFromBirth();
    }
};

console.log("%s", xiaoming.age()); // 25

function getAge() {
    var y = new Date().getFullYear();
    return y - this.birth;
}

var xiaoming = {
    name: 'С��',
    birth: 1990,
    age: getAge
};

xiaoming.age(); // 25
getAge.apply(xiaoming, []); // 25, thisָ��xiaoming, ����Ϊ��

function pow(x) {
    return x * x;
}

var arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];
var results = arr.map(pow); // [1, 4, 9, 16, 25, 36, 49, 64, 81]
console.log(results);


