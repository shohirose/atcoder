import numpy as np

def calc_vsum(n, wmax, w, v):
    vsum = np.zeros((n + 1, wmax + 1), dtype=np.int64)

    for i in range(1, n + 1):
        for j in range(1, wmax + 1):
            vsum[i, j] = vsum[i - 1, j]
            if j >= w[i - 1]:
                vsum[i, j] = max(vsum[i, j], vsum[i - 1, j - w[i - 1]] + v[i - 1])

    return vsum

def main():
    n, wmax = list(map(int, input().split()))
    w = np.zeros(n, dtype=np.int64)
    v = np.zeros(n, dtype=np.int64)
    vsum = calc_vsum(n, wmax, w, v)
    print(max(vsum[n, :]))

if __name__ == '__main__':
    main()