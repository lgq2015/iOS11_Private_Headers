/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSDatagramChannel : NSObject {
    IDSDataChannelLinkContext * _cellularLink;
    bool  _connected;
    NSObject<OS_nw_connection> * _connection;
    BOOL  _defaultLinkID;
    id /* block */  _eventHandler;
    bool  _hasMetadata;
    unsigned long long  _incomingBytes;
    double  _lastIncomingStatReport;
    double  _lastOutgoingStatReport;
    NSMutableDictionary * _linkContexts;
    bool  _needsMediaEncryptionInfo;
    unsigned char  _nexus_instance;
    struct channel { } * _osChannel;
    int  _osChannelFD;
    struct channel_ring_desc { } * _osChannelRXRing;
    struct channel_ring_desc { } * _osChannelTXRing;
    unsigned long long  _outgoingBytes;
    NSObject<OS_nw_path_evaluator> * _pathEvaluator;
    NSData * _preConnectionData;
    id /* block */  _readHandler;
    id /* block */  _readHandlerWithOptions;
    NSObject<OS_dispatch_semaphore> * _readSema;
    int  _readState;
    bool  _receivedPreConnectionData;
    NSMutableArray * _sendingMetadata;
    bool  _sentFirstReadLinkInfo;
    int  _socketDescriptor;
    bool  _startAutomatically;
    bool  _startCalled;
    bool  _verboseFunctionalLogging;
    bool  _waitForPreConnectionDataForConnected;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _writeLock;
}

- (void).cxx_destruct;
- (id)init;

@end
