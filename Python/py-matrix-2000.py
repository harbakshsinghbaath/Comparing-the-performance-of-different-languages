import time
cols,rows = 2000,2000
list1 = [[i + j for j in range(cols)] for i in range(rows)]
list2 = [[i - j for j in range(cols)] for i in range(rows)]
resultList = [[0 for _ in range(cols)] for _ in range(rows)]

start_time = time.time()
for i in range(rows):
     for j in range(cols):  
        for k in range(cols):
            resultList[i][j] += list1[i][k] * list2[k][j]

end_time = time.time()

time_taken = end_time - start_time
print(time_taken)
# execution time is 1922.107483625412 seconds