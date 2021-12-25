# Fundamentos de Programação com C

<img align="center" alt="Davi-C" height="30" width="40" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg">
  
## Descrição

<p>
  Este repositório possui uma coleção de códigos básicos em linguagem C divididos por ordem cronológica de produção de acordo com o cronograma da disciplina da qual eles pertencem. Como esperado, o nível de dificuldade aumenta conforme o passar das semanas.
</p>

## Executando códigos em C
<p>
  Os códigos aqui presentes foram feitos e testados no Ubuntu 20.04. Para aqueles que utilizam outros sistemas operacionais não derivados do linux é possível que configurações adicionais sejam necessárias. Para facilitar o uso e visualização desses códigos, pode ser utilizada uma IDE, sigla em inglês para Ambiente de Desenvolvimento Integrado, tal como o DEV C++.
</p>

### Compilação
<p>
  Códigos em linguagem C podem ser compilados facilmente utilizando o GCC com o comando:
</p>

```c
gcc [nome-do-arquivo].c -o [nome-do-arquivo]
```
<p>
  Neste caso, tomamos por base que isso esteja sendo feito em um SO que possua tais especificações.
</p>

### Execução
<p>
  É possível utilizar o comando:
</p>

```c
./[nome-do-arquivo]
```
<p>
  para executar o arquivo executável criado na etapa de compilação.
</p>

### Múltiplos arquivos
<p>
  É possível que um determinado programa tenha seu código dividido em vários arquivos. Nesse caso, podemos compilar cada programa separadamente e depois montá-los de uma vez só. Para isso, utilizamos o seguinte comando (apenas para compilação):
</p>

```c
gcc -c [nome-do-arquivo].c
```
<p>
  Para montar os vários arquivos em um executável, após todos devidamente compiláveis, utilizamos:
</p>

```c
gcc -o [nome-do-executável] [nome-programa-1].o [nome-programa-2].o [nome-programa-3].o ...
```

###### end
