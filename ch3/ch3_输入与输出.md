

## 3.1 printf函数

printf(格式串，表达式1，表达式2，表达式3)；

格式串=普通字符+转换说明(conversion specification)

转换说明就是%开头的字符，包含格式化信息。

-m.pX

m 表示minimum field width 最小字段宽度，如果要显示的比m大，自动扩充。
p 表示precision 精度，
X 表示 converiosn specifier 转换说明符

理论上`\` 才是表示转义符号，但是想打印出`%`时，转义符号是`%`，只有`%%`这样才能打印出`%`.因为`printf("\%")` 这样编译器会提示你，%后面需要指定转换说明符，所以在这个地方就编译不通过。也就是在`\%`这样看可以，但是`%s`这样组合看就不行。

## 3.2 scanf函数

本质上是模式匹配函数，格式串与输入字符串之间的匹配。