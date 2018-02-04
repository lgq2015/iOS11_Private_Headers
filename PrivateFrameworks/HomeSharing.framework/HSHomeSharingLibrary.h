/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSHomeSharingLibrary : NSObject {
    bool  __hasPendingUpdateRequest;
    bool  _available;
    NSURL * _baseURL;
    HSConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionAccessQueue;
    long long  _connectionType;
    NSString * _homeSharingGroupID;
    NSString * _name;
    bool  _requiresPassword;
    NSNetService * _service;
    NSString * _uniqueIdentifier;
    unsigned int  _version;
}

@property (nonatomic) bool _hasPendingUpdateRequest;
@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (nonatomic, readonly) unsigned int basePlaylistContainerID;
@property (nonatomic, readonly, retain) NSURL *baseURL;
@property (nonatomic, retain) HSConnection *connection;
@property (nonatomic, readonly) long long connectionState;
@property (nonatomic, readonly) long long connectionType;
@property (nonatomic, readonly) unsigned int databaseID;
@property (nonatomic, readonly) NSString *deviceGUID;
@property (nonatomic, readonly, copy) NSString *homeSharingGroupID;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool requiresPassword;
@property (nonatomic, retain) NSNetService *service;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly) unsigned int version;

- (void).cxx_destruct;
- (bool)_hasPendingUpdateRequest;
- (void)_onQueue_ensureConnection;
- (void)_sendUpdateRequest;
- (unsigned int)basePlaylistContainerID;
- (id)baseURL;
- (void)connectWithCompletionHandler:(id /* block */)arg1;
- (id)connection;
- (long long)connectionState;
- (long long)connectionType;
- (unsigned int)databaseID;
- (id)deviceGUID;
- (void)disconnect;
- (unsigned long long)hash;
- (id)homeSharingGroupID;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned int)arg3 baseURL:(id)arg4 homeSharingGroupID:(id)arg5 connectionType:(long long)arg6;
- (bool)isAvailable;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)requiresPassword;
- (id)securityInfoForURL:(id)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id)service;
- (void)setConnection:(id)arg1;
- (void)setService:(id)arg1;
- (void)set_hasPendingUpdateRequest:(bool)arg1;
- (id)signedRequestFromURLRequest:(id)arg1;
- (id)uniqueIdentifier;
- (id)urlForRequest:(id)arg1;
- (unsigned int)version;

@end
