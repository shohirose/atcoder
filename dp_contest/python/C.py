import numpy as np

def calc_happiness(n, a, b, c):
    h = np.zeros((n, 3), dtype=int)
    h[0, 0] = a[0]
    h[0, 1] = b[0]
    h[0, 2] = c[0]

    for i in range(1, n):
        h[i, 0] = h[i-1, 1] + a[i] if h[i-1, 1] > h[i-1, 2] else h[i-1, 2] + a[i]
        h[i, 1] = h[i-1, 0] + b[i] if h[i-1, 0] > h[i-1, 2] else h[i-1, 2] + b[i]
        h[i, 2] = h[i-1, 0] + c[i] if h[i-1, 0] > h[i-1, 1] else h[i-1, 1] + c[i]

    return h

def main():
    n = int(input())
    a = np.zeros(n, dtype=int)
    b = np.zeros(n, dtype=int)
    c = np.zeros(n, dtype=int)

    for i in range(n):
        a[i], b[i], c[i] = list(map(int, input().split()))

    h = calc_happiness(n, a, b, c)
    print(max(h[n-1,:]))

if __name__ == '__main__':
    main()