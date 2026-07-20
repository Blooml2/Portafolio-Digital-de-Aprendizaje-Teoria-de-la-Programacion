# 📋 Reflexiones Generales del Semestre

### Teoría de la Programación · Ciclo I · Marzo – Agosto 2026
**Estudiante:** Erick Emanuel Andrade Montero
**Docente:** Ing. y Dra. Lissette Geoconda López Fáican

---

## Introducción

Al iniciar este semestre, la programación era para mí un concepto abstracto del que conocía poco o nada en la práctica. A lo largo de las tres unidades de la materia de Teoría de la Programación, no solo aprendí a escribir código, sino que comprendí la lógica que existe detrás de cualquier programa, independientemente del lenguaje que se use. Este documento recoge mis reflexiones sobre ese proceso de aprendizaje, los conceptos que más me marcaron, las dificultades que enfrenté y la manera en que todo lo visto en clase comienza a tener sentido como un conjunto.

---

## Unidad 1 — Fundamentos: Pensar antes de Programar

La primera unidad me enseñó algo que en ese momento no esperaba: que programar no empieza en el teclado. Antes de escribir una sola línea de código, es necesario entender el problema, definir entradas y salidas, y trazar un camino lógico hacia la solución. Eso es exactamente lo que hacen el algoritmo, el pseudocódigo y el diagrama de flujo.

El algoritmo fue el concepto que más me costó interiorizar al principio. Estaba acostumbrado a pensar de manera informal, sin estructurar los pasos. Aprender a descomponer un problema en pasos ordenados, finitos y precisos fue un cambio de mentalidad importante. Con el tiempo entendí que un buen algoritmo es la diferencia entre un programa que funciona bien y uno que simplemente funciona.

El pseudocódigo, por su parte, me permitió traducir esa lógica a algo más parecido al código real sin preocuparme aún por la sintaxis. La herramienta PseInt fue muy útil para esto, ya que me permitía ver de inmediato si mi lógica tenía errores antes de intentar codificar. La prueba de escritorio complementó esto, obligándome a seguir manualmente cada paso del algoritmo con valores concretos, lo que me ayudó a detectar errores que de otra forma habría pasado por alto.

Al llegar a la codificación en C, la curva de aprendizaje fue notable. Detalles como el uso de `printf` y `scanf`, los formatos `%f` o `%d`, y el símbolo `&` en la lectura de variables me generaron confusión inicial. Sin embargo, con práctica comprendí que esos detalles no son obstáculos, sino la precisión que le da al lenguaje C su potencia y eficiencia. Esta unidad me enseñó que la programación exige rigor desde el primer paso.

---

## Unidad 2 — Estructuras de Control: Darle Inteligencia al Código

Si la primera unidad me enseñó a estructurar, la segunda me enseñó a decidir y repetir. Las estructuras condicionales y repetitivas son, en mi opinión, el núcleo de cualquier programa útil: sin ellas, el código no podría adaptarse a diferentes situaciones ni procesar múltiples datos de forma eficiente.

Las estructuras condicionales `if`, `else if` y `else` me parecieron intuitivas al principio, pero encadenarlas correctamente para cubrir todos los casos posibles sin que se pisaran entre sí requirió práctica. Entender que las condiciones se evalúan en orden y que el programa entra al primer bloque verdadero que encuentra fue clave para evitar errores lógicos.

Las estructuras repetitivas me presentaron un desafío mayor. Distinguir cuándo usar `while`, `for` o `do while` no siempre fue obvio. Con el tiempo identifiqué una regla práctica: el `for` cuando sé de antemano cuántas veces se repite, el `while` cuando depende de una condición que puede cambiar, y el `do while` cuando necesito que el bloque se ejecute al menos una vez. El ejercicio de la serie numérica intercalada fue especialmente útil porque combinaba un `for` para el recorrido con un `if` para decidir qué imprimir en cada posición, lo que me mostró cómo estas estructuras se potencian al trabajar juntas.

Esta unidad también me hizo entender la importancia de validar los datos que ingresa el usuario. No se puede asumir que siempre introducirá valores correctos; el programa debe ser lo suficientemente robusto como para manejar entradas inválidas sin fallar.

---

## Unidad 3 — Modularidad y Arreglos: Organizar para Escalar

La tercera unidad elevó el nivel de complejidad, pero también mostró cómo el código puede volverse más limpio y eficiente. La modularidad, a través de funciones, permite dividir un programa grande en partes manejables, donde cada función tiene una responsabilidad clara y puede reutilizarse cuantas veces sea necesario.

El concepto que más trabajo me costó fue el pase de parámetros por referencia en C. Entender que `&` obtiene la dirección de una variable y que `*` accede al valor en esa dirección requirió tiempo y práctica. La diferencia con el pase por valor se volvió completamente clara cuando comparé los resultados: en un caso la variable original no cambia, en el otro sí. Ese contraste fue el mejor ejercicio para afianzar el concepto.

Los arreglos me abrieron una nueva dimensión en la forma de organizar datos. Un arreglo unidimensional permitió manejar múltiples valores sin declarar una variable por cada uno. Los arreglos bidimensionales mostraron cómo estructurar información en forma de tabla, algo directamente aplicable a matrices matemáticas o tablas de datos. Y los tridimensionales, aunque más abstractos, me hicieron comprender que las estructuras de datos pueden representar prácticamente cualquier tipo de información si se organiza bien.

Trabajar con los mismos ejercicios en C, Java y Python durante esta unidad fue también revelador. Aunque la lógica era la misma, cada lenguaje tenía sus particularidades: C requería mayor detalle manual, Java ofrecía métodos propios de los arreglos como `.length`, y Python simplificaba muchas operaciones gracias a sus estructuras nativas. Esto me mostró que aprender a programar no es aprender un lenguaje, sino aprender a pensar, y que ese pensamiento puede expresarse en cualquier lenguaje.

---

## Reflexión Integradora

Mirando el semestre en su conjunto, lo más valioso que me llevo no es un lenguaje de programación ni una estructura específica, sino una forma de enfrentar problemas. Cada vez que aparece un problema nuevo, ahora pienso en entradas, procesos y salidas. Pienso en si necesito repetir algo, en si necesito tomar una decisión, en si puedo dividir el problema en partes más pequeñas.

También comprendí que los errores son parte del proceso. Cada vez que un programa no compilaba o daba resultados inesperados, el proceso de encontrar el error me enseñó más que cuando el código funcionó a la primera. La depuración desarrolla una atención al detalle que va más allá de la programación.

En términos académicos, esta materia es la base sobre la que se construirán todas las materias de programación que vienen en la carrera. Sin estos fundamentos claros, sería muy difícil avanzar hacia estructuras de datos, programación orientada a objetos o desarrollo de software. Y en términos laborales, las habilidades desarrolladas aquí —pensar de forma lógica, estructurar soluciones, escribir código limpio y organizado— son exactamente las que se esperan de un profesional en computación, independientemente del área en la que se desempeñe.

---

## Conclusión General

El semestre de Teoría de la Programación representó mucho más que aprender a escribir código. Fue un proceso de desarrollar una nueva forma de pensar: estructurada, lógica y orientada a la solución de problemas. Desde los primeros algoritmos en papel hasta los arreglos tridimensionales en tres lenguajes diferentes, cada tema construyó sobre el anterior y contribuyó a una comprensión más completa de lo que significa programar.

Queda aún mucho por aprender, pero la base está construida. Y lo más importante es que ahora sé cómo aprender: descomponiendo el problema, diseñando la solución antes de codificar, y refinando hasta que funcione correctamente. Eso, más que cualquier sintaxis específica, es lo que esta materia me dejó.

---

<div align="center">
<sub>Portafolio Académico · Teoría de la Programación · UNL · 2026</sub>
<br>
<a href="./README.md">⬅️ Volver al inicio</a>
</div>
