# A-template-for-OI
超级模板！%%% for 小柴郡
## 如何使用
### 快速IO `namespace Mashiro`
#### 快读

```cpp
void Mashiro::read(T& x, Args&... args)
```
```cpp
void Mashiro::read(T& x)
```
使用方法：

传入多个整数变量[^1]地址。

返回值：无。

行为：不用说了吧。

e.g.
```cpp
read(x,y,z,n);
```

#### 快输

```cpp
void Mashiro::write(T x, Args... args)
```
```cpp
void Mashiro::write(T x)
```

使用方法：

传入多个整数值。

返回值：无。

行为：不用说了吧。另外，输出的多个数之间自动用空格隔开。

e.g.
```cpp
write(x,y,z,n);
```

[^1]: 泛指所有整形存储的类型，包括但不限于`int`,`long long`,`__int128`。快输同

### 序列操作 `namespace Saratoga`
#### 离散化:
```cpp

vector<int> Saratoga::Discretization(IteratorTYPE __first, IteratorTYPE __last, _Compare __comp)
```
使用方法：

传入两个迭代器(指针)`__first`与`__last`，表示一个左闭右开区间[`__first`,`__last`);一个比较函数` __comp`。

返回值：一个`vector<int>`，表示离散化之后的数组 (即Rank)

行为：对数组进行离散化，使用比较函数自定义比较方式。

### 调试操作 `namespace Misaka`
#### 随机数
```cpp
T random(T l, T r)
```
使用方法:

传入两个参数`l`,`r`，表示一个闭区间[`l`,`r`]。

返回值：一个随机值，假定为x，满足
![渲染错误](https://latex.codecogs.com/svg.latex?x\in%20\left[l,r\right]\cap\mathbb{Z})

行为：生成一个给定范围内的随机整数并返回
#### 序列输出
```cpp
void Misaka::Array_Print(ItType __first,ItType __end)
```

使用方法：
传入两个迭代器`__first`与`__end`，表示一个左闭右开区间[`__first`,`__end`);

返回值：无。

行为：依次输出[`__first`,`__end`)之间的值，仅限整数。

### 比较CMP `namespace Cmp`
#### 最小值
```cpp
T Min(T a,T b,Args... args)
```
```cpp
T Min(T a,T b)
```

传入多个数值。

返回值：传入值中的最小值

行为：递归求解参数列表中的最小值，相比`std::min`，它的特点是能传入多个参数。

#### 最大值
```cpp
T Max(T a,T b,Args... args)
```
```cpp
T Max(T a,T b)
```

传入多个数值。

返回值：传入值中的最大值

行为：递归求解参数列表中的最大值，相比`std::max`，它的特点是能传入多个参数

--------

## 更新日志:
### 2022/10/27
更新了离散化，数组输出。
