import E

def test1():
    N = 3
    W = 8
    w = [3, 4, 5]
    v = [30, 50, 60]
    wsum = E.calc_wsum(N, W, w, v)
    print(wsum)
    assert min(wsum[N, 1:]) == 90