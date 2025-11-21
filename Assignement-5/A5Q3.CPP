# find_middle.py
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

def find_middle(head):
    if not head:
        return None
    slow = head
    fast = head
    # when fast reaches end, slow is at middle
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
    return slow.data

# Example:
head = build_list([1,2,3,4,5])
print("Middle:", find_middle(head))  # Output: 3
