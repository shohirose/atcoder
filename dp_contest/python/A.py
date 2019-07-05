def calc_cost(n, h):
    cost = [0 for _ in range(n)]
    cost[1] = abs(h[0] - h[1])

    for i in range(2, n):
        c1 = cost[i-2] + abs(h[i-2] - h[i])
        c2 = cost[i-1] + abs(h[i-1] - h[i])
        cost[i] = c1 if c1 < c2 else c2

    return cost

def main():
    n = int(input())
    h = list(map(int, input().split()))
    cost = calc_cost(n, h)
    print(cost[n-1])

if __name__ == "__main__":
    main()