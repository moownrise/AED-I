==========================================================================================================================================
TRABALHO 2 (LeetCODE - 1792):
Sou Silvana Dias, turma M1.

==========================================================================================================================================

==========================================================================================================================================

>>>>> TRABALHO AGENDA BUFFER: <<<<<

[Nome do arquivo: pBuffer.c]

Me chamo Silvana, sou da M1, esse é o trabalho da Agenda pBuffer.

A função que mais tive dificuldades foi a função listar_pessoas, tanto que tive que refazer muitas coisas por causa dela, era a unica que 
estava me dando problemas depois de um longo tempo fazendo o código. 

Eu modifiquei o código muitas vezes até chegar no resultado final. As partes que mais modifiquei foi a função inserir_pessoa, listar_pessoas e a main. 

>>>>> Agenda - Instruções <<<<<

Faça uma agenda com o seguinte menu:

1. Adicionar Pessoa (Nome, Idade, email)

2. Remover Pessoa

3. Buscar Pessoa

4. Listar todos

5. Sair

Desafio: Não pode criar variáveis, mas sim um buffer de memória (void *pBuffer).

Regras:

Nenhuma variável pode ser declarada em todo o programa, somente ponteiros. Todos os dados do programa devem ser guardados dentro do pBuffer.

Nem mesmo como parâmetro de função. Só ponteiros que apontam para dentro do pBuffer.

Exemplo do que não pode: int c; char a; int v[10]; void Funcao(int parametro).

Não pode usar struct em todo o programa.

>>>>> Testes realizados <<<<<

1. Teste da função adicionar pessoa:

- O programa adicionou o primeiro registro com sucesso.
- O programa adicionou vários registros consecutivos (2, 3, 5), todos foram armazenados corretamente.
  
Nome:
- O programa adicionou registros com nome curto.
- O programa adicionou registros de nome com espaços.
- O programa não adicionou nome longo demais (com mais de 50 caractere)
- O programa adicionou nome com caractere especial.
  
Idade:
- O programa adicionou idades em números positivos. 

Email:
- O programa não adicionou email longo demais (com mais de 50 caractere).
- O programa adicionou email com espaços.
- O programa adicionou registros de email curto.

2. Teste da função remover pessoa:

- A remoção de qualquer registro depende do nome de busca.
- O nome de busca precisa ser exatamente o nome registrado na agenda.
- O programa não aceita duas pessoas com os mesmos dados.
- O programa removeu um registro encontrado na primeira posição, na última posição e em uma posição intermediária.

3. Teste da função buscar pessoa:

- O programa buscou registros em uma agenda vazia, e informou que não havia registros.
- O programa encontrou o primeiro, último e um registro intermediário em uma agenda com múltiplos registros.

4. Teste da função listar pessoas:

- O programa listou registros em uma agenda vazia, e informou corretamente que não havia registros.
- O programa listou registros em uma agenda com um único registro, e ele foi exibido corretamente.
- O programa listou múltiplos registros (2, 5, 10), e todos foram exibidos na ordem correta (ordem de entrada).
- O programa exibiu os registros restantes corretamente após adições e remoções aleatórias.

==========================================================================================================================================


==========================================================================================================================================

TRABALHO 1 (LeetCODE - 118):
Sou Silvana Dias, turma M1.
Eu modifiquei em casa: Em casa eu fiz a função main, que eu não tinha feito em aula por ser no LeetCode, e modidifiquei três linhas do código que fiz em aula (as linhas: 2, 14, 17 e 25):
Linha 2: em casa coloquei a biblioteca stdlib 
Linha 14: em aula fiz (j == 0) em casa ( j == 0 || j == i )
Linha 17: em aula fiz arr[i][j] = arr[i - j][j] + arr[i - j][j + 1] em casa arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
Linha 25: em aula fechei o } na linha 25, em casa apaguei e coloquei ele na linha 20
Sobre o que funciona e não: Eu não ter feito a fução main mesmo, eu na verdade fiz, por ser no vscode, mas fiz de forma completamente errada, depois que fiz o código ocorreu normal, tirando isso não testei coisas diferentes no código
