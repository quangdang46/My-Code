n = int(input())
marksheet = [[input(), float(input())] for _ in range(n)]
second_highest = sorted(list(set([marksheet[i][1] for i in range(n)])))[1]
print('\n'.join([a for a, b in sorted(marksheet) if b == second_highest]))

