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
3. USB
4. Conclusão
5. Membros
6. Fontes

## 1. Introdução ##

Este post tem objetivo de introduzir o desenvolvimento de device drivers (mecanismos de acesso ao hardware) para distribuições Linux disponibilizando um projeto para o leitor, ao final deste relatório, ser capaz de prosseguir o aprendizado. Este projeto é um drive para reconhecimento de dispositivos USB.

## 2. Passos para a criação dos device drivers ##

### i. O que instalar? ###



### ii. LKM - Loadable Kernel Modules ###

Antes de iniciarmos o desenvolvimento do projeto devemos ter em mente, . Com o LKM é possível adicionar e remover capacidades do kernel em tempo de execução. Chamamos de módulo cada unidade que estenda as capacidades do kernel.

... :

Para adicionar módulos ao kernel:

    insmod

Para remover módulos ao kernel:

    rmmod

Para adicionar/remover módulos já presentes no kernel:

    modprobe

Gera modules.dep e map:

    depmod

### iii. Hello World ###

Este projeto é o Hello World para o desenvolvimento de drivers. A estrutura da programação é um pouco diferente da estrutura de programação tradicional, pois, em um arquivo .c não temos nenhum método main. Vejamos a seguir como funciona a estrutura do código deste projeto.

O código a seguir é do arquivo hello.c, os comentários explicam a funcionalidade de cada função.

```c
#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

// Este método é chamado quando o módulo é carregado
static __init int hello_init(void) {
	// Função parecida como printf
	printk(KERN_INFO "Hello, world!\n");
	return 0;
}

// Este método é chamado quando o módulo é removido
static __exit void hello_exit(void) {
	// Função parecida como printf
	printk("Goodbye, curel world!\n");
}

module_init(hello_init);
module_exit(hello_exit);
```

O tipo "__init" indica que o módulo pode destruir essa função após o carregamento.

```c
static __init int hello_init(void) {...};
```

O tipo "__exit" indica que o módulo pode destruir essa função só vai ser chamada na remoção do módulo.

```c
static __exit int hello_exit(void) {...};
```

### iv. Compilando ###

Uma vez que temos um arquivo Makefile, para compilarmos o projeto, basta apenas de utilizar o seguinte comando no terminal:

    make

### v. Manipulando os módulos ###

Para adicionarmos um módulo basta abrirmos o terminal na pasta onde o módulo está contruído e executar o seguinte comando:

    ismod hello.ko

Para verificar se o módulo está no kernel.

    ismod

Para remover o módulo:

    rmmod hello

Para ... :

    tail -f /var/log/syslog

## 3. USB ##

...

## 4. Conclusão ##

Podemos 

## 5. Membros ##

* Breno Maurício de Freitas Viana
* Felipe Barbalho Rocha

## 6. Fontes ##

Aula de módulos e drivers.
