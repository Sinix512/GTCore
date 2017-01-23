#include "GeneralBaseScene.h"

USING_NS_CC;

cocos2d::Scene * GeneralBaseScene::createScene()
{
	//Create scene in base layer.
	auto scene = Scene::create();
	//Create base layer;
	auto layer = GeneralBaseScene::create();
	//TODO: Create other fixed layers and add them into this scene;
	return nullptr;
}

bool GeneralBaseScene::init()
{
	return false;
}
