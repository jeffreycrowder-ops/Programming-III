package p3pp2;

public class ThreadCounterApp {

    // the thread function to count from 0 to 20
    public static void countUp() {

        System.out.println("Thread 1 Start: Begin Counting Up to 20");

        for (int i = 0; i <= 20; i++) {
            System.out.println(i);

            try {
                // pauses for 250 milliseconds between counts for better count visibility
                Thread.sleep(250);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    // the thread function to count from 20 to 0
    public static void countDown() {

        System.out.println("Thread 2 Start: Begin Counting Down to 0");

        for (int i = 20; i >= 0; i--) {
            System.out.println(i);

            try {
                // pauses for 250 milliseconds between counts for better count visibility
                Thread.sleep(250);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    public static void main(String[] args) {

        System.out.println("Launching Counter Application!");

        // create the first thread
        Thread thread1 = new Thread(() -> countUp());

        try {

            // waits for thread 1 to finish
            thread1.start();
            thread1.join();

            // creates a second thread
            Thread thread2 = new Thread(() -> countDown());

            // waits for thread 2 to finish
            thread2.start();
            thread2.join();

        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("Program Complete!");
    }
}