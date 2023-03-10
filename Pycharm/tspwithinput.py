import itertools
n = int(input("Enter the number of cities: "))
# dist = [[0, 0, 0, 0, 0], [0, 0, 10, 15, 20], [0, 10, 0, 25, 25], [0, 15, 25, 0, 30], [0, 20, 25, 30, 0]] # distance matrix
print("Enter the distance matrix:")
for i in range(n):
    row = list(map(int, input().split()))
    dist.append(row)

tour = list(range(n))  # current tour
bestDist = float('inf')  # best tour distance
bestTour = []  # best tour

for perm in itertools.permutations(tour):
    tourDist = 0  # current tour distance
    for i in range(n-1):
        tourDist += dist[perm[i]][perm[i+1]]
    tourDist += dist[perm[n-1]][perm[0]]  # return to starting city
    if tourDist < bestDist:
        bestDist = tourDist
        bestTour = list(perm)

print("Best tour distance:", bestDist)
print("Best tour:", bestTour)
