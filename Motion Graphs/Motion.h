#ifndef _MOTION
#define _MOTION

#include "PointCloud.h"
#include <map>
#include "stdafx.h"

class Motion{
	public:
		Motion();
		~Motion();

		int getNPointClouds(){return this->nClouds;}
		PointCloud *getPointCloud(int i);
		std::string getLabel(){return this->label;}

		void setPointClouds(std::vector<PointCloud> pClouds, int nClouds){this->clouds = pClouds;this->nClouds = nClouds;}
		void setNClouds(int nClouds){this->nClouds = nClouds;}
		void setLabel(std::string label){this->label = label;}


	
		std::vector<PointCloud> clouds;
		std::map<Ogre::Real,PointCloud*>* map_clouds;
		int nClouds;
		std::string label;
};

#endif