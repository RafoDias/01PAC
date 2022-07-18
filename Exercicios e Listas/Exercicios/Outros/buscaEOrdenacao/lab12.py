from decimal import *
from mpmath import mp

# Get-Content arquivo.txt | indica qual arquivo usar como entrada. Informamos o diretório do bash do python e então mandamos ele interpretar o programa
# Get-Content input01.txt | E:/msys64/mingw64/bin/python.exe ./lab12.py

getcontext().prec = 36
mp.dps = 36
PI = Decimal(str(mp.pi))

def Somatorio(b, x):
    i = 1
    soma = 0
    while(i <= 100):
        soma += 1 / (i**(b*x+PI))
        i+= 1
    return soma

def Antimateria(a, b, c, d, x):
    return (PI + a*Decimal(x).exp() - Decimal(Somatorio(b, x))) / (Decimal(-Decimal.sqrt(c*x)).exp() + d*(2*(PI**3) - x))

def Get_Parameters():
    for i in params:
        x = Decimal(input())
        params[i] = x

def Merge_Sort(array):
    tamanho = len(array)
    if tamanho > 1:
        # Divide-se o array em 2, usando o "meio" como referência
        meio = tamanho // 2 # // é operador para floor division, arredondando o resultado para o maior inteiro mais próximo
        
        # Definindo os arrays da esquerda e da direita
        esquerda = array[:meio]
        direita = array[meio:]
        
        # Chamando a função para a esquerda e a direita
        Merge_Sort(esquerda)
        Merge_Sort(direita)
        
        # Unir (merge) os arrays após as divisões recursivas
        i = j = k = 0
    
        # O array da esquerda e da direita já se encontram ordenados. Comparar qual
        # o menor elemento entre os dois e armazenar no array k, em ordem.
        while (i < len(esquerda) and j < len(direita)):
            if (esquerda[i][1] < direita[j][1]):
                array[k] = esquerda[i]
                i+= 1
            else:
                array[k] = direita[j]
                j += 1
            k += 1
        
        # Se um dos arrays já tiver sido varrido, preencher o array final com o array que resta
        while (i < len(esquerda)):
            array[k] = esquerda[i]
            i += 1
            k += 1
        
        while (j < len(direita)):
            array[k] = direita[j]
            j += 1
            k += 1
    return



# Main program
    """ TESTE
    a = b = c = d = Decimal(0.1)
    y = Antimateria(a, b, c, d, Decimal(0.))
    print(y)
    """

def Busca_Binaria(min, max, target_d):
    reverse = False
    if (Decimal(abs(max - min)) <= erro):
        getcontext().prec += 1
        reverse = True
        
    half = Decimal((min + max) / 2)
    
    # print("min: {0:10.40} | max: {1:10.40} | half: {2:10.40}".format(min, max, half))
    
    min_d = Decimal(Antimateria(params[0], params[1], params[2], params[3], min))
    max_d = Decimal(Antimateria(params[0], params[1], params[2], params[3], max))
    half_d = Decimal(Antimateria(params[0], params[1], params[2], params[3], Decimal(half)))
    
    # print("min_d: {0:10.36} | max_d: {1:10.36} | half_d: {2:10.36}".format(min_d, max_d, half_d))
    
    mindiff = Decimal(abs(min_d - target_d))
    maxdiff = Decimal(abs(max_d - target_d))
    halfdiff = Decimal(abs(half_d - target_d))
    
    # print("mindiff: {0:10.36} | maxdiff: {1:10.36} | halfdiff: {2:10.36} | erro: {3:10.36}".format(mindiff, maxdiff, halfdiff, erro))
    
    
    if (mindiff <= erro):
        return Decimal(min)
    elif (maxdiff <= erro):
        return Decimal(max)
    elif (halfdiff <= erro):
        return Decimal(half)
        
    if (target_d > half_d):
        min = half
    else:
        max = half
        if (reverse):
            getcontext().prec -= 1
    return Busca_Binaria(min, max, target_d)


planetas = []
params = []
erro = Decimal(str(10**(-32)))
number_of_planets = int(input())

while(number_of_planets > 0):

    planetas.clear()
    params.clear()
    params = list(range(4))
    i = int(0)
    while(i < number_of_planets):
        name = input()
        distance = input()
        plan_dist = Decimal(distance)
        plan_info = [name, plan_dist]
        planetas.append(plan_info)
        i += 1
    i = 0
    
    Get_Parameters()

    max_dist = Decimal(Antimateria(params[0], params[1], params[2], params[3], Decimal(50.)))

    Merge_Sort(planetas)

    j = len(planetas) - 1
    alvo = -1
    while (j >= 0):
        if planetas[j][1] < max_dist:
            alvo = j
            break
        j -= 1

    if alvo < 0:
        print("GRAU~~")
    else:
        qtd_antimateria = Busca_Binaria(Decimal(0.), Decimal(50.), planetas[alvo][1])
        
        print('{0}\n{1:20.28f}'.format(planetas[alvo][0], qtd_antimateria))
    
    number_of_planets = int(input())
    