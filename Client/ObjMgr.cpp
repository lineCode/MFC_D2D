#include "stdafx.h"
#include "ObjMgr.h"
#include "Obj.h"

IMPLEMENT_SINGLETON(CObjMgr)

CObjMgr::CObjMgr()
{
}


CObjMgr::~CObjMgr()
{
	Release();
}

void CObjMgr::AddObject(CObj * pObject, OBJID eID)
{
	m_ObjLst[eID].push_back(pObject);
}

void CObjMgr::Update()
{
	for (OBJLIST& objLst : m_ObjLst)
	{
		OBJITER iter_begin = objLst.begin();
		OBJITER iter_end = objLst.end();

		for (; iter_begin != iter_end;)
		{
			int iEvent = (*iter_begin)->Update();

			if (DEAD_OBJ == iEvent)
			{
				SafeDelete(*iter_begin);
				iter_begin = objLst.erase(iter_begin);
			}
			else
				++iter_begin;
		}
	}
}

void CObjMgr::LateUpdate()
{
	for (OBJLIST& objLst : m_ObjLst)
	{
		for (CObj*& pObj : objLst)
			pObj->LateUpdate();
	}
}

void CObjMgr::Render()
{
	for (OBJLIST& objLst : m_ObjLst)
	{
		for (CObj*& pObj : objLst)
			pObj->Render();
	}
}

void CObjMgr::Release()
{
	for (OBJLIST& objLst : m_ObjLst)
	{
		for_each(objLst.begin(), objLst.end(), SafeDelete<CObj*>);
		objLst.clear();
	}
}
