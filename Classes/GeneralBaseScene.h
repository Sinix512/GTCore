#ifndef __GENERALBASESCENE_H__
#define __GENERALBASESCENE_H__

#include "cocos2d.h"

class GeneralBaseScene :
	public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

private:

	cocos2d::Sprite *m_pBackGround;

	cocos2d::Vec2 m_v2Start;

private:

	void initSprites();

	void initUI();

	void initBGListeners();

	void initUIListeners();

	void initGhostListeners();

	// implement the "static create()" method manually
	CREATE_FUNC(GeneralBaseScene);
};


#endif // !__GENERALBASESCENE_H__