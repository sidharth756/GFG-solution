class Solution {
    public int lengthOfLoop(Node head) {
        HashMap<Node,Integer> map = new HashMap<>();
        int timer=0;
        Node temp = head;
        while(temp!=null){
            if(map.containsKey(temp)){
                return timer - map.get(temp);
            }
             map.put(temp,timer);
            temp = temp.next;
            timer++;
        }
        return 0;
    }
}