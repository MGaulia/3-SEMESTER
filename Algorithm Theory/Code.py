import datetime
import random


def apkeisti(E, i):
    if i == 0:
        return E
    Rez = [E[i]] + E[:i] + E[i + 1:]
    return Rez


def skaiciuoti(B):
    MM = []
    listas = B
    for i in range(0, len(listas)):
        C = apkeisti(listas, i)
        panaudoti = []
        for b in C:
            if b[0] not in panaudoti and b[1] not in panaudoti:
                panaudoti.append(b[0])
                panaudoti.append(b[1])
                result = []
                for i in range(0, len(panaudoti), 2):
                    result.append(panaudoti[i] + panaudoti[i + 1])
        MM.append([result,len(result)])

def generuoti_detailed():
    for kartai in range(10):
        V = ['AB', 'CD', 'EF', 'GH', 'IJ', 'KL', 'MN', 'OP', 'RS', 'TU', 'VZ', '12', '34', '56', '67', '89', 'ab', 'cd','ef', 'gh', 'ij', 'kl', 'mn', 'op', 'rs', 'tu', 'vz']
        for l in range(1,len(V)):
            for i in range(5,100,5):
                cut =  V[0:l]
                final = []
                for v in cut:
                    if random.randint(0, 100) > i:
                        final.append(v)
                start = datetime.datetime.now()
                for j in range(1000):
                    skaiciuoti(final)
                end = datetime.datetime.now()
                elapsed = end - start
                print(l,elapsed.total_seconds())


with open('duomenys.txt') as f:
    for line in f.read().splitlines():
        in_list = str(line.splitlines())
        in_list = in_list[2:len(str(line.splitlines()))-2]
        in_list = in_list.split(',')
        print(in_list)
        skaiciuoti(in_list)

print("LAIKO TYRIMAS:")
generuoti_detailed()