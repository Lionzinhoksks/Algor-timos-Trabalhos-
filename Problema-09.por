programa 
{ inclua biblioteca Matematica--> mat
  funcao inicio() {
    //Declaração de Variáveis
      inteiro Valor, Novo_Valor, Unidade, Dezena, Centena

    //Entrada de Dados
      escreva("Informe um Número Natural, de apenas 3 dígitos: ")
      leia(Valor)
    
    //Processamento
      Unidade = Valor % 10
      Dezena = (Valor % 100)/10
      Centena = Valor/100
    
      Novo_Valor = Unidade * 100 + Dezena * 10 + Centena
    
    //Saída de Dados
      escreva("A forma inversa desse número é: ", Novo_Valor)
  }
}
