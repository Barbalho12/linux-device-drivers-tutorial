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
3. Conclusão
4. Membros
5. Fontes

## 1. Introdução ##

Este post tem objetivo de introduzir o desenvolvimento de device drivers (mecanismos de acesso ao hardware) para distribuições Linux disponibilizando um projeto para o leitor, ao final deste relatório, ser capaz de prosseguir o aprendizado. Este projeto é um drive para reconhecimento de dispositivos USB.

## 2. Passos para a criação dos device drivers ##

### i. O que instalar? ###



### ii. LKM - Loadable Kernel Modules ###

Antes de iniciarmos o desenvolvimento do projeto devemos ter em mente, . Com o LKM é possível adicionar e remover capacidades do kernel em tempo de execução. Chamamos de módulo cada unidade que estenda as capacidades do kernel.

Comandos:

    insmod

    rmmod

    modprobe

    depmod

### iii. Hello World ###

Este projeto é o Hello World para o desenvolvimento de drivers. A estrutura da programação é um pouco diferente da estrutura de programação tradicional, pois, em um arquivo .c não temos nenhum método main. Vejamos a seguir como funciona a estrutura do código deste projeto.

```c
#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

static __init int hello_init(void) {
	printk(KERN_INFO "Hello, world!\n");
	return 0;
}

static __exit void hello_exit(void) {
	printk("Goodbye, curel world!\n");
}


module_init(hello_init);
module_exit(hello_exit);
```

### iv. Compilando ###

Para compilarmos o projeto, precisamos apenas de utilizar o seguinte comando no terminal:

    make

### v. Inserindo e removendo módulos ###

...

    ismod hello.ko

...

    ismod

...

    rmmod hello

...

    tail -f /var/log/syslog

## 3. Conclusão ##

## 4. Membros ##

* Breno Maurício de Freitas Viana
* Felipe Barbalho Rocha

## 5. Fontes ##
