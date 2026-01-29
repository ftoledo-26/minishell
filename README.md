# Minishell (Terminator)

 - [ESPAÑOL](./README_ES.md)
 - [INGLES](./README.md)

---
- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)


## Overview
Minishell (Terminator) is a simple command-line shell implemented in C. It provides a basic interface for users to interact with the operating system by executing commands, managing processes, and handling input/output redirection.

## Features
- Command execution: Supports executing built-in and external commands.
- Input/output redirection: Allows redirecting input and output using `<`, `>`, and `>>`.
- Piping: Supports command piping using the `|` operator.   
- Environment variables: Allows setting, unsetting, and using environment variables.
- Signal handling: Handles common signals like `SIGINT` and `SIGQUIT`.
- Error handling: Provides informative error messages for invalid commands and syntax errors.
## Installation
To compile and run Minishell, follow these steps:
1. Clone the repository:
   ```bash
   git clone https://github.com/ftoledo-/minishell.git
   cd minishell
   ```
2. Compile the project:
    ```bash
    make all
    ```
3. Run Minishell:
    ```bash
    ./minishell
    ```

## Usage
Once launched, you can use Minishell like a regular shell:
```bash
$ ls -la
$ pwd
$ echo "Hello World"
$ cat file.txt | grep pattern
$ export VAR=value
$ unset VAR
$ exit
```

## Contributing
Me and my Monkey 🐒(also me)

## License
What are licenses? 🐒🐒