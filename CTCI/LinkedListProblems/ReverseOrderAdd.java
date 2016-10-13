//Digits are stored in reverse order. Write a function that adds the two numbers
//and returns sum as linked list


//reverse linked list
//ex have 2 point to one , 3 to 2
// 1,2,3,4,5
// 5,4,3,2,1
public static Node reverseLinkedList(Node currentNode)
 {
// For first node, previousNode will be null
Node previousNode=null;
Node nextNode;
  while(currentNode!=null)
  {
    nextNode=currentNode.next;
    // reversing the link
    currentNode.next=previousNode;
    // moving currentNode and previousNode by 1 node
    previousNode=currentNode;
    currentNode=nextNode;
  }
  return previousNode;
}

//Read more at http://www.java2blog.com/2014/07/how-to-reverse-linked-list-in-java.html#5yykI0j3DiMZkhcX.99
