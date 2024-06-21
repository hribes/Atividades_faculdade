#atividade 1

A<- scan()
B<- scan()

print(length(intersect(A,B))/length(union (A,B)))


#atividade 2

funcao_mult_sete <- function(numero){
    mult<-numero%%7
    if (mult == 0){
      print("é multiplo de 7")
    }
    else {
      print("Não é multiplo de 7")
    }
  }

#atividade 3

funcao_imc <- function(peso,altura){
  imc <- peso/altura^2
  if (imc <= 16.9) {
    return("Muito abaixo do peso")
  }
  if (imc >= 17 & imc < 18.5){
    return("Abaixo do peso")
  }
  if (imc >= 18.5 & imc < 25){
    return("Peso normal")
  }
  if (imc >= 25 & imc < 30){
    return("Acima do peso")
  }
  if (imc >= 30 & imc < 35){
    return("Obesidade grau 1")
  }
  if (imc >= 35 & imc < 40){
    return("Obesidade grau 2")
  }
  if (imc >= 40){
    return("Obesidade grau 3")
  }
}


#Atividade 4 (Versão 1)

print("Correção do exercicio")
compensa<- function(et, gas){
  if(et/gas<=0.7){
    return(data.frame("Etanol"=et, "Gasolina"=gas, "Compensa"="Etanol"));
  }else{
    return(data.frame("Etanol"=et, "Gasolina"=gas, "Compensa"="Gasolina"))
  }
}


#atividade 4 (Versão 2)

funcao_alc_gasol<-function(alcool,gasolina,km_alcool,km_gasolina){
  alc<- km_alcool/alcool
  gaso<- km_gasolina/gasolina
  if(alc < gaso){
    return(data.frame("alcool"=c(alcool),"gasolina"=c(gasolina),"KM_gasolina"=c(km_gasolina),"km_alcool"=c(km_alcool),"Qual compensa?"=c("gasolina")))
  }
  else{
    return(data.frame("alcool"=c(alcool),"gasolina"=c(gasolina),"KM_gasolina"=c(km_gasolina),"km_alcool"=c(km_alcool),"Qual compensa?"=c("alcool")))
  }
}
