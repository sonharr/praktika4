import time

res = 0
b = 3
c = 3
start_time = time.time()
for i in range(1, 100000001):
    res += b*2 + c - i
end_time = time.time()
print(res)
print(end_time - start_time)
