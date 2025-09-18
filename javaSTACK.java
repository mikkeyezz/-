import java.util.LinkedList;

public class Main {
    public static void main(String[] args) {
        LinkedList<Integer> stack = new LinkedList<>();
        
        // Добавляем элементы (push)
        stack.push(10);
        stack.push(20);
        stack.push(30);
        
        System.out.println("Стек: " + stack);
        System.out.println("Верхний элемент: " + stack.peek());
        
        // Удаляем элементы (pop)
        System.out.println("Удален: " + stack.pop());
        System.out.println("Теперь верхний: " + stack.peek());
    }
}
