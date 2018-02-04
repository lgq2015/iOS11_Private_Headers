/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSDeleter : MSCupidStateMachine <MSDeleteStreamsProtocolDelegate, MSDeleter> {
    int  _batchSize;
    MSMediaStreamDaemon * _daemon;
    <MSDeleterDelegate> * _delegate;
    MSObjectQueue * _deleteQueue;
    int  _maxErrorCount;
    MSDeleteStreamsProtocol * _protocol;
    NSMutableArray * _requestedDeleteWrappers;
    int  _state;
}

@property (nonatomic) int batchSize;
@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSDeleterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_clearInstantiatedDeletersByPersonID;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (void)abortAllActivities;
+ (id)deleterForPersonID:(id)arg1;
+ (id)existingDeleterForPersonID:(id)arg1;
+ (void)forgetPersonID:(id)arg1;
+ (bool)isInRetryState;
+ (id)nextActivityDate;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (id)personIDsWithOutstandingActivities;
+ (void)stopAllActivities;

- (void).cxx_destruct;
- (void)_abort;
- (id)_abortedError;
- (void)_forget;
- (bool)_isAllowedToDelete;
- (bool)_isInRetryState;
- (void)_sendDeleteRequest;
- (void)_stop;
- (void)_updateMasterManifest;
- (void)abort;
- (int)batchSize;
- (id)daemon;
- (void)deactivate;
- (void)dealloc;
- (id)delegate;
- (void)deleteAssetCollections:(id)arg1;
- (void)deleteProtocol:(id)arg1 didFinishSuccessfulCollections:(id)arg2 failedCollections:(id)arg3 error:(id)arg4;
- (void)deleteProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)performOutstandingActivities;
- (void)setBatchSize:(int)arg1;
- (void)setDaemon:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stop;

@end
