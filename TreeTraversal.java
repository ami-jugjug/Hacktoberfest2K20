import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

class Tree{

    TreeNode root;

    /*
    
                1
              /  \
            2     3
            /\    /\
           4  5  6 7
    */

    Tree(){
        // Level 0
        root = new TreeNode(1);

        // Level 1
        root.left = new TreeNode(2);
        root.right = new TreeNode(3);
        
        // Level 2
        root.left.left = new TreeNode(4);
        root.left.right = new TreeNode(5);
        root.right.left = new TreeNode(6);
        root.right.right = new TreeNode(7);

    }

    // --- Recursive ---

    // PreOrder Traversal
    public void preOrderTraversal(TreeNode root){
        if(root == null)
            return;
        System.out.println(root.data);
        preOrderTraversal(root.left);
        preOrderTraversal(root.right);
    }

    // InOrder Traversal
    public void inOrderTraversal(TreeNode root){
        if(root == null)
            return;
        inOrderTraversal(root.left);
        System.out.println(root.data);
        inOrderTraversal(root.right);
    }

    // PostOrder Traversal
    public void postOrderTraversal(TreeNode root){
        if(root == null)
            return;
        postOrderTraversal(root.left);
        postOrderTraversal(root.right);
        System.out.println(root.data);
    }

    //  --- Non-Recursive ---
    public void preOrderNonRecursive(){

        TreeNode tmp = root;
        Stack<TreeNode> stack = new Stack<>();

        while(true){

            while(tmp != null){
                System.out.println(tmp.data);
                stack.push(tmp);

                tmp = tmp.left;
            }
            if(stack.isEmpty())
                break;
            
            tmp = stack.pop();
            tmp = tmp.right;
        }
    }

    public void inOrderNonRecursive(){

        TreeNode tmp = root;
        Stack<TreeNode> stack = new Stack<>();

        while(true){

            while(tmp != null){
                stack.push(tmp);
                tmp = tmp.left;
            }
            
            if(stack.isEmpty())
                break;

            tmp = stack.pop();
            System.out.println(tmp.data);

            tmp = tmp.right;
        }
    }

    public void postOrderNonRecursive(){

        TreeNode tmp = root;
        Stack<TreeNode> stack = new Stack<>();

        while(true){

            while(tmp != null){
                stack.push(tmp);
                tmp = tmp.left;
            }
            if(stack.isEmpty())
                break;
            tmp = stack.pop();
            
            if(tmp.right == null)
                System.out.println(tmp.data);
            tmp = tmp.right;
        }
    }

    public void levelOrderTraversal(){

        Queue<TreeNode> queue = new LinkedList<>();
        TreeNode tmp = root;

        if(tmp == null)
            return;

        queue.add(tmp);
        while(!queue.isEmpty()){
            tmp = queue.poll();
            System.out.println(tmp.data);
            
            if(tmp.left != null)
                queue.add(tmp.left);
            if(tmp.right != null)
                queue.add(tmp.right);
        }
    }

    public static void main(String[] args) {
        
        Tree tree = new Tree();
        // tree.preOrderTraversal(tree.root);
        tree.preOrderNonRecursive();
        System.out.println("-----------");
        // tree.inOrderTraversal(tree.root);
        tree.inOrderNonRecursive();
        System.out.println("-----------");
        // tree.postOrderTraversal(tree.root);
        tree.postOrderNonRecursive();
    }



}

class TreeNode{
    int data;
    TreeNode left;
    TreeNode right;

    TreeNode(int val){
        data = val;
        left = null;
        right = null;
    }
}