# Rock Paper Scissors Lizard Spock

# to import random function for using random.randrange
import random

# function to convert number to name
def number_to_name(number):
    if number == 0:
        return "rock"
    elif number == 1:
        return "Spock"
    elif number == 2:
        return "paper"
    elif number == 3:
        return "lizard"
    elif number == 4:
        return "scissors"
    else:
        return "Error"

# function to convert name to number
def name_to_number(name):
    if name == "rock":
        return 0
    elif name == "Spock":
        return 1
    elif name == "paper":
        return 2
    elif name == "lizard":
        return 3
    elif name == "scissors":
        return 4
    else:
        print name + "is not a character in RPSLS"


# function which selects the winner
def rpsls(guess): 
    
    # convert name to player_number using name_to_number
    player_number = name_to_number(guess)
    
    # compute random guess for comp_number using random.randrange()
    comp_number = random.randrange(0,5)

    # compute difference of player_number and comp_number modulo five
    winner = (comp_number - player_number) % 5

    # use if/elif/else to determine winner
    if winner < 3:
        player_win = False
    else:
        player_win = True
    
    # convert comp_number to name using number_to_name
    comp_name = number_to_name(comp_number)
    
    # print results
    print "Player chooses " + guess
    print "Computer chooses " + comp_name
    if player_win:
        print "Player wins!\n"
    elif comp_number == player_number:
        print "Player and computer tie!\n"
    else:
        print "Computer wins!\n"

    
player_guess = raw_input('Enter your choice.. Options: rock, Spock, paper, lizard, scissors')

rpsls(str(player_guess))