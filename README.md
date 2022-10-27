# A-template-for-OI
超级模板！%%% for 小柴郡

## 更新日志:
### 2022/10/27
更新了离散化，数组输出。

####离散化:
```cpp

vector<int> Saratoga::Discretization(IteratorTYPE __first, IteratorTYPE __last, _Compare __comp)
```
使用方法：

传入两个迭代器(指针)`__first`与`__last`，表示一个左闭右开区间[`__first`,`__last`);一个比较函数 __comp。

返回值：一个`vector<int>`，表示离散化之后的数组 (即Rank)

行为：对数组进行离散化，使用比较函数自定义比较方式。

####数组输出
```cpp
void Misaka::Array_Print(ItType __first,ItType __end)
```

使用方法：
传入两个迭代器`__first`与`__end`，表示一个左闭右开区间[`__first`,`__end`);

返回值：无。

行为：依次输出[`__first`,`__end`)之间的值，仅限整数。
