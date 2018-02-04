/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallContainer : NSObject <TUCallContainer, TUCallContainerPrivate> {
    NSArray * _calls;
}

@property (nonatomic, readonly, copy) NSArray *_allCalls;
@property (nonatomic, readonly) TUCall *activeVideoCall;
@property (nonatomic, readonly) bool anyCallIsEndpointOnCurrentDevice;
@property (nonatomic, readonly) bool anyCallIsHostedOnCurrentDevice;
@property (nonatomic, readonly) unsigned long long callCountOnDefaultPairedDevice;
@property (nonatomic, readonly, copy) NSArray *callGroupsOnDefaultPairedDevice;
@property (nonatomic, copy) NSArray *calls;
@property (nonatomic, readonly, copy) NSArray *callsHostedElsewhere;
@property (nonatomic, readonly, copy) NSArray *callsHostedOrAnEndpointElsewhere;
@property (nonatomic, readonly, copy) NSArray *callsOnDefaultPairedDevice;
@property (nonatomic, readonly, copy) NSArray *callsWithAnEndpointElsewhere;
@property (nonatomic, readonly) TUCall *conferenceCall;
@property (nonatomic, readonly, copy) NSArray *conferenceParticipantCalls;
@property (nonatomic, readonly) unsigned long long currentAudioAndVideoCallCount;
@property (nonatomic, readonly, copy) NSArray *currentAudioAndVideoCalls;
@property (nonatomic, readonly) unsigned long long currentCallCount;
@property (nonatomic, readonly, copy) NSArray *currentCallGroups;
@property (nonatomic, readonly, copy) NSArray *currentCalls;
@property (nonatomic, readonly) TUCall *currentVideoCall;
@property (nonatomic, readonly) unsigned long long currentVideoCallCount;
@property (nonatomic, readonly, copy) NSArray *currentVideoCalls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TUCall *displayedCall;
@property (nonatomic, readonly, copy) NSArray *displayedCalls;
@property (nonatomic, readonly) bool existingCallsHaveMultipleProviders;
@property (nonatomic, readonly, retain) TUCall *frontmostAudioOrVideoCall;
@property (nonatomic, readonly) TUCall *frontmostCall;
@property (nonatomic, readonly) bool hasCurrentAudioCalls;
@property (nonatomic, readonly) bool hasCurrentCalls;
@property (nonatomic, readonly) bool hasCurrentVideoCalls;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TUCall *incomingCall;
@property (nonatomic, readonly, copy) NSArray *incomingCalls;
@property (nonatomic, readonly) TUCall *incomingVideoCall;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allCalls;
- (id)_callGroupsFromCalls:(id)arg1;
- (id)activeVideoCall;
- (bool)allCallsAreOfService:(int)arg1;
- (bool)allCallsPassTest:(id /* block */)arg1;
- (bool)anyCallIsEndpointOnCurrentDevice;
- (bool)anyCallIsHostedOnCurrentDevice;
- (bool)anyCallPassesTest:(id /* block */)arg1;
- (id)audioAndVideoCallsWithStatus:(int)arg1;
- (id)audioOrVideoCallWithStatus:(int)arg1;
- (unsigned long long)callCountOnDefaultPairedDevice;
- (id)callGroupsOnDefaultPairedDevice;
- (id)callPassingTest:(id /* block */)arg1;
- (id)callPassingTest:(id /* block */)arg1 sortedUsingComparator:(id /* block */)arg2;
- (id)callPassingTest:(id /* block */)arg1 withOptions:(unsigned long long)arg2;
- (id)callWithCallUUID:(id)arg1;
- (id)callWithStatus:(int)arg1;
- (id)callWithUniqueProxyIdentifier:(id)arg1;
- (id)calls;
- (id)callsHostedElsewhere;
- (id)callsHostedOrAnEndpointElsewhere;
- (id)callsOnDefaultPairedDevice;
- (id)callsPassingTest:(id /* block */)arg1;
- (id)callsWithAnEndpointElsewhere;
- (id)callsWithGroupUUID:(id)arg1;
- (id)callsWithStatus:(int)arg1;
- (id)conferenceCall;
- (id)conferenceParticipantCalls;
- (unsigned long long)countOfCallsPassingTest:(id /* block */)arg1;
- (unsigned long long)currentAudioAndVideoCallCount;
- (id)currentAudioAndVideoCalls;
- (unsigned long long)currentCallCount;
- (id)currentCallGroups;
- (id)currentCalls;
- (id)currentVideoCall;
- (unsigned long long)currentVideoCallCount;
- (id)currentVideoCalls;
- (id)displayedCall;
- (id)displayedCallFromCalls:(id)arg1;
- (id)displayedCalls;
- (void)enumerateCallsInvokingBlock:(id /* block */)arg1 forCallsPassingTest:(id /* block */)arg2;
- (void)enumerateCallsWithOptions:(unsigned long long)arg1 invokingBlock:(id /* block */)arg2 forCallsPassingTest:(id /* block */)arg3;
- (bool)existingCallsHaveMultipleProviders;
- (id)frontmostAudioOrVideoCall;
- (id)frontmostCall;
- (bool)hasCurrentAudioCalls;
- (bool)hasCurrentCalls;
- (bool)hasCurrentVideoCalls;
- (id)incomingCall;
- (id)incomingCalls;
- (id)incomingVideoCall;
- (id)init;
- (id)initWithCalls:(id)arg1;
- (void)setCalls:(id)arg1;
- (id)videoCallWithStatus:(int)arg1;

@end
