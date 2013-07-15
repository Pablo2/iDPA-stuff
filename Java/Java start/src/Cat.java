
public class Cat {

	double dimensions;
	private int weight;
	String name;
	String color;
	boolean lazy;
	
	
	
	
	public Cat()
	{
		color = "grey";
		name = "Charles";
		dimensions = 2.3;
		weight = 50;
		lazy = true;
	}
		
		
		
		public void Meow()
		{
			System.out.println("Meow");
		}

		
		int getVar()
		{
			return weight;
		}
	
		private double getDimensions() {
			return dimensions;
		}



		private void setDimensions(double dimensions) {
			this.dimensions = dimensions;
		}



		private int getWeight() {
			return weight;
		}



		private void setWeight(int weight) {
			this.weight = weight;
		}



		private String getName() {
			return name;
		}



		public void setName(String name) {
			this.name = name;
		}



		public String getColor() {
			return color;
		}



		public void setColor(String color) {
			this.color = color;
		}



		public boolean isLazy() {
			return lazy;
		}



		public void setLazy(boolean lazy) {
			this.lazy = lazy;
		}



		void setweight(int w)
	{
			weight = 50;
	}
}
