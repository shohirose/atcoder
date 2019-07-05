import A

def test1():
    n = 4
    h = [10, 30, 40, 20]
    cost = A.calc_cost(n, h)
    assert cost[n-1] == 30

def test2():
    n = 2
    h = [10, 10]
    cost = A.calc_cost(n, h)
    assert cost[n-1] == 0

def test3():
    n = 6
    h = [30, 10, 60, 10, 60, 50]
    cost = A.calc_cost(n, h)
    assert cost[n-1] == 40