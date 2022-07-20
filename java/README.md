# Curso de Programação Orientada a Objetos - Curso em vídeo

__Professor:__ [@gustavoguanabara](https://github.com/gustavoguanabara)   
[POO - Curso em Vídeo](https://www.cursoemvideo.com/curso/java-poo/)

### programação de baixo nível > Programação linear > **Programação estruturada** > Programação modular > **POO**. 

## Vantagens da POO
  - Confiável - softwvare confiável, caso haja alteração em uma das partes as outras funcionam normalmente
  - Oportuno - O dvidi tudo em parte cada uma podde ser implementada em paraelo
  - Manutenivel - Atualizar o software é mais facil, visto que uma unica modificação pode beneficiar todas as partes que utilizam o objeto
  - Exensível - Não é um softwae estático, ele pode se expandir e traer novas funcionalidades
  - Reutilizável - Reutilização de código em softwares futuros
  - Natural - Se preocupa mais com a funcionalidade do que nos detalhes de implementaão, é de fácil entendimento.
  
# 

## Classe 
  Define os atributos e metodos comuns que serão compartilhadoas entre objetos:
  
  ```
    public class produto {
	    String nome;
	    String marca;
    }
  ```

## Metodo
  É a instancia de uma classe: (metodo para classe acima)
  ```
    public produto(String nome, String marca) {
      //metodo que vai setar valor aos atributos
		  this.nome = nome;
 		  this.marca = marca;
	}
	
	public void descricao() {
      //metodo para exibir os valores armazenados em cada atributo
		  System.out.println("Nome: "+this.nome);
		  System.out.println("Marca : "+this.marca);
	}
  ```

## Conceito de abstração em POO
  os objetos criados a partir da mesma classe podem ter inúmeros atríbutos diferentes, pode haver números maiores ou maiores variando de caso para caso.

## Modificadores de visibilidade
Indicam os níveis de acesso aos componentes internos de uma classe:
  - __Público + :__   
    Pode ser utilizado pela classe atual e em todas as outras classes;

  - __Privado - :__   
    Pode ser utilizado somente na classe atual;

  - __Protegido: # :__
    Pode ser utilizado pela classe atual e todas as suas sub-classes.

### Métodos especiais
- Métodos acessosres: __Get()__
- Métodos modficadores/mutantes: __Set()__
- Método construtor: __Construct()__

# 

## Encapsulamento
Emcapsular é ocultar partes independentes da implementação, permitindo construir partes "invisíveis" ao mundo exterior.
Um bom objeto emcapsulado possui:
- Interface: Lista de serviços fornecidos por um componente. É o contato com o mundo exterior, que define o que pode ser feito com um objeto desa classe.    Emcapsular __não é obrigatório__, mas é uma boa pática para produzir Classes mais eficientes.

Vantagns de encapsular:   
1 - Tornar mudanças invisíveis;  
2 - Facilitar a reutilização do código;  
3 - Reduzir efeitos colaterias  

  


## Herança

## Polimorfismo