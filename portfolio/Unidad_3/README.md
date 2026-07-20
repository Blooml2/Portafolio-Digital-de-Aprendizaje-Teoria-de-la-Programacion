# 📖 Unidad 3 – Modularidad y Arreglos

<div align="center">

![](https://img.shields.io/badge/Lenguajes-C%20%7C%20Java%20%7C%20Python-f39c12?style=flat-square)
![](https://img.shields.io/badge/Temas-Modularidad%20%7C%20Arreglos-8e44ad?style=flat-square)

</div>

---

## 📝 Contenidos

### 🔹 Modularidad

La modularidad es un principio de programación que consiste en dividir un programa en partes más pequeñas e independientes llamadas módulos o funciones. Cada módulo realiza una tarea específica y puede ser reutilizado en diferentes partes del programa, lo que facilita el mantenimiento y la lectura del código.

Existen dos formas principales de pasar datos a una función:

---

#### ▪️ Pase de Parámetros por Valor

Se pasa una **copia** del valor original a la función. Cualquier modificación dentro de la función **no afecta** a la variable original.

**C**
```c
#include <stdio.h>

void duplicar(int n) {
    n = n * 2;
    printf("Dentro de la funcion: %d\n", n);
}

int main() {
    int x = 5;
    duplicar(x);
    printf("En main: %d\n", x);
    return 0;
}
```

> 🖥️ **Salida en terminal (C):**
> ```
> <img width="793" height="175" alt="image" src="https://github.com/user-attachments/assets/88dc3b13-bc86-4fcc-8aea-2ffaa8f06169" />

> ```

---

**Java**
```java
public class portafolio {
    static void duplicar(int n) {
        n = n * 2;
        System.out.println("Dentro del metodo: " + n);
    }

    public static void main(String[] args) {
        int x = 5;
        duplicar(x);
        System.out.println("En main: " + x);
    }
}
```

> 🖥️ **Salida en terminal (Java):**
> ```
> <img width="800" height="95" alt="image" src="https://github.com/user-attachments/assets/54f96db0-da33-491c-b62d-443806cf8d8a" />

> ```

---

**Python**
```python
def duplicar(n):
    n = n * 2
    print("Dentro de la funcion:", n)

x = 5
duplicar(x)
print("En main:", x)
```

> 🖥️ **Salida en terminal (Python):**
> ```
> <img width="803" height="70" alt="image" src="https://github.com/user-attachments/assets/28a909eb-44c1-44d2-96c6-db560dd9f646" />

> ```

---

#### ▪️ Pase de Parámetros por Referencia

Se pasa la **dirección de memoria** de la variable original. Cualquier modificación dentro de la función **sí afecta** a la variable original.

**C**
```c
#include <stdio.h>

void duplicar(int *n) {
    *n = *n * 2;
    printf("Dentro de la funcion: %d\n", *n);
}

int main() {
    int x = 5;
    duplicar(&x);
    printf("En main: %d\n", x);
    return 0;
}
```

> 🖥️ **Salida en terminal (C):**
> ```
> (pegar aquí la salida)
> ```

---

**Java**
```java
public class PorReferencia {
    static void duplicar(int[] n) {
        n[0] = n[0] * 2;
        System.out.println("Dentro del metodo: " + n[0]);
    }

    public static void main(String[] args) {
        int[] x = {5};
        duplicar(x);
        System.out.println("En main: " + x[0]);
    }
}
```

> 🖥️ **Salida en terminal (Java):**
> ```
> (pegar aquí la salida)
> ```

---

**Python**
```python
def duplicar(n):
    n[0] = n[0] * 2
    print("Dentro de la funcion:", n[0])

x = [5]
duplicar(x)
print("En main:", x[0])
```

> 🖥️ **Salida en terminal (Python):**
> ```
> (pegar aquí la salida)
> ```

---

### 🔹 Arreglos

Un arreglo es una estructura de datos que permite almacenar múltiples valores del mismo tipo bajo un mismo nombre, accediendo a cada elemento mediante un índice. Según sus dimensiones, los arreglos se clasifican en:

---

#### ▪️ Arreglo Unidimensional (1D)

Arreglo de una sola fila de elementos. Se accede a cada valor con un solo índice.

**C**
```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int i;
    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
```

> 🖥️ **Salida en terminal (C):**
> ```
> (pegar aquí la salida)
> ```

---

**Java**
```java
public class Arreglo1D {
    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40, 50};
        for (int i = 0; i < arr.length; i++) {
            System.out.println("arr[" + i + "] = " + arr[i]);
        }
    }
}
```

> 🖥️ **Salida en terminal (Java):**
> ```
> (pegar aquí la salida)
> ```

---

**Python**
```python
arr = [10, 20, 30, 40, 50]
for i in range(len(arr)):
    print(f"arr[{i}] = {arr[i]}")
```

> 🖥️ **Salida en terminal (Python):**
> ```
> (pegar aquí la salida)
> ```

---

#### ▪️ Arreglo Bidimensional (2D)

Arreglo organizado en filas y columnas, similar a una tabla o matriz. Se accede a cada valor con dos índices: fila y columna.

**C**
```c
#include <stdio.h>

int main() {
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("mat[%d][%d] = %d\n", i, j, mat[i][j]);
        }
    }
    return 0;
}
```

> 🖥️ **Salida en terminal (C):**
> ```
> (pegar aquí la salida)
> ```

---

**Java**
```java
public class Arreglo2D {
    public static void main(String[] args) {
        int[][] mat = {{1, 2, 3}, {4, 5, 6}};
        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat[i].length; j++) {
                System.out.println("mat[" + i + "][" + j + "] = " + mat[i][j]);
            }
        }
    }
}
```

> 🖥️ **Salida en terminal (Java):**
> ```
> (pegar aquí la salida)
> ```

---

**Python**
```python
mat = [[1, 2, 3], [4, 5, 6]]
for i in range(len(mat)):
    for j in range(len(mat[i])):
        print(f"mat[{i}][{j}] = {mat[i][j]}")
```

> 🖥️ **Salida en terminal (Python):**
> ```
> (pegar aquí la salida)
> ```

---

#### ▪️ Arreglo Tridimensional (3D)

Arreglo con tres dimensiones: se puede imaginar como varias matrices apiladas una encima de otra. Se accede a cada valor con tres índices.

**C**
```c
#include <stdio.h>

int main() {
    int arr3d[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    int i, j, k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("arr3d[%d][%d][%d] = %d\n", i, j, k, arr3d[i][j][k]);
            }
        }
    }
    return 0;
}
```

> 🖥️ **Salida en terminal (C):**
> ```
> (pegar aquí la salida)
> ```

---

**Java**
```java
public class Arreglo3D {
    public static void main(String[] args) {
        int[][][] arr3d = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
        for (int i = 0; i < arr3d.length; i++) {
            for (int j = 0; j < arr3d[i].length; j++) {
                for (int k = 0; k < arr3d[i][j].length; k++) {
                    System.out.println("arr3d[" + i + "][" + j + "][" + k + "] = " + arr3d[i][j][k]);
                }
            }
        }
    }
}
```

> 🖥️ **Salida en terminal (Java):**
> ```
> (pegar aquí la salida)
> ```

---

**Python**
```python
arr3d = [[[1, 2], [3, 4]], [[5, 6], [7, 8]]]
for i in range(len(arr3d)):
    for j in range(len(arr3d[i])):
        for k in range(len(arr3d[i][j])):
            print(f"arr3d[{i}][{j}][{k}] = {arr3d[i][j][k]}")
```

> 🖥️ **Salida en terminal (Python):**
> ```
> (pegar aquí la salida)
> ```

---

## 💬 Principales Dificultades y Reflexión Crítica

Lo que más me costó en esta unidad fue entender la diferencia entre pase por valor y por referencia, especialmente en C con los punteros, porque el símbolo `*` y el `&` me confundían bastante al principio. Con los arreglos 3D también me perdí un poco tratando de imaginar cómo se organizan los datos con tres índices.

En lo académico estos temas son muy útiles porque permiten escribir programas más ordenados y reutilizables. En lo laboral, tanto las funciones como los arreglos son fundamentales en cualquier tipo de desarrollo, desde manejar listas de datos hasta estructurar sistemas más complejos.

---

<div align="center">
<a href="../README.md">⬅️ Volver al inicio</a>
</div>
