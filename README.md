# **Computación Paralela** 2015 - Semestre II

## Maestría en Ingeniería Computacional - Universidad de Caldas

Raúl Ramos-Pollán, Universidad Industrial de Santander, \[[+info](https://sites.google.com/site/rulixrp/courses)\] [rramosp@uis.edu.co](mailto:rramosp@uis.edu.co)

---

**Estaremos usando:**

+ una máquina virtual configurada para las lecciones 1, 2 y 3, con CentOS 6, OpenMP y Python Anaconda para que puedas realizar de manera independiente tus ejercicios (_contáctame para obtenerla_)
+ una máquina virtual con la instalación del [Spark](http://spark.apache.org/) para la lección 4. Seguiremos parte del contenido del curso en EDX sobre [Scalable Machine Learning](https://courses.edx.org/courses/BerkeleyX/CS190.1x/1T2015/info)
+ la infraestructura `guane` de [Centro de Supercómputo y Cálculo Científico de la UIS](http://www.sc3.uis.edu.co) sobre todo para las pruebas de escalabilidad y uso de CUDA/GPUs (_instrucciones de acceso más abajo_)

**Crea una copia local de este repositorio para trabajar en los ejercicios desde la máquina virtual del curso y lanza tu servidor personal del entorno de ejecución de `ipython notebooks`**

    :::console
    git clone https://bitbucket.org/rramosp/ucaldas.20152.msc
    ipython notebook

## Lección 1 - Introducción

**Temas:** Uso infraestructura SC3-UIS, Paralelismo y computación, Computación distribuida, Arquitecturas de procesadores

**Refs:** Supercomputación y Cálculo Científico UIS [[web site](http://www.sc3.uis.edu.co/)], Caché effects [[enlace](http://igoro.com/archive/gallery-of-processor-cache-effects/)] , HPC Course @UWisc [[enlace](http://sbel.wisc.edu/Courses/ME964/2012/)]

**Ejercicios:**

+ [Lección 1 - C warmup](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/01%20INTRO%20-%20Notas%201%20-%20C%20warmup.ipynb/%3Fat%3Dmaster)
+ [Lección 1 - Alineamiento de Datos - parte 1](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/01%20INTRO%20-%20ProblemSet%201%20-%20Alineamiento%20de%20datos%20-%20parte%201.ipynb?at=master)
+ [Lección 1 - Alineamiento de Datos - parte 2](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/01%20INTRO%20-%20ProblemSet%202%20-%20Alineamiento%20de%20datos%20-%20parte%202.ipynb?at=master)
+ [Lección 1 - Líneas de Caché](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/01%20INTRO%20-%20ProblemSet%203%20-%20Lineas%20de%20cache.ipynb?at=master)
+ [Lección 1 - Tamaños de Caché](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/01%20INTRO%20-%20ProblemSet%204%20-%20Tamanos%20de%20cache.ipynb?at=master)

## Lección 2 - OpenMP
**Temas:** Modelo de programación, Variables compartidas y sincronización, Tareas, Optimización

**Refs:** Tim Mattson, Intel [[video lectures](http://www.youtube.com/watch?v=nE-xN4Bf8XI&list=PLLX-Q6B8xqZ8n8bwjGdzBJ25X2utwnoEG), [materials](https://software.intel.com/en-us/courseware/249662)], Lista de recursos [[enlace](http://www.compunity.org/training/tutorials/)]

**Ejercicios:**

+ [Lección 2 - OpenMP warmup](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/02%20OPENMP%20-%20ProblemSet%201%20-%20Warmup.ipynb?at=master)
+ [Lección 2 - PI paralelo](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/02%20OPENMP%20-%20ProblemSet%202%20-%20PI%20paralelo.ipynb?at=master)
+ [Lección 2 - PI mejorado](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/02%20OPENMP%20-%20ProblemSet%203%20-%20PI%20mejorado.ipynb?at=master)
+ [Lección 2 - Loops](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/02%20OPENMP%20-%20ProblemSet%204%20-%20Loops.ipynb?at=master)
+ [Lección 2 - Reducers](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/02%20OPENMP%20-%20ProblemSet%205%20-%20Reduce.ipynb?at=master)

## Lección 3 IPython Parallel
**Temas:** Modelo de programación, Distribución de Tareas, Comunicaciones, Coordinación, Sincronización, Procesamiento de imágenes.

**Refs:** [IPython for Parllel Computing](https://ipython.org/ipython-doc/3/parallel/index.html)

**Ejercicios:**

+ [Lección 3 - Introductión a Python](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/03%20PARALLEL%20IPYTHON%20-%20ProblemSet%201%20-%20Introduccion_a_Python.ipynb?at=master)
+ [Lección 3 - IPython Parallel Warmup](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/03%20PARALLEL%20IPYTHON%20-%20ProblemSet%203%20-%20IPython%20Parallel%20Básico.ipynb?at=master)
+ [Lección 3 - Cómputo de PI en multinodo](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/03%20PARALLEL%20IPYTHON%20-%20ProblemSet%202%20-%20Compute%20PI.ipynb?at=master)
+ [Lección 3 - Exploración de configuraciones de clasificadores automáticos (_machine learning_)](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/03%20PARALLEL%20IPYTHON%20-%20ProblemSet%204%20-%20Machine%20learning.ipynb?at=master)
+ [Lección 3 - Procesamiento de imágenes](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/03%20PARALLEL%20IPYTHON%20-%20ProblemSet%205%20-%20Internode%20communication.ipynb?at=master)

## Lección 4 Paralelismo Masivo con Apache Spark
**Temas:** Modelos de paralelismo en Big Data, Resilient Distributed Datasets, Modelo de programación, Acciones y Operaciones Spark

**Refs:**  Seguiremos parte del curso sobre [Scalable Machine Learning](https://courses.edx.org/courses/BerkeleyX/CS190.1x/1T2015/info) en EDX. Los siguientes ProblemSets son parte de los assignments de dicho curso.

**Ejercicios:**

+ [Lección 4 - Procesado de logs web](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/04%20SPARK%20-%20ProblemSet%201%20-%20apache_log_student.ipynb?at=master)
+ [Lección 4 - Análisis de texto y resolución de entidades](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/04%20SPARK%20-%20ProblemSet%202%20-%20text_analysis_and_entity_resolution_student.ipynb?at=master)
+ [Lección 4 - Sistemas de recomendación](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/04%20SPARK%20-%20ProblemSet%203%20-%20machine_learning_student.ipynb?at=master)
+ [Lección 4 - Reconocimiento de Audio](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/04%20SPARK%20-%20ProblemSet%204%20-%20linear_reg_student.ipynb?at=master)
+ [Lección 4 - Predicción de navegación web](http://nbviewer.ipython.org/urls/bitbucket.org/rramosp/ucaldas.20152.msc/raw/master/04%20SPARK%20-%20ProblemSet%205%20-%20ctr_student.ipynb?at=master)


## Uso infraestructura **GUANE** @ **UIS**

si, por ejemplo, tu número de estudiante es el 03 usa la cuenta `estudiante03` y el puerto `9903` en los comandos siguientes.

Entra en la máquina de salida de la Universidad de Caldas:

    :::console
    ssh progpara@c-head.ucaldas.edu.co -L9903:localhost:9903

Usa la cuenta compartida para entrar en la máquina `toctoc` y en la máquina `guane` que son los puntos de entrada para la infraestructura de la UIS:

    :::console
    ssh ucaldas@toctoc.grid.uis.edu.co -o ServerAliveInterval=30 -L9903:localhost:9903

    ssh ucaldas@guane -L9903:localhost:9903


Una vez en `guane`, usa tu cuenta para entrar en la máquina reservada para el curso (p.ej. `guane01`, confirma con el profesor cuál está disponible durante el curso):

    :::console
    ssh estudiante03@guane01 -L9903:localhost:9903


Si es la primera vez que entras, crea una copia del repositorio de ejercicios para poder trabajarlos de manera independiente 

    :::console
    git clone https://bitbucket.org/rramosp/ucaldas.20142.msc


Lanza tu servidor personal de notebooks de ipython:

    :::console
    ipython notebook --port 9903 --no-browser


Abre la siguiente dirección en un browser de tu computadora de escritorio

    :::console
    http://localhost:9903