import C

def test1():
    n = 3
    a = [10, 20, 30]
    b = [40, 50, 60]
    c = [70, 80, 90]
    h = C.calc_happiness(n, a, b, c)
    assert max(h[n-1, :]) == 210

def test2():
    n = 1
    a = [100]
    b = [10]
    c = [1]
    h = C.calc_happiness(n, a, b, c)
    assert max(h[n-1, :]) == 100

def test3():
    n = 7
    a = [6, 8, 2, 7, 4, 2, 7]
    b = [7, 8, 5, 8, 6, 3, 5]
    c = [8, 3, 2, 6, 8, 4, 1]
    h = C.calc_happiness(n, a, b, c)
    assert max(h[n-1, :]) == 46