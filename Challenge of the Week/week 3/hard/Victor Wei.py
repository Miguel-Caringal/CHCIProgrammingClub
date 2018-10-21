n = int(input())
a1 = str(input())
a1 = a1.split(" ")
a2 = str(input())
a2 = a2.split(" ")

pairs = []

for i in range(0, n):
  pairs.append({a1[i], a2[i]})

good = True

for i in range(0, len(pairs)):
  counter = 0
  for j in range(0, len(pairs)):
    if pairs[i] == pairs[j]:
      counter += 1
  if counter != 2:
    good = False
if good:
    print("good")
else:
    print("bad")