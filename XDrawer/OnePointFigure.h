#pragma once
#include "figure.h"
class OnePointFigure :
	public Figure
{
	DECLARE_SERIAL(OnePointFigure)
protected:
	int m_x1;
	int m_y1;
public:
	OnePointFigure();
	OnePointFigure(int x1, int y1);
	virtual void setXY2(int x, int y);
	virtual void Serialize(CArchive& ar);
	~OnePointFigure();
};
