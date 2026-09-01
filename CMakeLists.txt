cmake_minimum_required(VERSION 3.16)

project(practica_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# ============================================
# EJECUTABLE PRINCIPAL
# ============================================

add_executable(practica_1

    # ----------------------------------------
    # Archivo principal
    # ----------------------------------------

    src/main.cpp


    # ----------------------------------------
    # Archivo de cabecera
    # ----------------------------------------

    include/enlace.h


    # ----------------------------------------
    # EJERCICIOS
    # ----------------------------------------

    src/ejercicios/ejercicio_1.cpp
    src/ejercicios/ejercicio_2.cpp
    src/ejercicios/ejercicio_3.cpp
    src/ejercicios/ejercicio_4.cpp
    src/ejercicios/ejercicio_5.cpp
    src/ejercicios/ejercicio_6.cpp
    src/ejercicios/ejercicio_7.cpp
    src/ejercicios/ejercicio_8.cpp
    src/ejercicios/ejercicio_9.cpp
    src/ejercicios/ejercicio_10.cpp
    src/ejercicios/ejercicio_11.cpp
    src/ejercicios/ejercicio_12.cpp
    src/ejercicios/ejercicio_13.cpp
    src/ejercicios/ejercicio_14.cpp
    src/ejercicios/ejercicio_15.cpp
    src/ejercicios/ejercicio_16.cpp
    src/ejercicios/ejercicio_17.cpp
    src/ejercicios/ejercicio_18.cpp
    src/ejercicios/ejercicio_19.cpp
    src/ejercicios/ejercicio_20.cpp
    src/ejercicios/ejercicio_21.cpp
    src/ejercicios/ejercicio_22.cpp
    src/ejercicios/ejercicio_23.cpp
    src/ejercicios/ejercicio_24.cpp
    src/ejercicios/ejercicio_25.cpp
    src/ejercicios/ejercicio_26.cpp
    src/ejercicios/ejercicio_27.cpp
    src/ejercicios/ejercicio_28.cpp
    src/ejercicios/ejercicio_29.cpp
    src/ejercicios/ejercicio_30.cpp


    # ----------------------------------------
    # PROBLEMAS
    # ----------------------------------------

    src/problemas/problema_1.cpp
    src/problemas/problema_2.cpp
    src/problemas/problema_3.cpp
    src/problemas/problema_4.cpp
    src/problemas/problema_5.cpp
    src/problemas/problema_6.cpp
    src/problemas/problema_7.cpp
    src/problemas/problema_8.cpp
    src/problemas/problema_9.cpp
    src/problemas/problema_10.cpp
    src/problemas/problema_11.cpp
    src/problemas/problema_12.cpp
    src/problemas/problema_13.cpp
    src/problemas/problema_14.cpp
    src/problemas/problema_15.cpp
    src/problemas/problema_16.cpp
    src/problemas/problema_17.cpp
)


# ============================================
# DIRECTORIO DE ARCHIVOS DE CABECERA
# ============================================

target_include_directories(practica_1 PRIVATE
    include
)


# ============================================
# DOCUMENTACIÓN
# ============================================

add_custom_target(Documentacion SOURCES
    README.md
)


# ============================================
# INSTALACIÓN
# ============================================

include(GNUInstallDirs)

install(TARGETS practica_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
