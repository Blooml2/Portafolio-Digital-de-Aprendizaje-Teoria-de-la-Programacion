# 📖 Unidad 2 – Estructuras de Control

<div align="center">

![](https://img.shields.io/badge/Lenguaje-C-00599C?style=flat-square&logo=c)
![](https://img.shields.io/badge/Estructuras-Condicionales%20%7C%20Repetitivas-e67e22?style=flat-square)

</div>

---

## 📝 Contenidos

### 🔹 Estructuras Condicionales

Permiten que un programa tome decisiones y ejecute diferentes bloques de instrucciones según se cumpla o no una condición.

---

#### ▪️ Condicional Simple — `if`

Ejecuta un bloque de instrucciones **solo si** la condición es verdadera.

**Pseudocódigo (PseInt):**
```pseint
Si condicion Entonces
    // instrucciones
FinSi
```

<div align="center">

> 🖼️ *Diagrama de flujo — pendiente de adjuntar*

</div>

---

#### ▪️ Condicional Doble — `if / else`

Ejecuta un bloque si la condición es verdadera, y **otro bloque** si es falsa.

**Pseudocódigo (PseInt):**
```pseint
Si condicion Entonces
    // instrucciones si es verdadero
SiNo
    // instrucciones si es falso
FinSi
```

<div align="center">

> 🖼️ *Diagrama de flujo — pendiente de adjuntar*

</div>

---

#### ▪️ Condicional Múltiple — `if / else if / else`

Evalúa varias condiciones en cadena hasta encontrar una verdadera.

**Pseudocódigo (PseInt):**
```pseint
Si condicion1 Entonces
    // instrucciones
SiNo Si condicion2 Entonces
    // instrucciones
SiNo Si condicion3 Entonces
    // instrucciones
SiNo
    // instrucciones por defecto
FinSi
```

<div align="center">

> 🖼️ *Diagrama de flujo — pendiente de adjuntar*

</div>

---

#### ▪️ Condicional por Casos — `switch`

Compara el valor de una variable con múltiples casos posibles y ejecuta el bloque correspondiente.

**Pseudocódigo (PseInt):**
```pseint
Segun variable Hacer
    caso valor1:
        // instrucciones
    caso valor2:
        // instrucciones
    De Otro Modo:
        // instrucciones por defecto
FinSegun
```

<div align="center">

> 🖼️ *Diagrama de flujo — pendiente de adjuntar*

</div>

---

### 🔹 Estructuras Repetitivas

Permiten ejecutar un bloque de instrucciones múltiples veces mientras se cumpla una condición o durante un número determinado de veces.

---

#### ▪️ Bucle `while` — Mientras

Repite las instrucciones **mientras** la condición sea verdadera. La condición se evalúa **antes** de ejecutar el bloque.

**Pseudocódigo (PseInt):**
```pseint
Mientras condicion Hacer
    // instrucciones
FinMientras
```

<div align="center">

> 🖼️ *Diagrama de flujo — pendiente de adjuntar*

</div>

---

#### ▪️ Bucle `for` — Para

Se usa cuando se conoce de antemano cuántas veces se debe repetir el bloque.

**Pseudocódigo (PseInt):**
```pseint
Para variable <- valorInicial Hasta valorFinal Con Paso incremento Hacer
    // instrucciones
FinPara
```

<div align="center">

> 🖼️ *Diagrama de flujo — pendiente de adjuntar*

</div>

---

#### ▪️ Bucle `do while` — Repetir / Hasta Que

Ejecuta el bloque **al menos una vez** y luego repite **mientras** la condición sea verdadera. La condición se evalúa **después** de ejecutar el bloque.

**Pseudocódigo (PseInt):**
```pseint
Repetir
    // instrucciones
Hasta Que condicion
```

<div align="center">

> 🖼️ *Diagrama de flujo — pendiente de adjuntar*

</div>

---

## 💻 Ejercicio con Estructura Condicional y Repetitiva — Lenguaje C

### 📌 Planteamiento del Problema

Desarrollar un programa en C que calcule la **nota final ponderada** de uno o más estudiantes a partir de cuatro componentes de evaluación: ACD, AA, APE y ES. El programa debe validar que el número de estudiantes sea al menos uno y que cada nota ingresada esté en el rango de 0 a 10. Al final debe mostrar las notas ponderadas, la nota final y el nivel de desempeño de cada estudiante.

---

### 🔍 Análisis del Problema

| Elemento | Descripción |
|----------|-------------|
| **Entrada** | Cantidad de estudiantes (`totalEstudiantes`) |
| | Nota ACD (`n1`), Nota AA (`n2`), Nota APE (`n3`), Nota ES (`n4`) — rango: 0 a 10 |
| **Proceso** | Ponderación: `ACD×0.2 + AA×0.2 + APE×0.2 + ES×0.4` |
| | Evaluación: Excelente (≥9) / Bueno (≥7) / Regular (≥5) / Deficiente (<5) |
| **Salida** | Notas ponderadas individuales, nota final y nivel de desempeño |

---

### 🗂️ Diseño del Algoritmo

#### Diagrama de Flujo

<div align="center">

![Diagrama](Unidad_2/codigo/diagrama.png)

</div>

---

### 🖥️ Codificación — Código Fuente en C

> 📄 Archivo: [`codigo/calificaciones.c`](./codigo/calificaciones.c)

```c
#include <stdio.h>

int main() {
    // Declaracion de variables
    int totalEstudiantes, i;
    float n1, n2, n3, n4, nf;

    // Ingreso de la cantidad de estudiantes con validacion (minimo 1)
    do {
        printf("Ingrese la cantidad total de estudiantes: ");
        scanf("%d", &totalEstudiantes);
        if (totalEstudiantes <= 0) {
            printf("Error: Debe ingresar al menos 1 estudiante.\n");
        }
    } while (totalEstudiantes <= 0);

    // Bucle principal para procesar cada estudiante
    for (i = 1; i <= totalEstudiantes; i++) {
        printf("\n    Estudiante %d    \n", i);

        // Entrada de datos con validacion (0 a 10)
        do {
            printf("Ingrese el valor del ACD: ");
            scanf("%f", &n1);
            if (n1 < 0 || n1 > 10) {
                printf("Error: La nota debe estar entre 0 y 10.\n");
            }
        } while (n1 < 0 || n1 > 10);

        do {
            printf("Ingrese el valor del AA: ");
            scanf("%f", &n2);
            if (n2 < 0 || n2 > 10) {
                printf("Error: La nota debe estar entre 0 y 10.\n");
            }
        } while (n2 < 0 || n2 > 10);

        do {
            printf("Ingrese el valor del APE: ");
            scanf("%f", &n3);
            if (n3 < 0 || n3 > 10) {
                printf("Error: La nota debe estar entre 0 y 10.\n");
            }
        } while (n3 < 0 || n3 > 10);

        do {
            printf("Ingrese el valor del ES: ");
            scanf("%f", &n4);
            if (n4 < 0 || n4 > 10) {
                printf("Error: La nota debe estar entre 0 y 10.\n");
            }
        } while (n4 < 0 || n4 > 10);

        // Proceso de ponderacion
        n1 *= 0.2;
        n2 *= 0.2;
        n3 *= 0.2;
        n4 *= 0.4;
        nf = n1 + n2 + n3 + n4;

        // Salidas individuales
        printf("La nota ponderada del ACD es: %.2f\n", n1);
        printf("La nota ponderada del AA es: %.2f\n", n2);
        printf("La nota ponderada del APE es: %.2f\n", n3);
        printf("La nota ponderada del ES es: %.2f\n", n4);

        // Evaluacion del desempeno
        if (nf >= 9) {
            printf("Estudiante %d, tu nota final es: %.2f. Tu desempeno esta unidad fue Excelente.\n", i, nf);
        } else if (nf < 9 && nf >= 7) {
            printf("Estudiante %d, tu nota final es: %.2f. Tu desempeno esta unidad fue Bueno.\n", i, nf);
        } else if (nf < 7 && nf >= 5) {
            printf("Estudiante %d, tu nota final es: %.2f. Tu desempeno esta unidad fue Regular.\n", i, nf);
        } else {
            printf("Estudiante %d, tu nota final es: %.2f. Tu desempeno esta unidad fue Deficiente.\n", i, nf);
        }
    }

    return 0;
}
```

---

### 🧪 Validación — Prueba de Escritorio

> **Datos de prueba:** 1 estudiante · ACD = `8` · AA = `7` · APE = `9` · ES = `6`

| Paso | Instrucción | `totalEstudiantes` | `n1` | `n2` | `n3` | `n4` | `nf` |
|------|-------------|:------------------:|------|------|------|------|------|
| 1 | `Leer totalEstudiantes` | 1 | — | — | — | — | — |
| 2 | `Leer n1 (ACD)` | 1 | 8 | — | — | — | — |
| 3 | `Leer n2 (AA)` | 1 | 8 | 7 | — | — | — |
| 4 | `Leer n3 (APE)` | 1 | 8 | 7 | 9 | — | — |
| 5 | `Leer n4 (ES)` | 1 | 8 | 7 | 9 | 6 | — |
| 6 | `n1 = 8 × 0.2` | 1 | 1.60 | 7 | 9 | 6 | — |
| 7 | `n2 = 7 × 0.2` | 1 | 1.60 | 1.40 | 9 | 6 | — |
| 8 | `n3 = 9 × 0.2` | 1 | 1.60 | 1.40 | 1.80 | 6 | — |
| 9 | `n4 = 6 × 0.4` | 1 | 1.60 | 1.40 | 1.80 | 2.40 | — |
| 10 | `nf = 1.60+1.40+1.80+2.40` | 1 | 1.60 | 1.40 | 1.80 | 2.40 | 7.20 |
| 11 | `nf >= 7` → Bueno | 1 | 1.60 | 1.40 | 1.80 | 2.40 | 7.20 |

**Salida esperada:**
```
    Estudiante 1
La nota ponderada del ACD es: 1.60
La nota ponderada del AA es: 1.40
La nota ponderada del APE es: 1.80
La nota ponderada del ES es: 2.40
Estudiante 1, tu nota final es: 7.20. Tu desempeno esta unidad fue Bueno.
```

---

## 💬 Principales Dificultades y Reflexión Crítica

Lo que más me costó en esta unidad fue combinar el `do while` con el `for`, porque al principio me confundía en qué parte colocar cada bucle y cuándo usar uno u otro. También me tomó un poco entender la lógica de los `if / else if` encadenados para evaluar el desempeño sin que las condiciones se pisaran entre sí.

En lo académico esto me sirve bastante porque casi cualquier programa real necesita validar datos y repetir procesos, así que son herramientas que se usan todo el tiempo. En lo laboral, la lógica condicional y repetitiva está presente en sistemas de gestión, aplicaciones web y hasta en scripts simples de automatización, por lo que entenderla bien es clave para cualquier área de desarrollo.

---

<div align="center">
<a href="../README.md">⬅️ Volver al inicio</a>
</div>
