public class B extends A {
	private int y;
	public B(int x, int y) {
		super(x);
		this.y = y;
		System.out.println("Hello from B constructor");
	}
	@Override
	protected void fun() {
		System.out.println("Hello from Extended fun from B");
		System.out.println("Parent's x: " + super.x + "\nCurrent's y: " + this.y);
	}
}