#ifndef LSPNETWORKSOCKETCLIENT_H
#define LSPNETWORKSOCKETCLIENT_H

#include "LSPNetwork.h" // Base class: LSPNetwork
#include "SocketAPI/clSocketClientAsync.h"
#include "wx/process.h"

class LSPNetworkSocketClient : public LSPNetwork
{
protected:
    clAsyncSocket::Ptr_t m_socket;
    wxProcess* m_lspServer = nullptr;
    
protected:
    void OnSocketConnected(clCommandEvent& event);
    void OnSocketConnectionLost(clCommandEvent& event);
    void OnSocketConnectionError(clCommandEvent& event);
    void OnSocketError(clCommandEvent& event);
    void OnSocketData(clCommandEvent& event);
    void OnProcessTerminated(wxProcessEvent& event);

public:
    LSPNetworkSocketClient();
    virtual ~LSPNetworkSocketClient();

public:
    virtual void Close();
    virtual bool IsConnected() const;
    virtual void Open(const LSPStartupInfo& info);
    virtual void Send(const std::string& data);
};

#endif // LSPNETWORKSOCKETCLIENT_H