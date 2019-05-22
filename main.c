这段代码中我们创建了一些不同数据类型的数组。由于数组是C语言工作机制的核心，有大量的方法可以用来创建数组。我们暂且使用type name[] = {initializer};语法，之后我们会深入研究。这个语法的意思是，“我想要那个类型的数组并且初始化为{..}”。C语言看到它时，会做这些事情：
查看它的类型，以第一个数组为例，它是int。
查看[]，看到了没有提供长度。
查看初始化表达式{10, 12, 13, 14, 20}，并且了解你想在数组中存放这5个整数。
在电脑中开辟出一块空间，可以依次存放这5个整数。
将数组命名为areas，也就是你想要的名字，并且在当前位置给元素赋值。
