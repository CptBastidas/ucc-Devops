# Codigos de clase

1 cd ~/.ssh/ para crear una ssh en git vamos al directorio de ssh 

2 ssh-keygen creamos una llave nueva 

3 ls -l codigo para mirar las llaves que tenemos 

4 cat id_rsa.pub miramos la llave y la copiamos en el git 

5 sudo service ssh restart se utiliza mara resetiar el git 

6 ssh-agent sh -c 'ssh-add; ssh-add -l' este codigo es para que corra la llave y ademas si no nos sirve utilizamos el codigo de val para que funcione si o si 

7 eval "$(ssh-agent -s)" ese ejecuta si o si el agente 

8 git pull luego hacemos este codigo para subir todo a git 

----------------
1 git branch --set-upstream-to=origin/master master codigo para cambiar el main a master o a otro nombre 

2 git pull --allow-unrelated-histories lo utilizamos para cojer las historias remotas no contadas y nos deje correr el git pull 
