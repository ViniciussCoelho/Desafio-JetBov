# Desafio JetBov


![Boi na Área](https://user-images.githubusercontent.com/71980503/127778696-fb1e6968-e529-4bae-a420-55d1b9ff0937.png)

# Descrição:

Programa desenvolvido para o Desafio da empresa JetBov. O programa permite aos pecuaristas fazer a simulação de rotação dos animais nas
áreas da sua fazenda.

# Tecnologia utilizada:

* C

# Bibliotecas utilizadas:

Eu fiz uso apenas da biblioteca padrão da linguagem C.

* stdio.h
* stdlib.h

# O que precisa para rodar:

Basta ter instalado o GCC (compilador da linguagem c), e uma IDE.

Funcionalidades:

* Adição de uma área da fazenda e seu GMD
* Adição de um novo animal
* Listagem de todos os animais
* Mostra um animal especifico através de seu ID   
* Mudança do animal de uma área para outra

# Como funciona?:

O programa possui um menu de opções onde o usuário digita o número da opção desejada. Após o cadastramento dos animais e das áreas o pecuarista pode movimentar o gado da forma que desejar, e também consultar os animais já cadastrados e suas respectivas informações.

Um ponto a destacar é que a identificação de cada área e animal é feita a partir do ID, mostrado para o usuário sendo de 1 até 100 para os animais, e de 1 até 10 para as áreas (vale destacar aqui que para o programa, os IDs vão de 0 até 99, e de 0 até 9 respectivamente. O usuário passa o id que ele deseja, e o próprio programa decrementa 1 para localizar corretamente no vetor).

Os IDs são dados em ordem numérica crescente, então fica fácil para o pecuarista saber o id de um animal ou área, para visualizar o ID de cada animal basta listar todos eles, e pronto!

O usuário também pode nomear os animais, seja pelo número do brinco, ou qualquer outra coisa que seja interessante!

Utilizar ID ao invés de nomes para listagem ou até mesmo a mudança de área fica mais simples, pois o limite de animais pode ser editado facilmente no início do programa. Ou seja, os nomes adotados pelo usuário em cada animal são apenas para facilitar em casos de se esquecer um ID, por exemplo.

O programa não possui lista de áreas, mas para saber o ID é só ver a ordem cadastrada, começa pelo número 1 e vai até o 10.

# O que pode ser adicionado no programa:

* Uma função para deletar ou editar uma área ou animal
* Adicionar a data em que o animal foi colocado ou retirado de uma área, para facilitar a administração

# Conclusão:

Consegui resolver o desafio proposto em um tempo bom, foi divertido programar em uma linguagem que aprendi na faculdade. Não fiz comentários no código para não poluir muito visualmente, e também não achei necessário, está bem explícito e fácil de entender.

No mais, agradeço a JetBov por propor o desafio ;)!
