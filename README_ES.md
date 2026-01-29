# Minishell (Terminator)

- [ESPAÑOL](./README_ES.md)
- [INGLÉS](./README.md)

---

- [Descripción general](#descripción-general)
- [Características](#características)
- [Instalación](#instalación)
- [Uso](#uso)
- [Contribuciones](#contribuciones)

## Descripción general
Minishell (Terminator) es un shell de línea de comandos simple implementado en C. Proporciona una interfaz básica para que los usuarios interactúen con el sistema operativo ejecutando comandos, gestionando procesos y manejando redirección de entrada/salida.

## Características
- Ejecución de comandos: Soporta la ejecución de comandos integrados y externos.
- Redirección de entrada/salida: Permite redirigir entrada y salida usando `<`, `>` y `>>`.
- Tuberías: Soporta tuberías de comandos usando el operador `|`.
- Variables de entorno: Permite establecer, deshacer y usar variables de entorno.
- Manejo de señales: Maneja señales comunes como `SIGINT` y `SIGQUIT`.
- Manejo de errores: Proporciona mensajes de error informativos para comandos inválidos y errores de sintaxis.

## Instalación
Para compilar y ejecutar Minishell, sigue estos pasos:
1. Clona el repositorio:
    ```bash
    git clone https://github.com/ftoledo-/minishell.git
    cd minishell
    ```
2. Compila el proyecto:
    ```bash
    make all
    ```
3. Ejecuta Minishell:
    ```bash
    ./minishell
    ```

## Uso
Una vez iniciado, puedes usar Minishell como un shell regular:
```bash
$ ls -la
$ pwd
$ echo "Hola Mundo"
$ cat file.txt | grep pattern
$ export VAR=value
$ unset VAR
$ exit
```

## Contribuciones
![foto](a2b2546ace95b1eff0d81097389f000d.jpg)

## Licencia
¿Qué son las licencias? 🐒🐒