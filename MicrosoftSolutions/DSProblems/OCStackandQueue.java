//Create a queue from two stacks
import java.utils.*;
// <HAVENT TESTED>
//O(n) insert
//O(n^2) fill
class OCStackandQueue {
  Stack <Integer> inbox = new Stack<Integer>();
  Stack <Integer> outbox = new Stack<Integer>();
  public void queue(int numbers) {
    inbox.push(numbers);
  }

  public int dequeue() {
    if(outbox.isEmpty()) {
      while(!outbox.isEmpty()) {
        outbox.push(inbox.pop());
      }
    }
    return outbox.pop();
  }

  public static void main(String[] args) {

  }
}

class OCStackandQueueGeneric <E> {
  Stack <E> inbox = new Stack<E>();
  Stack <E> outbox = new Stack<E>();

  public void queue(E numbers) {
    inbox.push(numbers);
  }

  public E dequeue() {
    if(outbox.isEmpty()) {
      while(!outbox.isEmpty()) {
        outbox.push(inbox.pop());
      }
    }
    return outbox.pop();
  }

  public static void main(String[] args) {

  }
}


//Very Interesting
//http://stackoverflow.com/questions/69192/how-to-implement-a-queue-using-two-stacks
// public class SimulatedQueue<E> {
//     private java.util.Stack<E> stack = new java.util.Stack<E>();
//
//     public void insert(E elem) {
//         if (!stack.empty()) {
//             E topElem = stack.pop();
//             insert(elem);
//             stack.push(topElem);
//         }
//         else
//             stack.push(elem);
//     }
//
//     public E remove() {
//         return stack.pop();
//     }
// }
