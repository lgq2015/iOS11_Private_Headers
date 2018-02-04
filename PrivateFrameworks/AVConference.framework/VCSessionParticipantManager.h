/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionParticipantManager : NSObject <VCSessionParticipantDelegate> {
    NSMutableDictionary * _sessionParticipants;
    NSObject<OS_dispatch_queue> * _xpcCallbackQueue;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *sessionParticipants;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)participantForID:(id)arg1;
- (void)registerBlocksForService;
- (id)sessionParticipants;
- (void)vcSessionParticipant:(id)arg1 didFrequencyLevelsChange:(id)arg2;

@end
