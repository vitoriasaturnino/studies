class People
  def toThank
    puts 'Thank you!'
  end

  # também é possível criar métodos com uma saida padrão
  def scream(text = "AHHHHH!")
    puts text
  end
end

people1 = People.new
people1.toThank
# ou definir qual sera a saida quando o método for chamado
people1.scream("Grrrhhhhh!")
