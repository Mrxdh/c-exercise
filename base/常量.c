int main()
{
    int a = 100;
    
    long b = 100l;
    
    long long c = 100ll;

    long d = 100000000000l;

    long long e = 100000000000ll;
    
    // %d会把d当做int类型来输出，它认为d是4个字节的。由于d是long类型的，占用8个字节，但是输出d的时候，只会取其中4个字节的内容进行输出
    printf("%d\n", d);
    // 双引号里面的是%ld，表示输出1个long类型的整数
    printf("%ld\n", d);

    printf("%lld\n", e);

    return 0;
}
/**
 * long和int都能够存储整型常量，为了区分long和int，一般会在整型常量后面加个小写字母l，比如100l，表示long类型的常量。
 * 如果是long long类型呢，就加2个l，比如100ll。
 * 如果什么都不加，就是int类型的常量。
 * 因此，100是int类型的常量，100l是long类型的常量，100ll是long long类型的常量。
 * */