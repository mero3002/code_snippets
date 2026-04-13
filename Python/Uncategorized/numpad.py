numpad = ((1, 2, 3),
          (4, 5, 6),
          (7, 8, 9),
          ('*', 0, '#'))

for row in numpad:
    for item in row:
        print(item, end=" ")
    print()