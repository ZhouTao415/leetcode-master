# 自动驾驶 C++ 面经

Bibliography: 
- [C++面经](https://zhuanlan.zhihu.com/p/675399586)
  
## 1. 开始
The purpose of this text is to organize commonly asked questions in interviews. For specific details, it is necessary to refer to books for study, such as 
- "C++ Primer"
- "Effective C++"
- "Inside the C++ Object Model"
The title, consistent with the book "C++ Primer."

### 1.1. C 和 C++ 的区别
  
设计思想上:
- C++ 是面向对象的语言, C 是面向过程的语言. [Case](https://www.zhihu.com/question/24425316)

语法上:
- C++ 具有封装/继承/多态三种特性.
- C++ 相比 C, 增加了类型安全的功能, 比如强制类型转换.
- C++ 支持范式编程, 比如模板类/函数模板等.

## 2. 变量和基本类型
### 2.1. 复合类型
复合类型(compound type)是指基于其他类型定义的类型. 最常见的是引用(references)和指针(pointers).

**引用(references):**

引用即别名: 引用(reference)为对象起了另外一个名字, 引用类型引用(refers to)另外一种类型.
- 定义引用时, 程序把引用和它的初始值绑定在一起, 而不是将初始值拷贝给引用. 一旦初始化完成, 引用将和它的初始值对象一直绑定在一起. 因为无法令引用重新绑定到另外一个对象, 因此引用必须初始化.
- 因为引用不是一个对象, 所以不能定义引用的引用.

**指针(pointers):**

指针(pointer)是指向(point to)另外一种类型的复合类型.
- 指针无需在定义时赋初值.
- 指针本身就是一个对象, 允许对指针赋值和拷贝, 而且在指针的生命周期内它可以先后指向几个不同的对象.

| 指针  | 数组 |
|-------|----|
|保存数据的地址. |保存数据.|
|间接访问数据, 首先获得指针的内容, 然后将其作为地址, 从该地址中提取数据. |直接访问数据.|
|通常用于动态的数据结构. |通常用于固定数目且数据类型相同的元素. |
|通过malloc分配内存, free释放内存. |隐式的分配和删除. |
|通常指向匿名数据, 操作匿名函数. |自身即为数据名. |
|指针取地址得到的是指针变量自身的地址. |数组名取地址得到的是数组名所指元素的地址(数组的第一个元素的地址). |
|指针能更改名字 |数组是固定大小, 数组一经定义, 就不能改变数组名. |
