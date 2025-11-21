# menu_linked_list.py
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None

    def insert_at_beginning(self, data):
        node = Node(data)
        node.next = self.head
        self.head = node

    def insert_at_end(self, data):
        node = Node(data)
        if not self.head:
            self.head = node
            return
        cur = self.head
        while cur.next:
            cur = cur.next
        cur.next = node

    def insert_before_after(self, target, data, before=False, after=False):
        if not self.head:
            print("List is empty.")
            return
        if before and after:
            print("Choose either before or after, not both.")
            return
        if before:
            # insert before first occurrence of target
            if self.head.data == target:
                self.insert_at_beginning(data)
                return
            prev = None
            cur = self.head
            while cur and cur.data != target:
                prev = cur
                cur = cur.next
            if cur:
                node = Node(data)
                prev.next = node
                node.next = cur
            else:
                print(f"Value {target} not found.")
        elif after:
            # insert after first occurrence of target
            cur = self.head
            while cur and cur.data != target:
                cur = cur.next
            if cur:
                node = Node(data)
                node.next = cur.next
                cur.next = node
            else:
                print(f"Value {target} not found.")
        else:
            print("Specify before=True or after=True.")

    def delete_from_beginning(self):
        if not self.head:
            print("List is empty.")
            return
        removed = self.head.data
        self.head = self.head.next
        print(f"Deleted {removed} from beginning.")

    def delete_from_end(self):
        if not self.head:
            print("List is empty.")
            return
        if not self.head.next:
            removed = self.head.data
            self.head = None
            print(f"Deleted {removed} from end.")
            return
        prev = None
        cur = self.head
        while cur.next:
            prev = cur
            cur = cur.next
        prev.next = None
        print(f"Deleted {cur.data} from end.")

    def delete_value(self, key):
        if not self.head:
            print("List is empty.")
            return
        if self.head.data == key:
            self.head = self.head.next
            print(f"Deleted node {key}.")
            return
        prev = None
        cur = self.head
        while cur and cur.data != key:
            prev = cur
            cur = cur.next
        if cur:
            prev.next = cur.next
            print(f"Deleted node {key}.")
        else:
            print(f"Node {key} not found.")

    def search(self, key):
        pos = 1
        cur = self.head
        while cur:
            if cur.data == key:
                print(f"Value {key} found at position {pos} from head.")
                return pos
            cur = cur.next
            pos += 1
        print(f"Value {key} not found.")
        return -1

    def display(self):
        vals = []
        cur = self.head
        while cur:
            vals.append(str(cur.data))
            cur = cur.next
        print("Linked List:", "->".join(vals) if vals else "Empty")

def menu():
    lst = SinglyLinkedList()
    while True:
        print("\n--- Menu ---")
        print("1. Insert at beginning")
        print("2. Insert at end")
        print("3. Insert before a value")
        print("4. Insert after a value")
        print("5. Delete from beginning")
        print("6. Delete from end")
        print("7. Delete a specific node (by value)")
        print("8. Search for a node")
        print("9. Display list")
        print("0. Exit")
        choice = input("Choice: ").strip()
        if choice == '1':
            x = int(input("Enter value to insert at beginning: "))
            lst.insert_at_beginning(x)
        elif choice == '2':
            x = int(input("Enter value to insert at end: "))
            lst.insert_at_end(x)
        elif choice == '3':
            target = int(input("Insert before which value? "))
            val = int(input("Value to insert: "))
            lst.insert_before_after(target, val, before=True)
        elif choice == '4':
            target = int(input("Insert after which value? "))
            val = int(input("Value to insert: "))
            lst.insert_before_after(target, val, after=True)
        elif choice == '5':
            lst.delete_from_beginning()
        elif choice == '6':
            lst.delete_from_end()
        elif choice == '7':
            key = int(input("Enter value to delete: "))
            lst.delete_value(key)
        elif choice == '8':
            key = int(input("Enter value to search: "))
            lst.search(key)
        elif choice == '9':
            lst.display()
        elif choice == '0':
            print("Exiting.")
            break
        else:
            print("Invalid choice.")

if __name__ == "__main__":
    menu()
