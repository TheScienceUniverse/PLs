public class C extends A {
	private int y;
	public C(int x, int y) {
		super(x);
		this.y = y;
		System.out.println("Hello from C constructor");
	}
	@Override
	protected void fun() {
		super.x *= 5;
		System.out.println("Hello from Extended fun from C");
		System.out.println("Parent's x: " + super.x + "\nCurrent's y: " + this.y);
	}
}