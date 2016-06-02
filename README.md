# Linux Device Drivers Tutorial #

Tutorial com exemplos para criação de Devices Drivers para Linux.

## Índice ##

1. Introdução
2. Passos para a criação dos device drivers
  2. 
  2. LKM
  2. Hello World
  2. Compilando
  2. Inserindo e removendo módulos
3. Membros
4. Fontes

## 1. Introdução ##

Este post tem objetivo de introduzir o desenvolvimento de device drivers (mecanismos de acesso ao hardware) para distribuições Linux disponibilizando um projeto para o leitor, ao final deste relatório, ser capaz de prosseguir o aprendizado. Neste projeto é um drive para ... .

## 2. Passos para a criação dos device drivers ##

### 2.1. A ###

### 2.2. LKM - Loadable Kernel Modules ###

Com o LKM é possível adicionar e remover capacidades do kernel em tempo de execução. Chamamos de módulo cada unidade que estenda as capacidades do kernel.

Comandos:
 * insmod
 * rmmod
 * modprobe
 * depmod

### 2.3. Hello World ###

Este projeto é o Hello World para o desenvolvimento de drivers. A estrutura da programação é um pouco diferente da estrutura de programação tradicional, pois, em um arquivo .c não temos nenhum método main. Vejamos a seguir como funciona a estrutura do código deste projeto.

// explicação do código

### 2.4. Compilando ###

Para compilarmos o projeto, precisamos apenas de utilizar o seguinte comando no terminal:

    make

### 2.5. Inserindo e removendo módulos ###



## 3. Membros ##

* Breno Maurício de Freitas Viana
* Felipe Barbalho Rocha

## 4. Fontes ##
