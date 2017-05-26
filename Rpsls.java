package rpsls;

import java.util.Random;

/**
 *
 * @author vinoth
 */
public class Rpsls {

    static String number_to_name(int n) {
        
        switch(n) {
            case 0:
                return "rock";
            case 1:
                return "Spock";
            case 2:
                return "paper";
            case 3:
                return "lizard";
            case 4:
                return "scissors";
            default:
                return "Not defined";
        }
    }
    
    static int name_to_number(String name) {
        
        switch(name) {
            case "rock":
                return 0;
            case "Spock":
                return 1;
            case "paper":
                return 2;
            case "lizard":
                return 3;
            case "scissors":
                return 4;
            default:
                return 5;
        }
    }
    
    static void winner(String player_guess){
        
        Random rand = new Random();
        
        int player_number = name_to_number(player_guess);

        int comp_number = rand.nextInt(5);

        String comp_name = number_to_name(comp_number);

        System.out.println("Player chooses " + player_guess);
        System.out.println("Computer chooses " + comp_name);

        if (comp_number == player_number) {
            System.out.println("Player and computer tie!\n");
        } else if ((comp_number - player_number) % 5 < 3) {
            System.out.println("Computer wins!\n");
        } else {
            System.out.println("Player wins!\n");
        }
    }
    
    public static void main(String[] args) {
        
        // Test samples
        winner("rock");
        winner("Spock");
        winner("paper");
        winner("lizard");
        winner("scissors");
    }
}