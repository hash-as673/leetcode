

class BrowserHistory {

    private class ListNode{
    ListNode next;
    ListNode prev;
    String val;
    ListNode(String val){
        this.next = null;
        this.prev = null;
        this.val = val;
    }
}

    private ListNode current;

    public BrowserHistory(String homepage) {
        current = new ListNode(homepage);
    }
    
    public void visit(String url) {
        ListNode newNode = new ListNode(url);
        current.next = newNode;
        newNode.prev = current;
        current = newNode;
    }
    
    public String back(int steps) {
        while(steps>0 && current.prev != null){
            current = current.prev;
            steps--;
        }
        return current.val;
    }
    
    public String forward(int steps) {
        while(steps>0 && current.next != null){
            current = current.next;
            steps--;
        }
        return current.val;
    }
}

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory obj = new BrowserHistory(homepage);
 * obj.visit(url);
 * String param_2 = obj.back(steps);
 * String param_3 = obj.forward(steps);
 */