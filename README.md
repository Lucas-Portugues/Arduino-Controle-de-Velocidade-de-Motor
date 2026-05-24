# Controle de Velocidade de Motor

Neste projeto, a velocidade de um motor elétrico é controlada girando um potenciômetro. 

## Como Funciona?
* Conforme o **potenciômetro** é girado, ele envia um sinal que varia entre 0V e 5V para o Arduino.
* O Arduino lê essa posição e manda um sinal pulsado para a "porta" de um componente chamado **MOSFET**.
* Uma bateria externa alimentar o motor.

## Componentes Usados
* 1x Arduino Uno
* 1x Potenciômetro de 10k Ω
* 1x Transistor MOSFET de Canal N (chaveador de potência)
* 1x Resistor de 220 Ω (proteção do MOSFET)
* 1x Motor DC simples
* 1x Bateria de 9V (para dar força ao motor)
