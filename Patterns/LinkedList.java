package Patterns;
import java.util.Scanner;
class Node {
    int data;
    Node next;
    Node(int data) {
        this.data = data;
        this.next = null;
    }
}
class CircularLinkedList {
    Node head = null;
    public void add(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            head.next = head;
        } else {
            Node temp = head;
            while (temp.next != head) {
                temp = temp.next;
            }
            temp.next = newNode;
            newNode.next = head;
        }
    }
    public void display() {
        if (head == null) return;
        Node temp = head;
        do {
            System.out.print(temp.data + " ");
            temp = temp.next;
        } while (temp != head);
        System.out.println();
    }
    public boolean isPalindrome() {
        if (head == null) return true;
        Node slow = head;
        Node fast = head;
        Node prev = null;

        do {
            fast = fast.next.next;
            prev = slow;
            slow = slow.next;
        } while (fast != head && fast.next != head);
        if (fast != head) {
            slow = slow.next;
        }
        Node secondHalf = slow;
        Node prevHalf = null;
        Node current = secondHalf;

        do {
            Node nextNode = current.next;
            current.next = prevHalf;
            prevHalf = current;
            current = nextNode;
        } while (current != secondHalf);
        Node firstHalf = head;
        current = prevHalf; // start from the head of the reversed second half

        boolean isPalin = true;
        do {
            if (firstHalf.data != current.data) {
                isPalin = false;
                break;
            }
            firstHalf = firstHalf.next;
            current = current.next;
        } while (firstHalf != slow);

        // Restore the original list structure
        // Reverse the second half back to original
        current = prevHalf;
        prevHalf = null;
        do {
            Node nextNode = current.next;
            current.next = prevHalf;
            prevHalf = current;
            current = nextNode;
        } while (current != secondHalf);

        return isPalin;
    }
}
public class LinkedList {
    public static void main(String[] args) {
        CircularLinkedList list = new CircularLinkedList();
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter integers to add to the circular linked list (type -1 to end):");
        while (true) {
            int input = scanner.nextInt();
            if (input == -1) break;
            list.add(input);
        }

        System.out.println("The circular linked list is:");
        list.display();

        if (list.isPalindrome()) {
            System.out.println("The list is a palindrome.");
        } else {
            System.out.println("The list is not a palindrome.");
        }

        scanner.close();
    }
}
