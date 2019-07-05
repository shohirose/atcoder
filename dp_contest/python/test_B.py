import B

def test1():
    n = 5
    k = 3
    h = [10, 30, 40, 50, 20]
    cost = B.calc_cost(n, k, h)
    assert cost[n-1] == 30

def test2():
    n = 3
    k = 1
    h = [10, 20, 10]
    cost = B.calc_cost(n, k, h)
    assert cost[n-1] == 20

def test3():
    n = 2
    k = 100
    h = [10, 10]
    cost = B.calc_cost(n, k, h)
    assert cost[n-1] == 0

def test4():
    n = 10
    k = 4
    h = [40, 10, 20, 70, 80, 10, 20, 70, 80, 60]
    cost = B.calc_cost(n, k, h)
    assert cost[n-1] == 40