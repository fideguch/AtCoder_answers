import numpy as np
N = int(input())
x = np.arange(N + 1, dtype=np.int64)
x[::3] = 0
x[::5] = 0
print(sum(x))
