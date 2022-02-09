
import java.util.*;

/**
 * takwani mam's problem of 8 boys
 */

public class game {

    static ArrayList<String> players = new ArrayList<String>();

    // boolean jump(String player) {
    // int ind = game.players.indexOf(players);
    // if (player.charAt(0) == 'L') {
    // if (ind + 2 <= 8) {
    // if (game.players.get(ind + 2).equals("0") || game.players.get(ind +
    // 2).charAt(0) == 'R') {
    // Collections.swap(game.players, ind, ind + 2);
    // return true;
    // }
    // }
    // }
    // return false;
    // }

    public static void main(String args[]) {
        game.players.add("L1");
        game.players.add("L2");
        game.players.add("L3");
        game.players.add("L4");

        game.players.add("0");

        game.players.add("R1");
        game.players.add("R2");
        game.players.add("R3");
        game.players.add("R4");

        System.out.println("Started");
        System.out.println(game.players);

    }
}