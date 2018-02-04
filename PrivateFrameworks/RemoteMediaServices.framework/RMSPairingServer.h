/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSPairingServer : NSObject {
    struct _CFHTTPServer { } * _HTTPServer;
    struct __CFDictionary { } * _HTTPServerConnections;
    NSObject<OS_dispatch_queue> * _HTTPServerQueue;
    NSString * _advertisedDeviceModel;
    NSString * _advertisedDeviceName;
    <RMSPairingServerDelegate> * _delegate;
    NSString * _expectedPasscodeHash;
    unsigned short  _port;
    NSString * _successfulPairingGUID;
    NSString * _successfulPairingServiceName;
}

@property (nonatomic) <RMSPairingServerDelegate> *delegate;
@property (nonatomic, readonly) unsigned short port;

- (void).cxx_destruct;
- (id)_parsedQueryParametersWithQueryString:(id)arg1;
- (id)delegate;
- (void)handleHTTPServerConnectionDidFailToReplyToRequest:(struct _CFHTTPServerRequest { }*)arg1 withResponse:(struct _CFHTTPServerResponse { }*)arg2;
- (void)handleHTTPServerConnectionDidReceiveError:(struct __CFError { }*)arg1;
- (void)handleHTTPServerConnectionDidReceiveRequest:(struct _CFHTTPServerRequest { }*)arg1;
- (void)handleHTTPServerConnectionDidReplyToRequest:(struct _CFHTTPServerRequest { }*)arg1 withResponse:(struct _CFHTTPServerResponse { }*)arg2;
- (void)handleHTTPServerConnectionInvalidated;
- (void)handleHTTPServerDidCloseConnection:(struct _CFHTTPServerConnection { }*)arg1;
- (void)handleHTTPServerDidOpenConnection:(struct _CFHTTPServerConnection { }*)arg1;
- (void)handleHTTPServerDidReceiveError:(struct __CFError { }*)arg1;
- (void)handleHTTPServerInvalidated;
- (unsigned short)port;
- (void)setDelegate:(id)arg1;
- (bool)startServerWithExpectedPasscodeHash:(id)arg1 advertisedDeviceName:(id)arg2 advertisedDeviceModel:(id)arg3;
- (void)stopServer;

@end
