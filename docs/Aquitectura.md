Definición de arquitectura

Cliente --> Frontend --> HTTP API --> Backend C (servidor) --> Base de datos (sql)

idea: 

El usuario interactúa con la interfaz web (frontend).
JavaScript transforma la acción en una request HTTP.
El backend recibe la request y la enruta según método y path.
El servidor valida sesión y permisos.
Se ejecuta la lógica de negocio correspondiente.
Se consulta o modifica la base de datos.
Se devuelve una respuesta HTTP al cliente.
El frontend actualiza la interfaz con los datos recibidos.

Módulos: 

Servidor(Maneja sockets TCP, parsing HTTP y routing de requests.)
Usuarios(Manejo de identidad, perfil y datos persistentes del usuario.)
Sesion(validación de sesion para usuarios, esto si o si debe ir separado de usuarios ya que 1 usuario puede tener n sesiones)
Mensajes(Entidad principal del sistema de chat con operaciones CRUD y validaciones de permisos.)  
Seguridad(autenticación(login,token,sesion) + autorización(rol,permiso,regla asociada al permiso) + capa defensiva pre servidor(validar token,block request invalida, rate limiting))
Base de datos(brinda congruencia a todos los datos que se van a manejar en la aplicación, permite identificar y relacionar usuarios con roles, mensajes con usuarios, tokens con sesiones.)
Reestricciones(reglas) 

Arquitectura del servidor:

Ruta:
server/
 ├── main.c
----------------------
        Programa C (main.c)
socket()
   ↓
bind(port)
   ↓
listen()
   ↓
accept()
   ↓
responder texto