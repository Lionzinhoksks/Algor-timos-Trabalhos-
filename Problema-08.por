programa { 

  funcao inicio() {
    
    //Declaração de Variáveis
      real Temperatura_Celsius, Temperatura_Fahrenheit
    
    //Entrada de dados
      escreva("Informe a temperatura em graus Celsius, que deseja converter: ")
      leia(Temperatura_Celsius)
    
    //Processamento
      Temperatura_Fahrenheit = Temperatura_Celsius * (9.0/5.0) + 32.0
    
    //Saída de Dados
      escreva(Temperatura_Celsius, " graus Celsius equivalem à: ", Temperatura_Fahrenheit, " graus Farenheit.")
  }
}