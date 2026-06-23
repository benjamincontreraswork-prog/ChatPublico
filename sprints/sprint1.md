Objetivos sprint 1

Construir un servidor en C que:

localhost:8080 → "PublicChat OK"

Nada de usuarios todavía.
Nada de mensajes.
Nada de base de datos.

Solo esto:

Un programa que escucha internet y responde


Flujo real

Cliente(navegador web) --> TCP conexión --> Servidor C (socket)

Socket --> bind --> listen --> accept --> read/write --> close
1. socket()
2. bind()
3. listen()
4. accept()
5. read/write
6. close()

crear:

server/
 ├── main.c
