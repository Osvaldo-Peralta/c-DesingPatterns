# Este repositorio contempla ejercicios que aplican los Patrones de Diseño: Iterator, Compositer y State

## Comandos necesarios para compilar y ejecutar el programa
Serán necesarios 2 comandos principalmente:
### Para compilar el programa
Dentro del directorio de por ejemplo chapter9, en donde te encontraras con los directorios `src`, y `includes`.

Crea y entra al directorio `build`con el comando `mkdir build && cd build`.

Entonces ejecuta el siguiente comando para configurar el programa:
```
cmake ..
```
Promp esperado:
```powershell
$ cmake ..
-- The C compiler identification is GNU 13.3.0
-- The CXX compiler identification is GNU 13.3.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done (1.6s)
-- Generating done (0.0s)
-- Build files have been written to: /home/proyects/DesingPatterns/chapter9/build
```

Una vez finalizado el proceso, para compilar deberas ejecutar el siguiente comando:
```
make
```
Promp esperado:
```powershell
make
[ 16%] Building CXX object CMakeFiles/main.dir/src/CafeMenu.cpp.o
[ 33%] Building CXX object CMakeFiles/main.dir/src/DinerMenu.cpp.o
[ 50%] Building CXX object CMakeFiles/main.dir/src/MenuItem.cpp.o
[ 66%] Building CXX object CMakeFiles/main.dir/src/PancakeHouseMenu.cpp.o
[ 83%] Building CXX object CMakeFiles/main.dir/src/main.cpp.o
[100%] Linking CXX executable main
[100%] Built target main
```

Por ultimo para ejecutar el programa ingresa el siguiente comando
```
./main
```

Para eliminar un ejecutable use este comando:
```
rm main
```
### Atencion
Tenga en consideracion que los comandos mencionados arriba solo son efectivos dentro del directorio `build`