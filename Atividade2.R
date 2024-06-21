#Dada uma sequência que o usuário irá inserir, classificará como PA ou PG. A função retornará para o usuário, a classificação juntamente com o primeiro termo da sequência e o valor de sua soma.
{
    tipoPA_PG <- function(){
      
      tipo <- readline("Determine o tipo desejado (PA ou PG): ")
      
      funcao_soma <- function(){
        print("Digite os termos da sequência: ")
        seq <- scan()
        r = seq[2] - seq[1]
        q = seq[2] / seq[1]
        
        u_e <- seq[length(seq)]
        
        somapa <- (seq[1]+u_e)*length(seq)/2
        somapg <- seq[1]*(q^length(seq)-1)/(q - 1)
        
        while(TRUE){
          if((tipo == "pa" || tipo == "PA") & u_e == seq[1]+ ((length(seq)-1)*r)){
            return(paste0(somapa, " sendo o primeiro termo ",seq[1]))
            }
          if ((tipo == "pg" || tipo == "PG") & u_e == seq[1]*q^(length(seq)-1)){
            return(paste0(somapg, " sendo o primeiro termo",seq[1]))
            }
            else{
            
            print("Digite uma sequência válida! Tente novamente")
            return(funcao_soma())
          }
        }
      }
      
      while(TRUE){
        if ( tipo == "PA" || tipo == "pa"){
          resultado <- funcao_soma()
          return(paste0("A soma de seus termos é ", resultado))
          
          
        }else if(tipo == "PG" || tipo == "pg"){
          resultado <- funcao_soma()
          return(paste0("A soma de seus termos é ", resultado))
          
          
        }else {
          print("Digite um tipo válido (PA ou PG) ")
          return(tipoPA_PG())
        }
      }
    }
}
