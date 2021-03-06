// This file declares the IOleObject Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIOleObject : public PyIUnknown
{
public:
	MAKE_PYCOM_CTOR(PyIOleObject);
	static IOleObject *GetI(PyObject *self);
	static PyComTypeObject type;

	// The Python methods
	static PyObject *SetClientSite(PyObject *self, PyObject *args);
	static PyObject *GetClientSite(PyObject *self, PyObject *args);
	static PyObject *SetHostNames(PyObject *self, PyObject *args);
	static PyObject *Close(PyObject *self, PyObject *args);
	static PyObject *SetMoniker(PyObject *self, PyObject *args);
	static PyObject *GetMoniker(PyObject *self, PyObject *args);
	static PyObject *InitFromData(PyObject *self, PyObject *args);
	static PyObject *GetClipboardData(PyObject *self, PyObject *args);
	static PyObject *DoVerb(PyObject *self, PyObject *args);
	static PyObject *EnumVerbs(PyObject *self, PyObject *args);
	static PyObject *Update(PyObject *self, PyObject *args);
	static PyObject *IsUpToDate(PyObject *self, PyObject *args);
	static PyObject *GetUserClassID(PyObject *self, PyObject *args);
	static PyObject *GetUserType(PyObject *self, PyObject *args);
	static PyObject *SetExtent(PyObject *self, PyObject *args);
	static PyObject *GetExtent(PyObject *self, PyObject *args);
	static PyObject *Advise(PyObject *self, PyObject *args);
	static PyObject *Unadvise(PyObject *self, PyObject *args);
	static PyObject *EnumAdvise(PyObject *self, PyObject *args);
	static PyObject *GetMiscStatus(PyObject *self, PyObject *args);
	static PyObject *SetColorScheme(PyObject *self, PyObject *args);

protected:
	PyIOleObject(IUnknown *pdisp);
	~PyIOleObject();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGOleObject : public PyGatewayBase, public IOleObject
{
protected:
	PyGOleObject(PyObject *instance) : PyGatewayBase(instance) { ; }
	PYGATEWAY_MAKE_SUPPORT(PyGOleObject, IOleObject, IID_IOleObject)

	// IOleObject
	STDMETHOD(SetClientSite)(
		IOleClientSite __RPC_FAR * pClientSite);

	STDMETHOD(GetClientSite)(
		IOleClientSite __RPC_FAR *__RPC_FAR * ppClientSite);

	STDMETHOD(SetHostNames)(
		LPCOLESTR szContainerApp,
		LPCOLESTR szContainerObj);

	STDMETHOD(Close)(
		DWORD dwSaveOption);

	STDMETHOD(SetMoniker)(
		DWORD dwWhichMoniker,
		IMoniker __RPC_FAR * pmk);

	STDMETHOD(GetMoniker)(
		DWORD dwAssign,
		DWORD dwWhichMoniker,
		IMoniker __RPC_FAR *__RPC_FAR * ppmk);

	STDMETHOD(InitFromData)(
		IDataObject __RPC_FAR * pDataObject,
		BOOL fCreation,
		DWORD dwReserved);

	STDMETHOD(GetClipboardData)(
		DWORD dwReserved,
		IDataObject __RPC_FAR *__RPC_FAR * ppDataObject);

	STDMETHOD(DoVerb)(
		LONG iVerb,
		LPMSG lpmsg,
		IOleClientSite __RPC_FAR * pActiveSite,
		LONG lindex,
		HWND hwndParent,
		LPCRECT lprcPosRect);

	STDMETHOD(EnumVerbs)(
		IEnumOLEVERB __RPC_FAR *__RPC_FAR * ppEnumOleVerb);

	STDMETHOD(Update)(
		void);

	STDMETHOD(IsUpToDate)(
		void);

	STDMETHOD(GetUserClassID)(
		CLSID __RPC_FAR * pClsid);

	STDMETHOD(GetUserType)(
		DWORD dwFormOfType,
		LPOLESTR __RPC_FAR * pszUserType);

	STDMETHOD(SetExtent)(
		DWORD dwDrawAspect,
		SIZEL __RPC_FAR * psizel);

	STDMETHOD(GetExtent)(
		DWORD dwDrawAspect,
		SIZEL __RPC_FAR * psizel);

	STDMETHOD(Advise)(
		IAdviseSink __RPC_FAR * pAdvSink,
		DWORD __RPC_FAR * pdwConnection);

	STDMETHOD(Unadvise)(
		DWORD dwConnection);

	STDMETHOD(EnumAdvise)(
		IEnumSTATDATA __RPC_FAR *__RPC_FAR * ppenumAdvise);

	STDMETHOD(GetMiscStatus)(
		DWORD dwAspect,
		DWORD __RPC_FAR * pdwStatus);

	STDMETHOD(SetColorScheme)(
		LOGPALETTE __RPC_FAR * pLogpal);

};
