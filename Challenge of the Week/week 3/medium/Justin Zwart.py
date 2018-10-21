# variables
roundsPlayed = int(input())
gameScores = []
scores = [100, 100]

# input amount of times equal to initial input
for i in range(roundsPlayed):
    gameScores.append(input())

# play game
for i in gameScores:
    if int(i[0]) > int(i[-1]):
        scores[1] -= int(i[0])
    elif int(i[0]) < int(i[-1]):
        scores[0] -= int(i[-1])

# output
print(scores[0])
print(scores[1])