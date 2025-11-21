# count_and_delete_all.py
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

def count_and_delete_all(head, key):
    # Count occurrences
    count = 0
    cur = head
    while cur:
        if cur.data == key:
            count += 1
        cur = cur.next

    # Delete all occurrences (handle head removals)
    dummy = Node(0)
    dummy.next = head
    prev = dummy
    cur = head
    while cur:
        if cur.data == key:
            prev.next = cur.next
            cur = prev.next
        else:
            prev = cur
            cur = cur.next
    return count, dummy.next

def print_list(head):
    vals = []
    cur = head
    while cur:
        vals.append(str(cur.data))
        cur = cur.next
    print("->".join(vals) if vals else "Empty")

# Example:
values = [1,2,1,2,1,3,1]
key = 1
head = build_list(values)
c, head = count_and_delete_all(head, key)
print("Count:", c)
print("Updated Linked List:", end=" ")
print_list(head)

# Expected output:
# Count: 4
# Updated Linked List: 2->2->3
