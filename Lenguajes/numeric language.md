# Código binario (0/1)
---
## ¿Qué es el código binario?
El código binario es un sistema de representación de texto, instrucciones de procesador informático o cualquier otro dato mediante un sistema binario, que se basa en dos símbolos, normalmente representados como 0 y 1. El código binario es el lenguaje que utilizan todos los ordenadores del mundo.


En código binario, cada dígito se denomina bit y una secuencia de ocho bits se denomina byte. Cada bit de un número binario puede tener dos posibles valores de información. 

- 1 bit = b
- 8 bits = 1 byte = B (2^8 posibles valores)


- 1 bit = 2 valores posibles
- 2 bits = 4 valores posibles
- 3 bits = 8 valores posibles
- 4 bits = 16 valores
- 8 bits = 256 valores 



## Múltiplos de código binario
- 1 **KByte** = 1 kB = 1024 bytes (2^10 Bytes)
- 1 **MByte** = 1 MB = 1024 kB = 2^10 kB = 2^20 B
- 1 **GByte** = 1024 MB = 2^10 MB = 2^30 bytes = 2^33bits
- 1 **TByte** = 1024 GB = 2^40B = 2^43 bits
## Ventajas y desventajas
- Es muy fácil hacer un circuito binario


![download](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/8abe60d4-33e7-43bd-b892-986a5d198545)
- Las operaciones aritméticas son más largas pero más fáciles.
- Los números binarios son muy largos en comparación con otros lenguajes porque son más difíciles para los humanos pero más fáciles para los ordenadores.
    - Ejemplo:
      - 4 números en decimal equivalen a 10 en binario 2^9 < 1000 (en decimal) < 2^10
## Nomenclatura
Para especificar el tipo de número tenemos que poner "HEX", "DEC" u "OCT" en la parte inferior del número como subíndice.


![image](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/59c007f2-5ce4-4d57-9942-d539bb915e77)

# Hexadecimal
El hexadecimal va del 0 al 9 y de la A a la F. 


![1552a7a7b6a3bf5f1adb1dde5295b6e6](https://github.com/Spaikyjordi/J25-programming-jordi/assets/144990855/92dd8a73-975b-4ae2-ba6f-7cade85762e4)

# Transformaciones
## Binario a decmial
Para pasar un número binario a decimal lo que tenemos que hacer es lo siguiente:


![Imagen de WhatsApp 2024-05-22 a las 19 04 37_5d8e642b](https://github.com/LizardMestre689/J25-Programming/assets/144990985/6654a631-5d40-4c21-886a-7a65ee135d61)



Así que cada vez que hay un 1 tienes que poner el número que es multiplicado por cuántos pasos diste menos uno. Así que el tercer 1 de la foto es 2^3 porque es el cuarto paso menos uno. Y repite esto cada vez que veas un 1. Y luego cuando termines el número, tienes que sumar todos estos números. Así que en este caso 2^7 + 2^6 + 2^3 + 2^1 + 2^0 = 203


## Decimal a binario
Es muy fácil, sólo tienes que empezar a dividir por dos y, a continuación, el recordatorio va a ser el número binario:


![Imagen de WhatsApp 2024-05-22 a las 19 09 37_83a455dc](https://github.com/LizardMestre689/J25-Programming/assets/144990985/73fb6fa2-b19b-4a31-80c0-4e6d4ba93091)



Así que cuando tengas todos los recordatorios, los pones en orden de abajo a arriba y listo.

## Binario a hexadecimal
Para pasar de binario a hexadecimal es bien simple, tenemos que agrupar los numeros binarios en grupos de cuatro empezando de desde la derecha, una vez ya tengamos los grupos de cuatro hechos, miraremos la tabla de hex, dec y bin, miraremos en el apartado de binario el numero que coresponda al hexadecimal, y así podremos pasar de binario a hexadecimal


![Imagen de WhatsApp 2024-05-22 a las 19 17 33_f7a96c6c](https://github.com/LizardMestre689/J25-Programming/assets/144990985/f2a5205b-1ccb-495b-b45b-e1dae4471e97)


## Hexadecimal a decimal
Para pasar de hexadecimal a decimal usaremos la tabla de bin, dec, hex. Buscaremos los numeros de hexadecimal en la tabla y miraremos con cual coresponde en el apartad de numeros binarios, y copiaremos los numeros:


![Imagen de WhatsApp 2024-05-22 a las 19 19 51_5bef2ca0](https://github.com/LizardMestre689/J25-Programming/assets/144990985/c73d3c72-03ee-48b5-a7fa-615d645427aa)


## Decimal a hexadecimal
Igual que en binario pero dividiendo por 16:


![Imagen de WhatsApp 2024-05-22 a las 19 11 44_b274d45a](https://github.com/LizardMestre689/J25-Programming/assets/144990985/95e50212-d988-440d-8d33-56dc0b80b40d)

