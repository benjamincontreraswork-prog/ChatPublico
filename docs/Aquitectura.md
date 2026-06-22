Definición de arquitectura

Cliente --> Frontend --> HTTP API --> Backend C (servidor) --> Base de datos (sql)

idea: 

Cliente ejectuta acción mediante frontend (js), se ejecuta función de transferencia de datos al servidor
Cliente puede hacer HTTP/SEND y HTTP/REQUEST 
Servidor valida conexión y luego sesión
Según solicitud, se consulta según corresponda a la base de datos, y se devuelve según la función que haya llamado con una query a la base de datos.

Módulos: 

Servidor(gestión de conexiones TCP y solicitudes HTTP)
Usuarios(identidad, roles de grupo e individuales)
Sesion(validación de sesion para usuarios, esto si o si debe ir separado de usuarios ya que 1 usuario puede tener n sesiones)
Mensajes(estructura de mensajes, creación, modificación, eliminación y "consulta" de mensajes)  
Seguridad(validación de identidad y permisos de usuarios) #se incluyen perfiles de moderadores, admin II y admin I.
Base de datos(brinda congruencia a todos los datos que se van a manejar en la aplicación, permite identificar y relacionar usuarios con roles, mensajes con usuarios, tokens con sesiones.)
Reestricciones(sirve para declarar los limites de cada usuario, asociando estos limites a roles.) 
