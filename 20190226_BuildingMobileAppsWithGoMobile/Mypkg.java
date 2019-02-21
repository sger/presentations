public abstract class Mypkg {
	public static native Counter newCounter();
}

public final class Counter {
	public Counter() { ... }

	public final long getValue();
	public final void setValue(long v);
	public void inc();

}