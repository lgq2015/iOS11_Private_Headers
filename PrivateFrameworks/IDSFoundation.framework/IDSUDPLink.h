/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSUDPLink : NSObject <IDSLink> {
    int  _addressFamily;
    bool  _allowsLinkLocal;
    <IDSLinkDelegate> * _alternateDelegate;
    NSString * _cbuuid;
    <IDSLinkDelegate> * _delegate;
    IDSSockAddrWrapper * _destinationAddress;
    NSDictionary * _destinationAddressToDeviceIDMap;
    NSString * _deviceUniqueID;
    bool  _hasFixedDestination;
    bool  _hasTemporaryError;
    struct { char *x1; unsigned long long x2; long long x3; long long x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; unsigned short x16; unsigned char x17; bool x18; unsigned long long x19; BOOL x20; BOOL x21; int x22; unsigned char x23[0]; } * _incomingPacketBuffer;
    bool  _isInvalidated;
    double  _lastDestinationReceived;
    double  _lastDestinationSent;
    IDSSockAddrWrapper * _localAddress;
    bool  _needToConnect;
    unsigned short  _port;
    unsigned long long  _previousBytesReceived;
    unsigned long long  _previousBytesSent;
    unsigned long long  _previousPacketsReceived;
    unsigned long long  _previousPacketsSent;
    double  _previousReportTime;
    bool  _skipTransportThread;
    int  _socket;
    unsigned long long  _state;
    unsigned long long  _totalBytesReceived;
    unsigned long long  _totalBytesSent;
    unsigned long long  _totalPacketsReceived;
    unsigned long long  _totalPacketsSent;
    bool  _useDefaultInterfaceOnly;
    bool  _wantsAWDL;
    bool  _wantsCellular;
    bool  _wantsWiFi;
}

@property bool allowsLinkLocal;
@property <IDSLinkDelegate> *alternateDelegate;
@property (retain) NSString *cbuuid;
@property (readonly, copy) NSString *debugDescription;
@property <IDSLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long headerOverhead;
@property (readonly) bool isInvalidated;
@property (readonly) double lastDestinationReceived;
@property double lastDestinationSent;
@property (getter=linkTypeString, readonly) NSString *linkTypeString;
@property unsigned short port;
@property bool skipTransportThread;
@property (readonly) int socket;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property bool useDefaultInterfaceOnly;

- (void).cxx_destruct;
- (void)_processIncomingPacket;
- (unsigned long long)_sendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (unsigned long long)_sendBytes:(const void*)arg1 length:(unsigned long long)arg2 destinationAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg3;
- (unsigned long long)_sendBytes:(const void*)arg1 length:(unsigned long long)arg2 localInterfaceIndex:(int)arg3 localAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 destinationAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 trafficClass:(unsigned short)arg6;
- (bool)allowsLinkLocal;
- (id)alternateDelegate;
- (id)cbuuid;
- (id)copyCurrentNetworkInterfaces;
- (id)copyLinkStatsDict;
- (void)dealloc;
- (id)delegate;
- (id)deviceUniqueID;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(bool)arg2;
- (unsigned long long)headerOverhead;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;
- (void)invalidate;
- (bool)isInvalidated;
- (double)lastDestinationReceived;
- (double)lastDestinationSent;
- (id)linkTypeString;
- (id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(bool)arg2 wantsWiFi:(bool)arg3 wantsCellular:(bool)arg4;
- (id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(bool)arg2 wantsWiFi:(bool)arg3 wantsCellular:(bool)arg4 clientUUID:(unsigned char)arg5;
- (unsigned short)port;
- (void)reconnectWithLocalAddress:(id)arg1;
- (void)removeSocket;
- (unsigned long long)sendPacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; unsigned short x16; unsigned char x17; bool x18; unsigned long long x19; BOOL x20; BOOL x21; int x22; unsigned char x23[0]; }*)arg1 destination:(id)arg2 toDeviceID:(id)arg3;
- (unsigned long long)sendPacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; unsigned short x16; unsigned char x17; bool x18; unsigned long long x19; BOOL x20; BOOL x21; int x22; unsigned char x23[0]; }*)arg1 sourceInterface:(id)arg2 destination:(id)arg3 toDeviceID:(id)arg4;
- (unsigned long long)sendPacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; unsigned short x16; unsigned char x17; bool x18; unsigned long long x19; BOOL x20; BOOL x21; int x22; unsigned char x23[0]; }*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (void)setAllowsLinkLocal:(bool)arg1;
- (void)setAlternateDelegate:(id)arg1;
- (void)setCbuuid:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setDestinationAddress:(id)arg1 isFixedDestination:(bool)arg2 fromAddress:(id)arg3;
- (bool)setDestinationAddressToDeviceIDMap:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setLastDestinationSent:(double)arg1;
- (void)setPort:(unsigned short)arg1;
- (void)setSkipTransportThread:(bool)arg1;
- (void)setUseDefaultInterfaceOnly:(bool)arg1;
- (bool)skipTransportThread;
- (int)socket;
- (unsigned long long)state;
- (bool)useDefaultInterfaceOnly;

@end
