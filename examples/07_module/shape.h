#ifndef SHAPE_H
#define SHAPE_H
class Shape 
{
public:
	//virtual void draw(); -- this is a virtual function
	virtual void draw()=0; //this is a PURE virtual function
};
#endif //SHAPE_H