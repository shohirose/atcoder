import numpy as np

def calc_wsum(n, wmax, w, v):
    vmax = sum(v)
    wlimit = sum(w) + 1
    wsum = np.full((n + 1, vmax + 1), wlimit, dtype=np.int64)
    wsum[:, 0] = 0

    for i in range(1, n + 1):
        for j in range(1, vmax + 1):
            if j >= v[i - 1]:
                wsum[i, j] = min(wsum[i - 1, j], wsum[i - 1, j - v[i - 1]] + w[i - 1])

    return wsum

if __name__ == '__main__':
    n, wmax = list(map(int, input().split()))
    w = np.zeros(n, dtype=np.int64)
    v = np.zeros(n, dtype=np.int64)
    wsum = calc_wsum(n, wmax, w, v)
    print(max(wsum[n, :]))