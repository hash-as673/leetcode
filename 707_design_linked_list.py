class Node:
    def __init__(self, val):
        self.val = val
        self.next = None
class MyLinkedList:

    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def get(self, index: int) -> int:
        if index<0 or index >= self.size:
            return -1
        current_node = self.head
        for i in range(index):
            current_node = current_node.next
        return current_node.val

    def addAtHead(self, val: int) -> None:
        new_node = Node(val)
        new_node.next = self.head
        self.head = new_node
        if self.size == 0:
            self.tail = new_node
        self.size += 1

    def addAtTail(self, val: int) -> None:
        new_node = Node(val)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node
        self.size += 1

    def addAtIndex(self, index: int, val: int) -> None:
        if index > self.size:
            return
        if index == 0:
            self.addAtHead(val)
            return
        elif index == self.size :
            self.addAtTail(val)
        else:
            current = self.head
            for i in range(index - 1):
                current = current.next
            new_node = Node(val)
            new_node.next = current.next
            current.next = new_node
            self.size += 1

    def deleteAtIndex(self, index: int) -> None:
        if index<0 or index >= self.size:
            return False
        if index == 0:
            self.head = self.head.next
            self.size -=1
            if self.size ==0:
                self.tail = None
            return True
        
        current_node = self.head
        for i in range(index - 1):
            current_node = current_node.next
            
        current_node.next = current_node.next.next
        
        if index == self.size - 1:
            self.tail = current_node
            
        self.size -= 1
        return True


# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)