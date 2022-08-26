
# SPACESHIP

## Tabla de Contenidos:
- Presentación
- Documentación
- Información utilizada:
- Preguntas frecuentes:
- Bugs conocidos
- Solución de problemas
- Créditos y agradecimientos
- Registro de cambios

### Presentación:
- Descripción General: 
Un juego de naves que se desarrolla en el terminal, se tienen 3 vidas, cada una con 3 corazones, y, hay que evitar a los asteroides.

- Estado del Proyecto:
Terminado.

- Guía Instalación y Funcionamiento:
Abrir el archivo para ejecutarlo. Se abrirá una pestaña del terminal, lo primero a hacer es apretar un ENTER para que se despliegue la carátula. Para poder enseñar bien el proyecto, es que se coloca un getch() al inicio del main.

- Librerías propias:
En este caso, solo se usó una librería: utility.h. Todos los dibujos fueron puestos aquí, debido a su extensión, es mejor que no hagan ver dificultoso el código en Spaceship. La única función obtenida de Internet, y no explicada aropiadamente, es gotoxy.

### Documentación:

/**
 * caratula: Muestra en la terminal la pantalla de inicio del juego.  
**/

/**
 * dibujarInstrcciones: Muestra en la terminal la pantalla de instrucciones. 
**/

/**
 * posicionVidas: Ubicar en la terminal las vidas.
 
 * @param vi Cantidad de vidas  
**/

/**
 * mostrarCorazones: Ubicar en la terminal los corazones.
 
 * @param s Cantidad de corazones  
**/

/**
 * accionExplosion: Hace una animación de una explosión, al imprimir 3 veces las formas.  
**/

/**
 * aleatorizarAsteroide: Cambia la coordenada y del asteroide, para que no salga de pantalla; al mismo tiempo, que da un valor cualquiera para la coordenada x.
 * @param &x Coordenada en x, referencia al espacio de x en main
 * @param &y Coordenada en y, referencia al espacio de y en main
**/

/**
 * gameplay: Proceso mas importante, aqui se mueve la nave por las teclas. Los asteroides reciben su rutina. Se establece que pasa cuando se pierden todos los corazones.
**/

/**
 * perder: Se establece que pasa cuando se pierden todas las vidas.
 * @param &decision Se usa la variable decisión que está en main, se refiere a ese espacio, para que cambie en main.
**/

### Información utilizada:

**Explicacion de algunas funciones:**

- puts: Imprime carácteres. Ya da salto de línea automáticamente.

- gotoxy: Posicionarnos en una parte específica de la pantalla, e imprimir lo que queramos ahí. Proceso que ya está en algunas librerías creado, o que se puede crear.

- Sleep: Demora los procesos u ordenes.

- rand: Genera un número aleatorio.

- kbhit: La función kbhit retorna 0 si no se ha registrado una pulsada de tecla; si hay una disponible, entonces el valor retornado es distinto a cero.

- unsigned char: Se consume el espacio de signo, y obtiene mas bytes, para el char.

- beep: Produce un pitido, depende de que valores le asignemos.
(hz, duracion en milisegundos)

**Información de la Web**

- Cambiar colores: https://tutorialesgeek.wordpress.com/2013/05/24/cambia-el-color-del-texto-y-fondo-en-dev-c/

- Consejos para control de teclas: https://www.youtube.com/watch?v=hYYc-SfkiZk

- Imprimir simbolos ASCII: https://es.stackoverflow.com/questions/211212/c%C3%B3mo-imprimir-estos-codigos-ascii-en-c

### Preguntas frecuentes:

- ¿Puede ir más rápido la pantalla de inicio, o las animaciones?
Sí, se puede cambiar la velocidad con la que van desde la librería utility.h, que es donde se han guardado los procesos secundarios.

- ¿Por qué faltan funciones como gotoxy en el código de Spaceship?
Porque todo el código no principal, fue trasladado a la librería utility.h. De igual manera, como este código es reutilizable, se lo coloca ahí con la intención de utilizarlo a futuro.

### Bugs conocidos

- Asteroide largo:
En algunas ejecuciones, un asteroide ha dejado de bajar de manera norma, y se alarga, haciendo una linea vertical en la terminal, despues de unos segundos se quita.

- Asteroide trabado:
En algunas ejecuciones un asteroide se queda trabado en algún punto de la pantalla. Una vez ocurrio cuando el corazón se borro, pasó que el asteroide se imprimió en el lugar del corazón y se quedo ahi por un buen momento.

- Beeps Repetidos:
En una ejecución, ocurrió que cada beep sonaba dos veces. 

### Solución de problemas

Pulir la rutina de los asteroides, es decir, hacer cambios para que funcionen con mayor fluidez; incluso se podrían usar nuevas funciones.

### Créditos y agradecimientos

Créditos: Andrés Mateo Quillupangui O.

Agradecimmientos a los consejos de programación en YouTube.

### Registro de cambios

17/08/2022: Creación de la carpeta del Proyecto de Segundo Bimestre, y del proyecto en C++

18/08/2022: Investigación sobre juegos de naves antiguos. Inicio del código. Declaración de variables, del main,

20/08/2022: Mostras las vidas, los corazones, la explosión de la nave y el funcionamiento del juego realizados, con fallas que controlar.

21/08/2022: Optimización del código y arreglo de las estructuras y escritura. 
            Arreglo de fallas y errores. Se lleva una leve documentación del código.

23/08/2022: Inicio del código de la carátula. 

24/08/2022: Código de la carátula realizado.
            Inicio del código referente a cuando se pierde en el juego.

25/08/2022: Dibujo de estrellas en la carátula.
            Incorporación de la pantalla de instrucciones.
            Fin del código sobre perder en el juego.
            Arreglos en la documentación del código.

26/08/2022: Arreglo de bugs en la parte de ingreso de un número en la pantalla de muerte.
            Dibujos extras en la pantalla de muerte y en la carátula.

26/08/2022: Finalización del proyecto

