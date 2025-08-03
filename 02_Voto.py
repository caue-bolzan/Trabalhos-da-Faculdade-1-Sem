idade = input(int("Qual sua idade?\n"))
alfabetizado = input(int("Você é alfabetizado?0-Não, 1-Sim\n"))

if idade < 16:
  print("Não vota")
elif idade > 17 and idade < 71 and alfabetizado == 1:
  print("Voto obrigatorio")
else:
  print("Voto facultativo")
    
