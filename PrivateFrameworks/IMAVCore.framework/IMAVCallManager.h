/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVCallManager : NSObject {
    unsigned int  _acCallState;
    NSMutableArray * _acChatProxyArray;
    int  _acToken;
    unsigned int  _avCallState;
    NSMutableArray * _avChatProxyArray;
    int  _avToken;
    NSMutableArray * _chatArray;
    unsigned int  _globalCallState;
    NSMutableDictionary * _guidToACChatProxyMap;
    NSMutableDictionary * _guidToAVChatProxyMap;
    NSDate * _lastCallStateChange;
    IMPowerAssertion * _powerAssertion;
}

@property (nonatomic, readonly, retain) NSArray *_FTCalls;
@property (nonatomic, readonly) unsigned int callState;
@property (nonatomic, readonly, retain) NSArray *calls;
@property (nonatomic, readonly) bool hasActiveCall;

+ (id)sharedInstance;

- (id)_FTCalls;
- (id)_activeAudioCall;
- (id)_activeFaceTimeCall;
- (void)_addACChatProxy:(id)arg1;
- (void)_addAVChatProxy:(id)arg1;
- (void)_addIMAVChatToChatList:(id)arg1;
- (unsigned int)_callState;
- (unsigned int)_callStateForType:(unsigned int)arg1;
- (id)_calls;
- (id)_copyMutableFTCalls;
- (bool)_hasActiveAudioCall;
- (bool)_hasActiveFaceTimeCall;
- (id)_mutableFTCalls;
- (id)_nonRetainingChatList;
- (void)_postStateChangeIfNecessary;
- (void)_postStateChangeNamed:(id)arg1 fromState:(unsigned int)arg2 toState:(unsigned int)arg3 postType:(bool)arg4 type:(unsigned int)arg5;
- (void)_removeIMAVChatFromChatList:(id)arg1;
- (void)_sendProxyUpdate;
- (void)_setACCallState:(unsigned int)arg1;
- (void)_setACCallState:(unsigned int)arg1 quietly:(bool)arg2;
- (void)_setAVCallState:(unsigned int)arg1;
- (void)_setAVCallState:(unsigned int)arg1 quietly:(bool)arg2;
- (void)_updateACCallState;
- (void)_updateACChatProxyWithInfo:(id)arg1;
- (void)_updateAVCallState;
- (void)_updateAVChatProxyWithInfo:(id)arg1;
- (void)_updateOverallChatState;
- (unsigned int)callState;
- (id)calls;
- (void)dealloc;
- (bool)hasActiveCall;
- (id)init;

@end
