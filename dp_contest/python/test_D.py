import D

def test1():
    N = 3
    W = 8
    w = [3, 4, 5]
    v = [30, 50, 60]
    vsum = D.calc_vsum(N, W, w, v)
    print(vsum)
    assert max(vsum[N, :]) == 90
    
def test2():
    N = 5
    W = 5
    w = [1, 1, 1, 1, 1]
    v = [1e9, 1e9, 1e9, 1e9, 1e9]
    vsum = D.calc_vsum(N, W, w, v)
    print(vsum)
    assert max(vsum[N, :]) == 5e9


def test3():
    N = 6
    W = 15
    w = [6, 5, 6, 6, 3, 7]
    v = [5, 6, 4, 6, 5, 2]
    vsum = D.calc_vsum(N, W, w, v)
    print(vsum)
    assert max(vsum[N, :]) == 17