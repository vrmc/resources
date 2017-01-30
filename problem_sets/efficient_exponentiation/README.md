Taken from [Project Euler](https://projecteuler.net/problem=122).

> The most naive way of computing n^15 requires fourteen multiplications:
> 
> n × n × ... × n = n^15
>
> But using a "binary" method you can compute it in six multiplications:
> 
> n × n = n^2
> n^2 × n^2 = n^4
> n^4 × n^4 = n^8
> n^8 × n^4 = n^12
> n^12 × n^2 = n^14
> n^14 × n = n^15
>
> However it is yet possible to compute it in only five multiplications:
> 
> n × n = n^2
> n^2 × n = n^3
> n^3 × n^3 = n^6
> n^6 × n^6 = n^12
> n^12 × n^3 = n^15
> 
> We shall define m(k) to be the minimum number of multiplications to compute n^k; for example m(15) = 5.
> For 1 ≤ k ≤ 200, find ∑ m(k).

# Leaderboard

No one has posted a solution yet.

1. `wei_en_1.py` (non-general DFS): 1582, 0m0.289s

# Notes

It seems that the best solution so far considers only star addition chains, or [addition chains][addition-chain] which are derived from the largest number, added to another number in the chain. For example,

    1 -> 2 (1 + 1) -> 4 (2 + 2) -> 8 (4 + 4) -> 12 (8 + 4) -> 14 (12 + 2)

is such a chain, while:

    1 -> 2 (1 + 1) -> 4 (2 + 2) -> 8 (4 + 4) -> 16 (8 + 8) -> 18 (16 + 2) -> 24 (16 + 8)

is not, as adding 18 with any other number in the chain will not give you 24. Minimum addition chains (addition chains with the smallest length) are only star chains for n <= 2500 and some values beyond 2500. As the best solution considers only star addition chains, it does not generalize.

Furthermore, the problem of finding the shortest addition chain cannot be solved by dynamic programming as it does not satisfy the assumption of optimal substructures (refer to [Addition-chain exponentiation][addition-chain-exponentiation]), and is a [NP-complete problem][np-complete]. At the moment, this problem isn't solvable in the general case within a reasonable amount of time, and is probably too difficult to approach.

[addition-chain]: https://en.wikipedia.org/wiki/Addition_chain
[addition-chain-exponentiation]: https://en.wikipedia.org/wiki/Addition-chain_exponentiation
[np-complete]: https://en.wikipedia.org/wiki/NP-completeness
