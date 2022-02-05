# 数论基础（一）

- Primitive Pythagorean Triple 毕达哥拉斯三元组
$$
(a,b,c) \text{ such that } a^2 + b^2 = c^2, gcd(a,b,c)=1
$$

- Pythagorean Triples Theorem
$$
\text{ we will get every } (a,b,c) \text{ with } a \text{ odd }, \text{ and } b \text{ even by formulas} \\

a=st, b=\frac{s^2-t^2}{2}, c=\frac{s^2+t^2}{2}, \text{ where both } s \text{ and } t \text{ are odd integers},  \\
s>t\ge1, gcd(s,t)=1

$$

- Fermat's Last Theorem 费马大定理
$$
a^n+b^n=c^n \\
\text{has no solutions in positive integers if } n\ge3
$$

- Euclidean Algorithm 欧几里得算法（辗转相除法）
- Linear Equation Theorem
$$
\text{let }a,b\in\mathbb{Z}, a\ne0,b\ne0, g=gcd(a,b). \\
ax+by=g \text{ always has a solution }(x_1, y_1) \text{ in integers}\\
\text{ every solution can be obtained by } (x_1+k\cdot\frac{b}{g}, y_1-k\cdot\frac{a}{g}), \text{ where } k\in\mathbb{Z}
$$
- Prime Divisibility Property
$$
\text{let } p\in\mathbb{P}, \text{ and suppose } p|a_1a_2\cdots a_r \\
\text{then } p \text{ divides at least one of the factors } a_1,a_2,\cdots,a_r
$$
