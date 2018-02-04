/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSConnection : NSObject {
    NSObject<OS_dispatch_source> * _activityTimerSource;
    unsigned int  _basePlaylistContainerID;
    NSURL * _baseURL;
    NSURLSession * _connectionSession;
    long long  _connectionState;
    long long  _connectionType;
    unsigned int  _databaseID;
    unsigned int  _databaseRevision;
    HSFairPlayInfo * _fairPlayInfo;
    NSString * _homeSharingGroupID;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned int  _sessionID;
}

@property (nonatomic) unsigned int basePlaylistContainerID;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic) long long connectionState;
@property (nonatomic, readonly) long long connectionType;
@property (nonatomic) unsigned int databaseID;
@property (nonatomic) unsigned int databaseRevision;
@property (retain) HSFairPlayInfo *fairPlayInfo;
@property (copy) NSString *homeSharingGroupID;
@property (nonatomic) unsigned int sessionID;

- (void).cxx_destruct;
- (void)_continueFPSetupNegotiationWithData:(id)arg1 internalConnectionCompletionHandler:(id /* block */)arg2;
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id /* block */)arg1;
- (id)_onSerialQueue_connectionSession;
- (void)_onSerialQueue_sendRequest:(id)arg1 withInternalResponseHandler:(id /* block */)arg2;
- (unsigned int)_sapVersionForConnectionType;
- (void)_sendRequest:(id)arg1 withInternalResponseHandler:(id /* block */)arg2;
- (unsigned int)basePlaylistContainerID;
- (id)baseURL;
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id /* block */)arg1;
- (void)connectWithCompletionHandler:(id /* block */)arg1;
- (long long)connectionState;
- (long long)connectionType;
- (unsigned int)databaseID;
- (unsigned int)databaseRevision;
- (void)dealloc;
- (void)disconnect;
- (id)fairPlayInfo;
- (id)homeSharingGroupID;
- (id)initWithBaseURL:(id)arg1;
- (id)initWithBaseURL:(id)arg1 connectionType:(long long)arg2;
- (void)sendRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (unsigned int)sessionID;
- (void)setBasePlaylistContainerID:(unsigned int)arg1;
- (void)setConnectionState:(long long)arg1;
- (void)setDatabaseID:(unsigned int)arg1;
- (void)setDatabaseRevision:(unsigned int)arg1;
- (void)setFairPlayInfo:(id)arg1;
- (void)setHomeSharingGroupID:(id)arg1;
- (void)setSessionID:(unsigned int)arg1;
- (id)signedRequestFromURLRequest:(id)arg1;

@end
