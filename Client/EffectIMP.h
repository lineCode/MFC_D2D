#pragma once

class CObj;
class CEffectIMP
{
public:
	CEffectIMP();
	virtual ~CEffectIMP();

public:
	void SetObj(CObj* pObj) { m_pObj = pObj; }
	void SetStateKey(wstring wstrStateKey) { m_wstrStateKey = wstrStateKey; }

public:
	virtual HRESULT Initialize() PURE;
	virtual void LateInit();
	virtual int Update() PURE;
	virtual void LateUpdate() PURE;
	virtual void Render() PURE;
	virtual void Release() PURE;

protected:
	CObj*		m_pObj = nullptr;
	bool		m_bIsInit = false;
	wstring		m_wstrStateKey = L"";
};

