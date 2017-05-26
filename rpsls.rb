def number_to_name(number)
  case number
    when 0
      return "rock"
    when 1
      return "Spock"
    when 2
      return "paper"
    when 3
      return "lizard"
    when 4
      return "scissors"
    else
      return "Not defined"
  end
end

def name_to_number(name)
  case name
    when "rock"
      return 0
    when "Spock"
      return 1
    when "paper"
      return 2
    when "lizard"
      return 3
    when "scissors"
      return 4
    else 
      return "Not defined"
  end
end

def rpsls(guess)
  
  player_number = name_to_number(guess)
  computer_number = rand(5)
  
  puts "Player chooses #{number_to_name(player_number)}"
  puts "Computer chooses #{number_to_name(computer_number)}"
  
  computer_number == player_number ? ( puts "Player and computer tie!" ) : (((computer_number - player_number) % 5) < 3? (puts "Computer wins") : (puts "Player wins" ))
  puts "\n"
  
end

# test your code
rpsls("rock")
rpsls("Spock")
rpsls("paper")
rpsls("lizard")
rpsls("scissors")