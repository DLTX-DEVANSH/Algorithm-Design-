**Since the worst case is when there is only one element left in the array**

so let the size of array 'S' after $k^{th}$ iteration be 

$$
	\lfloor \frac{S}{2^k} \rfloor
$$

so the loop to be terminated $\frac{S}{2^k} \le 1$

so 

$$
	\begin{aligned}
	& \frac{S}{2^k} \le 1 \\
	& S \le 2^k \\
	& lgS \le k
	\end{aligned}
$$

and as k must be integer , hence $k = \lceil lgS \rceil$

and hence $\Theta(lgn)$
