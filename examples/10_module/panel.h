#ifndef PANEL_H
#define PANEL_H
#include<wx/wx.h>
#include<vector>
#include<string>
#include<memory>
#include "text.h"
#include "circle.h"
#include "rectangle.h"

class Panel : public wxPanel 
{
public:
	Panel(wxWindow* parent);
private:
	void OnDraw(wxCommandEvent& event);
	void OnMouseDown(wxMouseEvent& event);
	void OnMouseUp(wxMouseEvent& event);
	void draw_shape(Point p, int width = 100, int height = 50, int radius = 250);
	wxTextCtrl* draw_text;
	wxRadioBox* radio_box;
	Point coord{0, 0};
};

#endif // !PANEL_H
