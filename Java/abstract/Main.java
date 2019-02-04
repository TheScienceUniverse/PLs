public class Main {
	public static void main(String[] args) {
		System.out.println("Hello from Main Class");
		B b = new B(10, 20);
		b.fun();
		C c = new C(10, 20);
		c.fun();
	}
}