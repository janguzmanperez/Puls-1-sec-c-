import time

hores = int(input())
minuts = int(input())
segons = int(input())
nonstop = True

while True:
    if segons <= 59:
        time.sleep(1)
        segons = segons + 1

    if hores < 10:
        print(f"0", end="")
    print(f"{hores}:", end="")
    if minuts < 10:
        print(f"0", end="")
    print(f"{minuts}:", end="")
    if segons < 10:
        print(f"0", end="")
    print(segons)

    if segons == 60:
        segons = 0
        minuts = minuts + 1

    if minuts == 60:
        minuts = 0
        hores = hores + 1

    if hores == 24:
        hores = 0
