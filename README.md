# Bubble Sort: Implementação em C

<div style="display: inline-block;">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Maintained%3F-yes-green.svg"/> 
<img align="center" height="20px" width="60px" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/> 
<img align="center" height="20px" width="80px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
<a href="https://github.com/mpiress/midpy/issues">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat"/>
<img align="center" height="20px" width="80px" src="https://badgen.net/badge/license/MIT/green"/>
</a> 
</div>

<p> </p>
<p> </p>

<p align="justify">
Método de ordenação simples de custo computacional quadrático que utiliza sucessívas comparações para a realização de ordenação. O bubble sort ou método da bolha é um método de ordenação por flutuação cujo nome vem de uma analogia do comportamento de flutuação de bolhas de sabão, em que bolhas mais leves flutuam mais alto e logo definem uma certa ordenação a partir da comparação entre pesos.
</p>

<p align="justify">
Em sua implementação, o vetor dado como entrada é percorrido inúmeras vezes e a cada passadagem é inserido (i.e., flutuado) para o fundo/fim do vetor o elemento de maior valor. Considerando sua forma de execução, pode-se observar que sua complexidade computacional o inviabiliza para grandes entradas. Em literatura, há certa divergência quanto ao tamanho máximo/ideal de entrada para sua aplicação, sendo essa definida entre 25 a 50 elementos. 
</p>

<p align="justify">
Considerando um pequento exemplo com um vetor de 5 posições, vejamos como seria uma única interação do método para a ordenação de valores inteiros. 
</p>

<p align="center">
	<img src="imgs/bubble.png"/> 
</p>


<p align="justify">
Observe pela figura acima que a cada interação do algoritmo, apenas um elemento é colocado em ordem, o que exige muito trabalho durante o processo de composição da ordenação correta. Nesse processo, a cada interação o vetor é revisitado para os n - 1 elementos restantes, o que faz com que o método seja executado até que se tenha 2 elementos ainda não vizitados. 
</p>

# Compilação e Execução

A lista dinâmica disponibilizada possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |


# Contatos

<div style="display: inline-block;">
<a href="https://t.me/michelpires369">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Telegram-2CA5E0?style=for-the-badge&logo=telegram&logoColor=white"/> 
</a>

<a href="https://www.linkedin.com/in/michelpiressilva/">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"/>
</a>

</div>

<p> </p>


<a style="color:black" href="mailto:michel@cefetmg.br?subject=[GitHub]%20Source%20Dynamic%20Lists">
✉️ <i>michel@cefetmg.br</i>
</a>
