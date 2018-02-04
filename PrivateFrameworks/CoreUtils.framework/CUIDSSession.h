/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUIDSSession : NSObject <IDSServiceDelegate, IDSSessionDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _idsDestination;
    bool  _idsEncryption;
    NSString * _idsInviteToken;
    bool  _idsInviting;
    IDSService * _idsService;
    NSString * _idsServiceName;
    IDSSession * _idsSession;
    int  _idsSock;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    NSString * _label;
    CUIDSReadRequest * _readRequestCurr;
    CUIDSReadRequest * _readRequestList;
    id * _readRequestNext;
    NSObject<OS_dispatch_source> * _readSource;
    bool  _readSuspended;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    CUIDSWriteRequest * _writeRequestCurr;
    CUIDSWriteRequest * _writeRequestList;
    id * _writeRequestNext;
    NSObject<OS_dispatch_source> * _writeSource;
    bool  _writeSuspended;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *idsDestination;
@property (nonatomic) bool idsEncryption;
@property (nonatomic, copy) NSString *idsInviteToken;
@property (nonatomic, copy) NSString *idsServiceName;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_handleError:(id)arg1;
- (void)_invalidate;
- (void)_processReadRequests;
- (void)_processWriteRequests;
- (int)_setupSocket;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)idsDestination;
- (bool)idsEncryption;
- (id)idsInviteToken;
- (id)idsServiceName;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)readMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withOptions:(id)arg5;
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setIdsDestination:(id)arg1;
- (void)setIdsEncryption:(bool)arg1;
- (void)setIdsInviteToken:(id)arg1;
- (void)setIdsServiceName:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)writeData:(id)arg1 completion:(id /* block */)arg2;

@end
