string = input("Digite uma palavra ")

cont = 0

for char in string:
    if char == 'a' or char == 'A':
        cont += 1

if cont > 0: 
    print(f"A letra 'a' aparece {cont} vez(es) na palavra")
else:
    print("A letra 'a' nao aparece nenhuma vez na palavra")