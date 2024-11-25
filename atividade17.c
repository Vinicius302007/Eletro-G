def contar_votos(votos):
    # Contadores para cada candidato
    votos_A = 0
    votos_B = 0
    votos_C = 0
    
    # Contando os votos
    for voto in votos:
        if voto == 'A':
            votos_A += 1
        elif voto == 'B':
            votos_B += 1
        elif voto == 'C':
            votos_C += 1
    
    # Exibindo o total de votos para cada candidato
    print(f"Votos para o candidato A: {votos_A}")
    print(f"Votos para o candidato B: {votos_B}")
    print(f"Votos para o candidato C: {votos_C}")
    
    # Determinando o vencedor
    if votos_A > votos_B and votos_A > votos_C:
        print("O vencedor é o candidato A!")
    elif votos_B > votos_A and votos_B > votos_C:
        print("O vencedor é o candidato B!")
    elif votos_C > votos_A and votos_C > votos_B:
        print("O vencedor é o candidato C!")
    elif votos_A == votos_B and votos_A > votos_C:
        print("Empate entre os candidatos A e B!")
    elif votos_A == votos_C and votos_A > votos_B:
        print("Empate entre os candidatos A e C!")
    elif votos_B == votos_C and votos_B > votos_A:
        print("Empate entre os candidatos B e C!")
    else:
        print("Empate entre os três candidatos!")
    
# Exemplo de votos dos 5 eleitores
votos = ['A', 'B', 'A', 'C', 'B']

# Chamando a função para contar os votos e determinar o vencedor
contar_votos(votos)
