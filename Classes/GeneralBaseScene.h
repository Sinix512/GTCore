#ifndef __GENERALBASESCENE_H__
#define __GENERALBASESCENE_H__

#include "cocos2d.h"

class GeneralBaseScene :
	public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	// implement the "static create()" method manually
	CREATE_FUNC(GeneralBaseScene);
};


#endif // !__GENERALBASESCENE_H__