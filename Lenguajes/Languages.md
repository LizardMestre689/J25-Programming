# Lenguages de marcado📚

---

## ¿Qué son los lenguajes de marcado?
Los lenguajes de marcado son un tipo de lenguaje informático que utiliza etiquetas o códigos para anotar o "marcar" elementos dentro de un documento digital con el fin de definir su estructura, formato o presentación. 


El marcado en sí suele consistir en un conjunto de etiquetas o códigos predefinidos que se incrustan en el texto del documento. Estas etiquetas describen la estructura del documento (encabezamientos, párrafos, listas, etc.) y especifican cómo deben mostrarse los distintos elementos (tamaño de letra, color, alineación, etc.).
## Lenguajes de marcado habituales
### HTML (Lenguaje de marcado de hipertexto)
HTML es el lenguaje de marcado estándar utilizado para crear páginas y aplicaciones web. Define la estructura de una página web mediante etiquetas.

Ejemplo de HTML:

![Imagen de WhatsApp 2024-05-21 a las 19 04 23_8b469fde](https://github.com/LizardMestre689/J25-Programming/assets/144990985/c7261fb4-3702-4baf-884c-4561f3eb77d3)


### XML (Lenguaje de marcado eXtensible)
XML es un lenguaje de marcado versátil utilizado para almacenar y transportar datos. Permite a los usuarios definir sus propias etiquetas personalizadas.

## Web HTML hecha por nosotros
Esta es una versión básica de cómo es una web HTML, en esta tarea estuvimos experimentando con las diferentes etiquetas que tienen los archivos HTML. 

![Imagen de WhatsApp 2024-05-21 a las 19 04 20_fa71c2fb](https://github.com/LizardMestre689/J25-Programming/assets/144990985/1acfe6f7-f749-4375-9b28-85c988093fc9)

El código de la página web de arriba:

![Imagen de WhatsApp 2024-05-21 a las 19 04 23_8b469fde](https://github.com/LizardMestre689/J25-Programming/assets/144990985/c7261fb4-3702-4baf-884c-4561f3eb77d3)



## Identacion
---
La identacion consiste en añadir espacios o tabulaciones al principio de una línea de texto para distinguirla visualmente de las demás líneas. También facilita su comprensión.


**Ejemplo de indentacion**:
- Buenos días
  - Bon dia
  - Good morning


**Ejemplo sin indentacion**:


Juan


Boli Bic


Mateo


Alicia



## Páginas web estáticas y dinámicas
---
### Estática

Las páginas web estáticas son lo que ves es lo que hay. Se hacen con HTML, CSS y, a veces, JavaScript, y prácticamente no cambian a menos que alguien edite el código que hay detrás.


**Características**
- Velocidades de carga rápidas: Al estar prefabricadas, las páginas estáticas se cargan súper rápido porque no necesitan ningún procesamiento al estar almacenadas en el servidor.
- Fáciles de mantener: Son fáciles de crear y de gestionar porque suelen ser simples archivos HTML.
- No son muy interactivas: Las páginas estáticas no pueden realmente cambiar o actualizar el contenido basado en lo que hacen los usuarios, pueden cambiar si cambias el código.


**Ejemplos:**
- [Web de Space Jam](https://www.spacejam.com/1996/jam.htm)
- [Web de David Prieto](https://fabacademy.org/2020/labs/barcelona/students/david-prieto/)

![imagen](https://github.com/LizardMestre689/J25-Programming/assets/144990985/5d09f727-532e-4154-aa17-4b3d27eb0456)

### Dinamico
---
**Ejemplos:**

- [Youtube](https://www.youtube.com/)

![imagen](https://github.com/LizardMestre689/J25-Programming/assets/144990985/e0e5f6f4-7152-4836-9610-7e2208aef361)

Las páginas web dinámicas son creadas por el servidor en tiempo real, en función de lo que hagan los usuarios. Suelen funcionar con tecnologías del lado del servidor como PHP, Python, Ruby o Node.js, que permiten cambiar cosas en tiempo real e interactuar con los usuarios.


**Características**:
- Contenido personalizado: Pueden ofrecer contenidos personalizados en función de los gustos de los usuarios o de dónde se encuentren (cookies).
- Base de datos: Las páginas dinámicas pueden comunicarse con bases de datos para obtener o almacenar información, lo que resulta útil para cosas como el inicio de sesión de los usuarios, la gestión de contenidos y las compras en línea.
- Interactivas y divertidas: Estas páginas pueden responder inmediatamente a lo que hacen los usuarios, por lo que son ideales para formularios en línea, búsquedas y actualizaciones en tiempo real.


## Networks
---
### Arquitectura:
- Cliente-servidor
  - Del lado del cliente:
    - Peticiones (request) → URL
  - Del lado del servidor:
    - Responde al cliente


URL = Localizador Uniforme de Recursos. "URL" es diferente de un Enlace:
- El enlace te lleva a la URL


Después de un signo de interrogación (?) en una URL, vienen variables, que suelen encontrarse en las URL de YouTube:

![9a0b7979-ae81-49f1-8790-6965c9c08f81](https://github.com/LizardMestre689/J25-Programming/assets/144990985/3dd80bad-feba-4049-a542-5842e2ea503c)


Qué hace cada parte:
- https:// → Protocolo
- www → Subdominio
- youtube.com → Dominio
- /watch → Ruta
- ?V= Oz230zoewnfaz: Después de la ?, vienen las variables
### Diferentes redes
- **Internet**
  - Red física de ordenadores interconectados (Hardware)
- **World Wide Web**
  - Recursos (software, datos) almacenados en Internet
### Wi-Fi
Computer → AP (Access Point) → Router → ISP (Internet Service Provider) → DNS Server → Server (Google or whatever you searched for)


Ordenador, AP, Router: Redes locales (Wi-Fi/Físicas)
ISP, DNS, Servidor: Componentes no físicos

### Arquitectura Wi-Fi
No sólo en Internet, sino también aplicable a otras conexiones.

![330144622-32a35a69-4a55-4919-8c9a-fe1e3974f3e0](https://github.com/LizardMestre689/J25-Programming/assets/144990985/299ce737-d2da-435b-abbf-3f8c544880f3)


### Ejemplo con Brawl Star
---

![imagen](https://github.com/LizardMestre689/J25-Programming/assets/144990985/29d52274-af25-4ea0-b025-e737d9848e4a)


La arquitectura que utilizan las estrellas de Brawl es la siguiente:
- P2P (Peer-to-Peer)
  - Git torrent
- Entre iguales
  - Descentralizado
  - Puerto a puerto
    - Entre iguales
- Sistema para compartir datos
  - Cliente y servidor al mismo tiempo


### Hardware de red
- Punto de acceso → Sólo Wi-Fi
- Conmutador → Conexión a través de cable, diferentes ordenadores
- Router → Enrutamiento
  - Pasarela entre redes
- Wi-Fi:
  - Señal a través del aire


## IT🖱️⌨️
---
### ¿Qué es la informática?
IT es el departamento de una empresa que se encarga de crear y gestionar sistemas informáticos y tecnológicos.

### Desarrollo y Mantenimiento (de software)

- **Gestor de proyectos**
- **Desarrollador web:**
  - *Front end* (lo que ve el usuario)
  - *Back end* (lo que el usuario no ve)
  - *Full stack* (todo)
- **Programador -> Analista -> Arquitecto de Software**
  - Programador
    - Códigos
  - **Analista**
    - Diseña el código
    - Revisa el código
  - **Arquitecto de software**
    - Esboza las líneas principales
- **QA:**
  - Garantía de calidad (no necesariamente tienen que saber programar)
  - Departamento de calidad
    - Revisar el programa
- **DBA**
  - Administrador de la base de datos
  - Personal de mantenimiento
  - Sysof
    - Operador del sistema
  
## Sistemas
---
- **DBA (Data Base Admin):** Gestiona el sistema de base de datos y su mantenimiento.
  - **Operativo del sistema:** Trata con el sistema operativo.


- **Sistemas:** Gestiona las tareas relacionadas con el sistema.
  - **Despliegue (Deploy):** Libera e instala actualizaciones de software.
  - **Operativo de sistemas:** Gestiona sistemas operativos.
  - **Redes:** Gestiona el hardware de la red.
    - **Parte de hardware:** Componentes físicos de red.
  - **Operadores:** Supervisan y mantienen sistemas y redes.


- **3D:**
  - **Modeladores:** Crea modelos 3D.
  - **Rigging:** Prepara modelos para animación.
    - **Animación de un personaje con esqueletos:** Anima personajes.
  - **VFX (Efectos visuales):** Crea CGI y efectos especiales.
    - Efectos especiales, CGI:*Diversas técnicas de efectos visuales.*
![3d3dJumpscareGIF](https://github.com/LizardMestre689/J25-Programming/assets/144990985/84a89d87-61cb-461d-bde8-1f4615d30364)

## Entornos
---

Sólo los desarrolladores pueden ver esto

- **Entorno local**
  - Ordenador del desarrollador

- **INT (Integración)**
  - Integración de programas entre sí
  - Datos falsos

- **Pre (Preproducción)**
  - Puesta en escena
  - Datos reales
    - *QA (garantía de calidad)*

- **Pro (Producción)**
  - Público, visible para todos
 
### Ejemplo
- **Web Pitzeria:**
  - Local -> Test -> PRO


- **Generalli:**
  - Local -> INT -> QA -> PRE -> PRO
  
![download](https://github.com/LizardMestre689/J25-Programming/assets/144990985/a60badc7-e6e1-4600-ac94-9b14828c3aa0)


- **World of Warcraft (WoW):**
  - Local -> Test -> PRE -> openBeta -> PRO
    
![png-transparent-world-of-warcraft-wrath-of-the-lich-king-warlords-of-draenor-world-of-warcraft-legion-world-of-warcraft-battle-for-azeroth-world-of-warcraft-cataclysm-blizzard-miscellaneous-game-text-thumbnail](https://github.com/LizardMestre689/J25-Programming/assets/144990985/9034f306-9d20-4d96-a04a-05bbcdf80d2b)

Test and Integration often go hand in hand. (Las pruebas y la integración suelen ir de la mano.)
