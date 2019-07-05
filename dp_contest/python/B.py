def calc_cost(n, k, h):
    cost = [1e10 for _ in range(n)]
    cost[0] = 0

    for i in range(1, n):
        for j in range(1, min(i+1, k+1)):
            cost[i] = min(cost[i], cost[i-j] + abs(h[i-j] - h[i]))

    return cost

def main():
    n, k = list(map(int, input().split()))
    h = list(map(int, input().split()))
    cost = calc_cost(n, k, h)
    print(cost[n-1])

if __name__ == "__main__":
    main()