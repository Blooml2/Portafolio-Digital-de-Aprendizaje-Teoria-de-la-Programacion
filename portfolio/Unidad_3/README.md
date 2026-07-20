# 📖 Unidad 3 – Modularidad y Arreglos

<div align="center">

![](https://img.shields.io/badge/Lenguajes-C%20%7C%20Java%20%7C%20Python-f39c12?style=flat-square)
![](https://img.shields.io/badge/Temas-Modularidad%20%7C%20Arreglos-8e44ad?style=flat-square)

</div>

---

## 📝 Contenidos

### 🔹 Modularidad

La modularidad es un principio de programación que consiste en dividir un programa en partes más pequeñas e independientes llamadas módulos o funciones. Cada módulo realiza una tarea específica y puede ser reutilizado en diferentes partes del programa, lo que facilita el mantenimiento y la lectura del código.

---

#### ▪️ Pase de Parámetros por Valor

Se pasa una **copia** del valor original a la función. Cualquier modificación dentro de la función **no afecta** a la variable original.

> **Ejemplo:** Calcular el área y perímetro de un rectángulo.

**C**
```c
#include <stdio.h>

float area(float base, float altura) {
    return base * altura;
}

float perimetro(float base, float altura) {
    return 2 * (base + altura);
}

int main() {
    float base = 8.0, altura = 5.0;
    printf("Rectangulo: base = %.1f, altura = %.1f\n", base, altura);
    printf("Area: %.2f\n", area(base, altura));
    printf("Perimetro: %.2f\n", perimetro(base, altura));
    printf("Valores originales sin cambios: base = %.1f, altura = %.1f\n", base, altura);
    return 0;
}
```

> 🖥️ **Salida en terminal (C):**
>
> <img src="https://github.com/user-attachments/assets/277819b4-7b8f-4eda-b11e-b8e720f38894" />

---

**Java**
```java
public class Rectangulo {
    static float area(float base, float altura) {
        return base * altura;
    }

    static float perimetro(float base, float altura) {
        return 2 * (base + altura);
    }

    public static void main(String[] args) {
        float base = 8.0f, altura = 5.0f;
        System.out.printf("Rectangulo: base = %.1f, altura = %.1f%n", base, altura);
        System.out.printf("Area: %.2f%n", area(base, altura));
        System.out.printf("Perimetro: %.2f%n", perimetro(base, altura));
        System.out.printf("Valores originales sin cambios: base = %.1f, altura = %.1f%n", base, altura);
    }
}
```

> 🖥️ **Salida en terminal (Java):**
> 
> <img src="https://github.com/user-attachments/assets/84fd181e-4b70-4bb2-be13-0151ab6f2acb" />


---

**Python**
```python
def area(base, altura):
    return base * altura

def perimetro(base, altura):
    return 2 * (base + altura)

base = 8.0
altura = 5.0
print(f"Rectangulo: base = {base}, altura = {altura}")
print(f"Area: {area(base, altura):.2f}")
print(f"Perimetro: {perimetro(base, altura):.2f}")
print(f"Valores originales sin cambios: base = {base}, altura = {altura}")
```

> 🖥️ **Salida en terminal (Python):**
> 
> <img width="786" height="110" alt="image" src="https://github.com/user-attachments/assets/1b18a096-708e-4e4a-9da2-7dae567f61b7" />



---

#### ▪️ Pase de Parámetros por Referencia

Se pasa la **dirección de memoria** de la variable original. Cualquier modificación dentro de la función **sí afecta** a la variable original.

> **Ejemplo:** Convertir metros a centímetros, milímetros y kilómetros.

**C**
```c
#include <stdio.h>

void convertir(float metros, float *cm, float *mm, float *km) {
    *cm = metros * 100;
    *mm = metros * 1000;
    *km = metros / 1000;
}

int main() {
    float metros = 1500.0;
    float cm, mm, km;
    convertir(metros, &cm, &mm, &km);
    printf("%.2f metros equivale a:\n", metros);
    printf("  %.2f cm\n", cm);
    printf("  %.2f mm\n", mm);
    printf("  %.4f km\n", km);
    return 0;
}
```

> 🖥️ **Salida en terminal (C):**
> 
> <img width="792" height="217" alt="image" src="https://github.com/user-attachments/assets/ad5d1b0f-c074-4663-9915-8422c89698e8" />



---

**Java**
```java
public class Conversion {
    static float[] convertir(float metros) {
        float[] resultado = new float[3];
        resultado[0] = metros * 100;
        resultado[1] = metros * 1000;
        resultado[2] = metros / 1000;
        return resultado;
    }

    public static void main(String[] args) {
        float metros = 1500.0f;
        float[] resultado = convertir(metros);
        System.out.printf("%.2f metros equivale a:%n", metros);
        System.out.printf("  %.2f cm%n", resultado[0]);
        System.out.printf("  %.2f mm%n", resultado[1]);
        System.out.printf("  %.4f km%n", resultado[2]);
    }
}
```

> 🖥️ **Salida en terminal (Java):**
> 
> <img width="825" height="140" alt="image" src="https://github.com/user-attachments/assets/001dc788-444d-4317-9130-a677a62272fe" />


---

**Python**
```python
def convertir(metros, resultado):
    resultado[0] = metros * 100
    resultado[1] = metros * 1000
    resultado[2] = metros / 1000

metros = 1500.0
resultado = [0, 0, 0]
convertir(metros, resultado)
print(f"{metros} metros equivale a:")
print(f"  {resultado[0]:.2f} cm")
print(f"  {resultado[1]:.2f} mm")
print(f"  {resultado[2]:.4f} km")
```

> 🖥️ **Salida en terminal (Python):**
> 
> <img width="820" height="113" alt="image" src="https://github.com/user-attachments/assets/7a54be8f-19c4-4257-979e-32f901809700" />

---

### 🔹 Arreglos

Un arreglo es una estructura de datos que permite almacenar múltiples valores del mismo tipo bajo un mismo nombre, accediendo a cada elemento mediante un índice. Según sus dimensiones se clasifican en:

---

#### ▪️ Arreglo Unidimensional (1D)

Arreglo de una sola fila de elementos. Se accede a cada valor con un solo índice.

> **Ejemplo:** Encontrar el máximo, mínimo y promedio de un arreglo de 6 elementos.

**C**
```c
#include <stdio.h>

int main() {
    int arr[6] = {15, 42, 8, 73, 29, 56};
    int i, max, min;
    float suma = 0;

    max = arr[0];
    min = arr[0];

    for (i = 0; i < 6; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
        suma += arr[i];
    }

    printf("Arreglo: ");
    for (i = 0; i < 6; i++) printf("%d ", arr[i]);
    printf("\nMaximo: %d\n", max);
    printf("Minimo: %d\n", min);
    printf("Promedio: %.2f\n", suma / 6);
    return 0;
}
```

> 🖥️ **Salida en terminal (C):**
> 
> <img width="865" height="221" alt="image" src="https://github.com/user-attachments/assets/80e9b0cd-8749-4d21-83f9-c09c15c15f76" />


---

**Java**
```java
public class Arreglo1D {
    public static void main(String[] args) {
        int[] arr = {15, 42, 8, 73, 29, 56};
        int max = arr[0], min = arr[0];
        float suma = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > max) max = arr[i];
            if (arr[i] < min) min = arr[i];
            suma += arr[i];
        }

        System.out.print("Arreglo: ");
        for (int x : arr) System.out.print(x + " ");
        System.out.println("\nMaximo: " + max);
        System.out.println("Minimo: " + min);
        System.out.printf("Promedio: %.2f%n", suma / arr.length);
    }
}
```

> 🖥️ **Salida en terminal (Java):**
>
> <img width="801" height="140" alt="image" src="https://github.com/user-attachments/assets/3fb9f66e-eba8-48e6-96d6-d437a04a4f15" />
 
---

**Python**
```python
arr = [15, 42, 8, 73, 29, 56]

maximo = arr[0]
minimo = arr[0]
suma = 0

for x in arr:
    if x > maximo: maximo = x
    if x < minimo: minimo = x
    suma += x

print("Arreglo:", arr)
print("Maximo:", maximo)
print("Minimo:", minimo)
print(f"Promedio: {suma / len(arr):.2f}")
```

> 🖥️ **Salida en terminal (Python):**
> 
> <img width="805" height="115" alt="image" src="https://github.com/user-attachments/assets/e9344152-2147-45e6-ac77-a45217d77635" />


---

#### ▪️ Arreglo Bidimensional (2D)

Arreglo organizado en filas y columnas, similar a una tabla o matriz. Se accede a cada valor con dos índices.

> **Ejemplo:** Sumar los elementos de la diagonal principal de una matriz 4×4.

**C**
```c
#include <stdio.h>

int main() {
    int mat[4][4] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int i, j, suma = 0;

    printf("Matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            printf("%4d", mat[i][j]);
        printf("\n");
    }

    for (i = 0; i < 4; i++)
        suma += mat[i][i];

    printf("Suma de la diagonal principal: %d\n", suma);
    return 0;
}
```

> 🖥️ **Salida en terminal (C):**
> 
> <img width="806" height="267" alt="image" src="https://github.com/user-attachments/assets/26b05579-53ff-4001-8bff-d8e9e797094b" />


---

**Java**
```java
public class Arreglo2D {
    public static void main(String[] args) {
        int[][] mat = {
            { 1,  2,  3,  4},
            { 5,  6,  7,  8},
            { 9, 10, 11, 12},
            {13, 14, 15, 16}
        };
        int suma = 0;

        System.out.println("Matriz:");
        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat[i].length; j++)
                System.out.printf("%4d", mat[i][j]);
            System.out.println();
        }

        for (int i = 0; i < mat.length; i++)
            suma += mat[i][i];

        System.out.println("Suma de la diagonal principal: " + suma);
    }
}
```

> 🖥️ **Salida en terminal (Java):**
> 
> <img width="846" height="175" alt="image" src="https://github.com/user-attachments/assets/138bd196-e0b6-40da-a99f-a3a51b56d5c3" />


---

**Python**
```python
mat = [
    [ 1,  2,  3,  4],
    [ 5,  6,  7,  8],
    [ 9, 10, 11, 12],
    [13, 14, 15, 16]
]

suma = 0

print("Matriz:")
for fila in mat:
    print(fila)

for i in range(len(mat)):
    suma += mat[i][i]

print("Suma de la diagonal principal:", suma)
```

> 🖥️ **Salida en terminal (Python):**
> 
> <img width="813" height="162" alt="image" src="https://github.com/user-attachments/assets/ffd72562-f190-4a7a-b6b3-4912743d3e14" />


---

#### ▪️ Arreglo Tridimensional (3D)

Arreglo con tres dimensiones: se puede imaginar como varias matrices apiladas. Se accede a cada valor con tres índices.

> **Ejemplo:** Sumar solo los elementos de la capa central de un arreglo 3×3×3.

**C**
```c
#include <stdio.h>

int main() {
    int arr3d[3][3][3] = {
        {{ 1,  2,  3}, { 4,  5,  6}, { 7,  8,  9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };
    int j, k;
    int suma = 0;
    int capa = 1;

    printf("Capa central (capa %d):\n", capa);
    for (j = 0; j < 3; j++) {
        for (k = 0; k < 3; k++) {
            printf("%4d", arr3d[capa][j][k]);
            suma += arr3d[capa][j][k];
        }
        printf("\n");
    }
    printf("Suma de la capa central: %d\n", suma);
    return 0;
}
```

> 🖥️ **Salida en terminal (C):**
> 
> <img width="778" height="247" alt="image" src="https://github.com/user-attachments/assets/6be64788-439b-4939-83de-24303235b557" />


---

**Java**
```java
public class Arreglo3D {
    public static void main(String[] args) {
        int[][][] arr3d = {
            {{ 1, 2, 3}, { 4, 5, 6}, { 7, 8, 9}},
            {{10,11,12}, {13,14,15}, {16,17,18}},
            {{19,20,21}, {22,23,24}, {25,26,27}}
        };

        int suma = 0;
        int capa = 1;

        System.out.println("Capa central (capa " + capa + "):");
        for (int j = 0; j < arr3d[capa].length; j++) {
            for (int k = 0; k < arr3d[capa][j].length; k++) {
                System.out.printf("%4d", arr3d[capa][j][k]);
                suma += arr3d[capa][j][k];
            }
            System.out.println();
        }
        System.out.println("Suma de la capa central: " + suma);
    }
}
```

> 🖥️ **Salida en terminal (Java):**
> 
> <img width="797" height="128" alt="image" src="https://github.com/user-attachments/assets/2c23e75f-1abd-4900-b940-455817f36f12" />

---

**Python**
```python
arr3d = [
    [[ 1,  2,  3], [ 4,  5,  6], [ 7,  8,  9]],
    [[10, 11, 12], [13, 14, 15], [16, 17, 18]],
    [[19, 20, 21], [22, 23, 24], [25, 26, 27]]
]

capa = 1
suma = 0

print(f"Capa central (capa {capa}):")
for fila in arr3d[capa]:
    print(fila)
    suma += sum(fila)

print(f"Suma de la capa central: {suma}")
```

> 🖥️ **Salida en terminal (Python):**
> 
> <img width="792" height="133" alt="image" src="https://github.com/user-attachments/assets/91444213-abb1-44a8-9525-c941fe93b301" />


---

## 💬 Principales Dificultades y Reflexión Crítica

Lo que más me costó fue el pase por referencia en C, especialmente manejar múltiples punteros al mismo tiempo como en la conversión de metros. También con los arreglos 3D me tardé en entender cómo seleccionar solo una capa específica sin recorrer todo el arreglo.

En lo académico estos temas son clave porque permiten escribir programas más organizados y eficientes. En lo laboral, las funciones y los arreglos están presentes en casi cualquier tipo de sistema, desde el manejo de datos hasta el procesamiento de información en aplicaciones reales.

---

<div align="center">
<a href="../README.md">⬅️ Volver al inicio</a>
</div>
