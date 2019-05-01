var arr = [1, 2, 3];
arr.length; // 3
arr.length = 6;
arr; // arr��Ϊ[1, 2, 3, undefined, undefined, undefined]
arr.length = 2;
console.info(arr); // arr��Ϊ[1, 2]

var a = [1,2,3]

a.forEach(function (element, index, array) {
    // element: ָ��ǰԪ�ص�ֵ
    // index: ָ��ǰ����
    // array: ָ��Array������
    console.info(element + ', index = ' + index);
});

var m = new Map([[1, 'x'], [2, 'y'], [3, 'z']]);
m.forEach(function (value, key, map) {
    console.info(value, key, map);
});

function foo(a, b, ...rest) {
    console.log('a = ' + a);
    console.log('b = ' + b);
    console.log(rest);
}

foo(1, 2, 3, 4, 5);
// ���:
// a = 1
// b = 2
// Array [ 3, 4, 5 ]

foo(1);
// ���:
// a = 1
// b = undefined
// Array []