# reverse_linked_list.py
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def build_list(values):
    head = None
    tail = None
    for v in values:
        node = Node(v)
        if not head:
            head = node
            tail = node
        else:
            tail.next = node
            tail = node
    return head

def reverse_linked_list(head):
    prev = None
    cur = head
    while cur:
        nxt = cur.next
        cur.next = prev
        prev = cur
        cur = nxt
    return prev  # new head

def print_list(head):
    vals = []
    cur = head
    while cur:
        vals.append(str(cur.data))
        cur = cur.next
    print("->".join(vals) + "->NULL" if vals else "Empty")

# Example:
head = build_list([1,2,3,4])
print("Original:", end=" ")
print_list(head)
head = reverse_linked_list(head)
print("Reversed:", end=" ")
print_list(head)  # Output: 4->3->2->1->NULL
