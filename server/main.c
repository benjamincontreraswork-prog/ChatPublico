#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {

    // 1. Crear socket
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);

    if (server_fd == -1) {
        printf("Error creando socket\n");
        return 1;
    }

    // 2. Definir dirección del servidor
    struct sockaddr_in server_addr;

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8080);
    server_addr.sin_addr.s_addr = INADDR_ANY;
C/C++: Select IntelliSense Configuratio
    // 3. Bind
    bind(server_fd, (struct sockaddr*)&server_addr, sizeof(server_addr));

    // 4. Listen
    listen(server_fd, 5);

    printf("Servidor escuchando en puerto 8080...\n");

    // 5. Accept loop
    while (1) {

        int client_fd = accept(server_fd, NULL, NULL);

        // 6. Responder algo fijo
        char *response =
            "HTTP/1.1 200 OK\n"
            "Content-Type: text/plain\n"
            "\n"
            "PublicChat OK\n";

        write(client_fd, response, strlen(response));

        close(client_fd);
    }

    return 0;
}