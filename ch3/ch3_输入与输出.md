

## 3.1 printf函数

printf(格式串，表达式1，表达式2，表达式3)；

格式串=普通字符+转换说明(conversion specification)

转换说明就是%开头的字符，包含格式化信息。

-m.pX

m 表示minimum field width 最小字段宽度，如果要显示的比m大，自动扩充。
p 表示precision 精度，
X 表示 converiosn specifier 转换说明符