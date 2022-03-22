import functools
@functools.lru_cache()
def f(x):
    a = [1,1,1,2,3,2]
    if x < 6:
        return a[x]
    else:
        return f(x-1) = f(x-3) - f(x-5)

