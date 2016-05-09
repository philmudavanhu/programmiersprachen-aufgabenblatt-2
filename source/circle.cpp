Class CIrcle{
public:
	
	Circle(Point2D const& ctr, float r, ColorRBG const& clr);
	float area() const;
	Bbox bounding_box() const;
	void draw() const;
	void color(ColorRBG const& clr);
	ColorRBG color() const;
	void center(Point2D const& ctr); //const makes sure that we do not change the copied values
	Point2D center() const;
	void radius(float r);
	float radius() const;

private:
	Point2D center_;
	float radius_; // per value ruckgabe 
	ColorRBG color_;
}