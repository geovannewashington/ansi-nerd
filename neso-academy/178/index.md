Basic of Asymptotic Analysys (part 4)

Big O notation provides an upper bound on how fast a function can grow. It guarantees that the function
will never grow faster than this bound for sufficiently large inputs.

Formal definition:

Let f(n) and g(n) be two functions.
We say that: f(n) = O(g(n)) (read as "f of n is Big O of g of n") if and only if there exists positive
constants c and n0 such that:
f(n) <= c.g(n) for all n >= n0

When this condition holds, it means f(n) does not grow faster than g(n) beyond a certain point.

What is n0?
n0 is a threshold value. It marks the point after which the growth relationship between f(n) and g(n)
consistently holds.
In other words, for input sizes greater than or equal to n0, the inequality remains true forever.
