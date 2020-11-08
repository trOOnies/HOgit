# HOgit (Scasso, Facundo M.)
Repositorio con los ejercicios resueltos y practicados

-Scasso, Facundo M.


## Cómo creamos este repo

1. Forkeamos el repositorio perteneciente al equipo del WTPC de la UNQ, para poder trabajar sobre nuestro propio repo y (más importante aún) tener acceso para editar y jugar sin romper el original.
2. Utilizamos la siguiente línea para clonar el repo forkeado en mi compu, mediante uso de key SSH:

```
git clone git@github.com:trOOnies/HOgit.git
```

- Para ello seguimos los pasos del [siguiente posteo](https://docs.github.com/en/free-pro-team@latest/github/authenticating-to-github/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent), como también así la sección [Settings](https://github.com/settings/keys) de GitHub. Ahora se deberá utilizar esta key cuando se quieran pushear commits.

3. Ya podamos acceder a la versión no modificada del repo original (pero en el nuevo repo copia de éste).


## Primeros pasos

### Tareas iniciales

Los primeros commits son que originalmente estaban en el repo anterior, más algunos de prueba.
Utilizamos *git log* para mostrar la historia previa a la resolución de los ejercicios.

```
commit 4e0c... (HEAD -> master, tag: v1.0, origin/master, origin/HEAD)
Author: Facundo M Scasso <facundomartinscasso@gmail.com>                                                                Date:   Sun Nov 8 16:25:09 2020 -0300

    vacio la branch para poder empezar con los ejercicios

commit bc6c...
Author: Facundo M Scasso <facundomartinscasso@gmail.com>
Date:   Sat Oct 24 16:49:12 2020 -0300

    add git ignore file

commit 373e... (tag: v0.1)
Author: Pablo Alcain <pabloalcain@users.noreply.github.com>
Date:   Tue Mar 8 15:18:38 2016 -0300

    Cambiado protocolo por defecto a https

commit ed74...
Author: Pablo Alcain <pabloalcain@gmail.com>
Date:   Tue Nov 3 17:26:12 2015 -0300

    Agregados comandos

commit 5339...
Merge: ab6622e 5ffe580
Author: Pablo Alcain <pabloalcain@gmail.com>
Date:   Tue Nov 3 10:07:05 2015 -0300
```

Notar cómo ya hicimos uso de dos aspectos vistos en la clase de Git:
- *git tag [nombre del tag] [primeros dígitos del commit hash]*
    - Utilizamos este comando para marcar de forma cómoda el estado del repo previo a los cambios del nuevo usuario (v0.1), y además para marcar el inicio de la resolución de ejercicios (v1.0).
- Utilizamos el archivo .gitignore para ignorar un archivo nuevo -ya eliminado en el commit v1.0- llamado... Bueno, no estoy 100% seguro, así que buscamos con *git help diff* la sintaxis y explicación de *git diff bc6cb HEAD*, para recordar el nombre del archivo: *i_need_to_be_ignored.xlsx*.

Luego, para cerrar una forma inicial de este archivo, terminamos de escribir este primer texto en Visual Studio Code y seguimos los pasos hasta pushear los cambios:
```
git status  # Confirmo que ejercicios.md haya sido modificado
git add ejercicios.md
git commit -m "explico git clone, los commits iniciales e inicio ejercicios.md"
git push
Enter passphrase for key '/c/Users/.../.ssh/id_rsa':
(...)
To github.com:trOOnies/HOgit.git
   4e0cecf..2bc9ad9  master -> master
```

## Branches

Con *git branch -a* nos fijamos cuáles son las branches actuales:
```
C:\Users\facun\Documents\mis_repos\HOgit>git branch -a
* master
  remotes/origin/HEAD -> origin/master
  remotes/origin/charlas
  remotes/origin/ejercicios
  remotes/origin/master
```

Consideramos que queremos reestructurar las ramas de repo, ya que la cantidad de archivos es pequeña y que por el momento este nuevo repositorio va a ser de uso personal. Dicho esto, corremos lo siguiente para hacer una poda de branches remotas:
```
git push origin --delete ejercicios
git push origin --delete charlas
```

Y nos queda:
```
C:\Users\facun\Documents\mis_repos\HOgit>git branch -a
* master
  remotes/origin/HEAD -> origin/master
  remotes/origin/master
```

Acto seguido, creamos una nueva branch que sea de utilidad:
```
git branch develop
```



