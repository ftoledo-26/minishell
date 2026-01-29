FROM ubuntu:20.04

# Actualizar paquetes e instalar herramientas de desarrollo
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        build-essential \
        gcc \
        make \
        valgrind \
        git \
        libreadline-dev \
    && apt-get clean && \
    rm -rf /var/lib/apt/lists/*

# Establecer el directorio de trabajo
WORKDIR /app

# Copiar el código fuente (ajusta según tu proyecto)
COPY . .

# Compilar (ajusta el comando según tu Makefile)
# RUN make

# Comando por defecto (accede al contenedor)
CMD ["bash"]   