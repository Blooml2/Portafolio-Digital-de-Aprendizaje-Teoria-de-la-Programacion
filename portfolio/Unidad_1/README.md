# 📖 Unidad 1 – Fundamentos de Programación

<div align="center">

![](https://img.shields.io/badge/Lenguajes-C%20%7C%20Java%20%7C%20Python-f39c12?style=flat-square)
![](https://img.shields.io/badge/Estructura-Secuencial-27ae60?style=flat-square)

</div>

---

## Contenidos

### 🔹 Algoritmo
Conjunto de pasos ordenados, finitos y bien definidos que permiten resolver un problema o realizar una tarea específica. Todo algoritmo debe tener un inicio, un proceso y un fin.

### 🔹 Pseudocódigo
Representación textual de un algoritmo usando un lenguaje intermedio entre el lenguaje natural y el lenguaje de programación. No pertenece a ningún lenguaje en específico, pero permite expresar la lógica antes de codificar.

### 🔹 Diagrama de Flujo
Representación gráfica de un algoritmo mediante símbolos estandarizados (óvalos, rombos, rectángulos, flechas) que muestran el flujo y orden de ejecución de las instrucciones.

### 🔹 Prueba de Escritorio
Técnica manual que consiste en seguir paso a paso un algoritmo con valores específicos, registrando el estado de cada variable, con el objetivo de verificar que el algoritmo funciona correctamente antes de ejecutarlo.

### 🔹 Lenguajes de Programación
Lenguajes formales compuestos por instrucciones que le indican a una computadora qué acciones realizar. Los lenguajes vistos en clase son:

| Lenguaje | Tipo | Característica principal |
|----------|------|--------------------------|
| **C** | Compilado | Lenguaje de bajo nivel, muy eficiente y base de muchos otros lenguajes |
| **Java** | Compilado/Interpretado | Orientado a objetos, multiplataforma gracias a la JVM |
| **Python** | Interpretado | Sintaxis simple y legible, muy usado en ciencia de datos e IA |

### 🔹 Programación por Bloques
Paradigma visual de programación donde las instrucciones se representan como bloques gráficos que se ensamblan entre sí, similar a un rompecabezas. Facilita el aprendizaje de la lógica de programación sin necesidad de memorizar una sintaxis compleja. Un ejemplo conocido es **Scratch**.

---

## Ejercicio con Estructura Secuencial — Lenguaje C

### Planteamiento del Problema

Desarrollar un programa en lenguaje C que calcule el **Índice de Masa Corporal (IMC)** de una persona. El programa debe solicitar el peso en kilogramos y la altura en metros, realizar el cálculo correspondiente y mostrar el resultado en pantalla.

---

### Análisis del Problema

| Elemento | Descripción |
|----------|-------------|
| **Entrada** | Peso de la persona en kilogramos (`peso`) |
| | Altura de la persona en metros (`altura`) |
| **Proceso** | `imc = peso / (altura × altura)` |
| **Salida** | Valor numérico del IMC |

> **Fórmula:** `IMC = peso (kg) / altura² (m)`

---

### Diseño del Algoritmo

#### Pseudocódigo (PseInt)

```pseint
Algoritmo CalcularIMC
	Definir peso, altura, imc Como Real
	
	Escribir "================================"
	Escribir "      CALCULADORA DE IMC        "
	Escribir "================================"
	Escribir "Ingrese su peso en kg: "
	Leer peso
	Escribir "Ingrese su altura en metros: "
	Leer altura
	
	imc <- peso / (altura * altura)
	
	Escribir "================================"
	Escribir "Su IMC es: ", imc
	Escribir "================================"
FinAlgoritmo
```

#### Diagrama de flujo
<img width="444" height="679" alt="image" src="https://github.com/user-attachments/assets/0df7c91e-661f-4a2c-9107-562621d7a69b" />


---

### Codificación — Código Fuente en C

> 📄 Archivo: [`codigo/imc.c`](./codigo/imc.c)

```c
#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("================================\n");
    printf("      CALCULADORA DE IMC        \n");
    printf("================================\n");

    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("================================\n");
    printf("Su IMC es: %.2f\n", imc);
    printf("================================\n");

    return 0;
}
```

#### Prueba de Escritorio

> **Datos de prueba:** peso = `70 kg` · altura = `1.75 m`

| Paso | Instrucción | `peso` | `altura` | `imc` |
|------|-------------|--------|----------|-------|
| 1 | `Leer peso` | 70 | — | — |
| 2 | `Leer altura` | 70 | 1.75 | — |
| 3 | `imc = peso / (altura * altura)` | 70 | 1.75 | 22.86 |
| 4 | `printf("Su IMC es: %.2f", imc)` | 70 | 1.75 | 22.86 |

**Salida esperada:**
```
================================
      CALCULADORA DE IMC        
================================
Ingrese su peso en kg: 70
Ingrese su altura en metros: 1.75
================================
Su IMC es: 22.86
================================
```

---

## Principales Dificultades y Reflexión Crítica

Al empezar con C lo que más me costó fue el `printf` y el `scanf`. No entendía bien para qué servían los formatos como `%f`, y con el `scanf` siempre olvidaba poner el `&` antes de la variable, lo que hacía que el programa no guardara bien los datos. Con práctica fui entendiéndolo poco a poco.

En lo académico estos contenidos son una buena base para las materias que vienen, porque aprender a plantear un problema antes de codificarlo ayuda a cometer menos errores. Y en lo laboral, entender la lógica detrás de un programa es algo útil en cualquier área de tecnología, ya que casi todo se basa en instrucciones ordenadas que resuelven problemas.

---

<div align="center">
<a href="../README.md">⬅️ Volver al inicio</a>
</div>
