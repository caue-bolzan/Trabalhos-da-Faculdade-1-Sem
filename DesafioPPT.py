import random

rodadas = 0 
pontos_pc = 0
pontos_usuario = 0

while (rodadas < 5):
    escolha_usuario = int(input("o que vc escolhe 0=pedra 1=papel 2= tesoura:"))
    escolha_pc = random.randint(0,2)

    if (escolha_usuario == 0):
        print ("VOCE: pedra")
    elif (escolha_usuario == 1):
        print ("VOCE: papel")
    else:
        print ("VOCE: tesoura")

    if (escolha_pc == 0):
        print ("PC: pedra")
    elif (escolha_pc == 1):
        print ("PC: papel")
    else:
        print ("PC: tesoura")

    if (escolha_usuario == escolha_pc ):
        print ("Empate")
    elif (escolha_usuario == 0 and escolha_pc == 2):
        print ("voce ganhou")
        pontos_usuario += 1
    elif (escolha_usuario == 1 and escolha_pc == 0):
        print ("voce ganhou")
        pontos_usuario += 1
    elif (escolha_usuario == 2 and escolha_pc == 1):
        print ("voce ganhou")
        pontos_usuario += 1
    else:
        print ("voce perdeu")
        pontos_pc += 1
    rodadas += 1

print (f"{rodadas} rodadas")

if (escolha_usuario > escolha_pc):
    print (f"PARABENS VOCE GANHOU COM {escolha_usuario}")
elif (escolha_usuario < escolha_pc):
    print(f"QUE PENA VOCE PERDEU PARA {escolha_pc}")
else:
    print (f"EMPATE FICOU {escolha_usuario} X {escolha_pc}")
