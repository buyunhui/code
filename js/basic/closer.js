
// ��������0:
var zero = function (f) {
    return function (x) {
        return x;
    }
};

// ��������1:
var one = function (f) {
    console.log("=======================");
    return function (x) {
        console.log(f(x));
        console.log("===========2============");
        return f(x);
    }
};

// ����ӷ�:
function add(n, m) {
    console.log('print 1 times');
    return function (f) {
        return function (x) {
            console.log("%s",x);
            return m(f)(n(f)(x));
        }
    }
}

// ��������2 = 1 + 1:
var two = add(one, one);
(two(function () {
    console.log('print 55 times');
    return '22';
}))();

/*// ��������3 = 1 + 2:
var three = add(one, two);

// ��������5 = 2 + 3:
var five = add(two, three);

// ��˵����3����3����˵����5����5������ô֤����

// �Ǻǣ�������:

// ��3��һ������,���ӡ3��:
(two(function () {
    console.log('print 2 times');
}))();

// ��5��һ������,���ӡ5��:
(five(function () {
    console.log('print 5 times');
}))(); */