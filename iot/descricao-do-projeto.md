# Monitor de temperatura da sala de servidores | LeiteTech Soluções

## 1\. Justificativa

A LeiteTech Soluções guarda em seu 4º andar a sala de servidores que atende os 50 funcionários da empresa. Os servidores produzem calor, e uma sala que esquenta demais pode causar perda de desempenho, desligamentos inesperados e danos aos equipamentos.

Este protótipo produz um aviso referente à temperatura para a equipe de TI: um sensor mede a temperatura da sala e três LEDs indicam se ela está normal, em atenção ou crítica. Assim, a equipe percebe o aquecimento antes que ele derrube os serviços.

## 2\. Componentes e pinos

|Componente|Quantidade|Pino|Função|
|-|-|-|-|
|Arduino Uno R3|1||Lê o sensor e controla os LEDs|
|Protoboard pequena|1||Organiza as ligações sem solda|
|Sensor TMP36|1|A0 (sinal), 5V e GND|Mede a temperatura|
|LED verde|1|8|Indica temperatura normal|
|LED amarelo|1|9|Indica atenção|
|LED vermelho|1|10|Indica estado crítico|
|Resistor de 220 Ω|3|em série com cada LED|Limita a corrente de cada LED|
|Fios jumper|conforme necessário||Ligações|

## 3\. Circuito

* Link do Tinkercad: https://www.tinkercad.com/things/cH5nLgESfBo-monitor-de-temperatura-da-leitetech
* Código: [`codigo.ino`](codigo.ino)

!\[Circuito do monitor de temperatura no Tinkercad](circuito.png)

## 4\. Funcionamento

|Faixa|Temperatura|LED aceso|
|-|-|-|
|Normal|abaixo de 28 °C|Verde|
|Atenção|de 28 °C até menos de 32 °C|Amarelo|
|Crítico|32 °C ou mais|Vermelho|

## 5\. Lógica do código (`codigo.ino`)

O Arduino lê o pino A0 e recebe um número de 0 a 1023, que chamei de leitura, e converte em volts: leitura × 5 ÷ 1023.

Converte novamente, só que de volts para °C: (tensão − 0,5) × 100, porque o TMP36 entrega 0,5 V a 0 °C e sobe 0,01 V por grau.

Compara a temperatura com os limites através dos `if` e acende somente o LED da condição, apagando os outros dois.

Por fim, mostra os valores no Monitor Serial e espera um pouco antes de repetir, para dar tempo de analisar.

## 6\. Testes

|Teste|Temperatura ajustada|Resultado esperado|Temperatura no Monitor Serial|LED aceso|Resultado|Captura|
|-|-|-|-|-|-|-|
|Normal|27 °C|Somente o verde|27,22 °C|Verde|Aprovado|`teste-1-normal-verde.png`|
|Atenção|28 °C|Somente o amarelo|28,20 °C|Amarelo|Aprovado|`teste-2-alerta-amarelo.png`|
|Crítico|33 °C|Somente o vermelho|33,09 °C|Vermelho|Aprovado|`teste-3-critico-vermelho.png`|

### Teste 1 - Normal (27 °C)

!\[Teste normal, LED verde](teste-1-normal-verde.png)

### Teste 2 - Atenção (28 °C)

!\[Teste de atenção, LED amarelo](teste-2-alerta-amarelo.png)

### Teste 3 - Crítico (33 °C)

!\[Teste crítico, LED vermelho](teste-3-critico-vermelho.png)

## 7\. Conclusão

Protótipo passou nos testes e entregou o resultado esperado, garantindo o resfriamento do sistema.

