
def isap(sequ):
    n = len(sequ)
    isAPFree = True


    for i in range(n - 2):
        for j in range(i + 1, n - 1):
            for k in range(j + 1, n):
                if (sequ[j] - sequ[i]) == (sequ[k] - sequ[j]):
                    isAPFree = False
                    break

    return isAPFree


def main():

    T = int(input())

    for _ in range(T):

        N = int(input())


        sequ = list(map(int, input().split()))


        if isap(sequ):
            print("YES")
        else:
            print("NO")
