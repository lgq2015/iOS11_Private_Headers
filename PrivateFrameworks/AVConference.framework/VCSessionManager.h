/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionManager : NSObject <VCSessionDelegate> {
    NSMutableDictionary * _sessions;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *sessions;
@property (readonly) Class superclass;

+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)registerBlocksForService;
- (id)sessionForIDSDestination:(id)arg1;
- (id)sessions;
- (void)vcSession:(id)arg1 addParticipantWithID:(id)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)vcSession:(id)arg1 didStopWithError:(id)arg2;
- (void)vcSession:(id)arg1 removeParticipantWithID:(id)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 updateConfiguration:(id)arg2 didSucceed:(bool)arg3 error:(id)arg4;

@end
