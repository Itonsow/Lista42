public class firstChallenge {
    public static void main(String[] args) {
        boolean gameOver = true;
        int score = 10000; //800
        int levelCompleted = 8; //5
        int bonus = 200; //100

        int finalScore = score;

        if(gameOver){
            finalScore += (levelCompleted * bonus);
            System.out.println("Your final score was: " + finalScore);
        }
    }
}
