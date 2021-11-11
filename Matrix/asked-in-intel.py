# Convert the given matrix into square matrix by using 1 and then print the sum of the diagnols of the matrix if 
# * the element of that diagnol appears evenly in the matrix except that diagnol element then it's considered
# * the element appears odd times then don't consider it in the sum

# Test case
# Input
# 2 3
# [[1, 2, 3], [2, 3, 3]]

# Output
# 5

# Explanation
# Converting the matrix to square matrix [[1,2,3], [2,3,3], [1,1,1]]
# as 1, 3, 1 all the diagnol elements are repeating evenly in the matrix then the sum is 5

def convert_to_square(matrix, m, n):
    if n > m:
        remaining_rows = n - m
        for i in range(remaining_rows):
            matrix.append([1]*n)
            
    else:
        remaining_coloumns = m - n
        for i in range(m):
            matrix[i].extend([1]*remaining_coloumns)
matrix = [[1,2,3], [2,3,1]]
m = 2
n = 3
convert_to_square(matrix, m, n)
diagnols = []

for i in range(n):
    for j in range(n):
        if(i == j):
            diagnols.append(matrix[i][j])

ctr = 0
count = 0
for i in range(len(diagnols)):
    for j in range(n):
        for k in range(n):
            if( j == k):
                continue
            if(diagnols[i] == matrix[j][k]):
                ctr += 1
                
    if(ctr % 2 == 0):
        count += diagnols[i]
    # print(diagnols[i],"found ", ctr, "many times in matrix")
        
    ctr = 0
print(count)
