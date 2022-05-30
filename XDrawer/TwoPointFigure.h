#pragma once
#include "figure.h"
class TwoPointFigure :
	public Figure
{
	DECLARE_SERIAL(TwoPointFigure)
protected:
	int m_x1;
	int m_y1;
	int m_x2;
	int m_y2;
public:
	TwoPointFigure();
	TwoPointFigure(int x1, int y1);
	TwoPointFigure(int x1, int y1, int x2, int y2);	
	virtual void setXY2(int x, int y);
	virtual void Serialize(CArchive& ar);
	~TwoPointFigure();
};
