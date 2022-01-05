/*You are given four integers: N, S, P, Q. You will use them in order to create the sequence a with the following pseudo-code.
a[0] = S (modulo 2^31)
for i = 1 to N-1
    a[i] = a[i-1]*P+Q (modulo 2^31) 
Your task is to calculate the number of distinct integers in the sequence a.


