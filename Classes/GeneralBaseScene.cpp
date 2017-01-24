#include "GeneralBaseScene.h"
#include "Ghost.h"

USING_NS_CC;

cocos2d::Scene * GeneralBaseScene::createScene()
{
	//this layer&scene is act 1 now!
	//Create scene in base layer.
	auto scene = Scene::create();
	//Create base layer;
	auto layer = GeneralBaseScene::create();
	//TODO: Create other fixed layers and add them into this scene;
	auto ghost = Ghost::create();
	scene->addChild(layer);
	return scene;
}

bool GeneralBaseScene::init()
{
	initSprites();
	return true;
}

void GeneralBaseScene::initSprites()
{
	auto director = Director::getInstance();
	auto visibleSize = director->getVisibleSize();

	auto bg = Sprite::create("act1/background.png");
	auto bgSize = bg->getContentSize();
	auto bgPos = Vec2();
	bg->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
	bgPos.x = bgSize.width > visibleSize.width ? bgSize.width / 2 : visibleSize.width / 2;
	bgPos.y = bgSize.height > visibleSize.height ? bgSize.height / 2 : visibleSize.height / 2;
	//for now, zoom the background to the middle of screen or the left-bottom corner
	bg->setPosition(bgPos);
	addChild(bg);
	//use particle system to show the ghost
	CCParticleSystem* ghost = CCParticleSystemQuad::create("common/ghost.plist");
	ghost->setPosition(200, 200);
	bg->addChild(ghost,1); 
}
