/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AUParameterTree : AUParameterGroup <NSSecureCoding> {
    AUAudioUnit_XH * __auXH;
    bool  __autoCreatedForV2AU;
    bool  __suppressObserverCallbacks;
    struct vector<AddressToParameter, std::__1::allocator<AddressToParameter> > { 
        struct AddressToParameter {} *__begin_; 
        struct AddressToParameter {} *__end_; 
        struct __compressed_pair<AddressToParameter *, std::__1::allocator<AddressToParameter> > { 
            struct AddressToParameter {} *__first_; 
        } __end_cap_; 
    }  _addrToParamIndex;
    int  _numRecorders;
    NSObject<OS_dispatch_queue> * _observationQueue;
    struct AUObserverController { id x1; id x2; struct set<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator> > { struct __tree<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<AUObserverController::AddressOriginator, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<AUObserverController::AddressOriginator> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct vector<ParameterAutomationEvent, std::__1::allocator<ParameterAutomationEvent> > { struct ParameterAutomationEvent {} *x_4_1_1; struct ParameterAutomationEvent {} *x_4_1_2; struct __compressed_pair<ParameterAutomationEvent *, std::__1::allocator<ParameterAutomationEvent> > { struct ParameterAutomationEvent {} *x_3_2_1; } x_4_1_3; } x4; } * _observerController;
    struct AURemoteParameterObserver { } * _remoteObserverToken;
    <_AURemoteParameterSynchronization> * _remoteParameterSynchronizer;
    struct AURemoteParameterObserver { } * _remoteRecorderToken;
    NSObject<OS_dispatch_queue> * _valueAccessQueue;
}

@property (nonatomic) AUAudioUnit_XH *_auXH;
@property (nonatomic) bool _autoCreatedForV2AU;
@property (nonatomic) bool _suppressObserverCallbacks;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<AddressToParameter' */ struct  addrToParamIndex; /* unknown property attribute:  std::__1::allocator<AddressToParameter> >=^{AddressToParameter}}} */
@property (nonatomic) int numRecorders;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observationQueue;
@property (nonatomic) /* Warning: unhandled struct encoding: '{AUObserverController=@@@B{set<AUObserverController::AddressOriginator' */ struct *observerController; /* unknown property attribute:  std::__1::allocator<ParameterAutomationEvent> >=^{ParameterAutomationEvent}}}} */
@property (nonatomic) struct AURemoteParameterObserver { }*remoteObserverToken;
@property (nonatomic) <_AURemoteParameterSynchronization> *remoteParameterSynchronizer;
@property (nonatomic) struct AURemoteParameterObserver { }*remoteRecorderToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *valueAccessQueue;

+ (id)createGroupFromTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4;
+ (id)createGroupTemplate:(id)arg1;
+ (id)createGroupWithIdentifier:(id)arg1 name:(id)arg2 children:(id)arg3;
+ (id)createParameterWithIdentifier:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned int)arg6 unitName:(id)arg7 flags:(unsigned int)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10;
+ (id)createTreeWithChildren:(id)arg1;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_auXH;
- (bool)_autoCreatedForV2AU;
- (void)_checkInitTreeObservation;
- (void)_init2;
- (bool)_suppressObserverCallbacks;
- (struct vector<AddressToParameter, std::__1::allocator<AddressToParameter> > { struct AddressToParameter {} *x1; struct AddressToParameter {} *x2; struct __compressed_pair<AddressToParameter *, std::__1::allocator<AddressToParameter> > { struct AddressToParameter {} *x_3_1_1; } x3; })addrToParamIndex;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChildren:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)numRecorders;
- (id)observationQueue;
- (struct AUObserverController { id x1; id x2; struct set<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator> > { struct __tree<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<AUObserverController::AddressOriginator, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<AUObserverController::AddressOriginator> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct vector<ParameterAutomationEvent, std::__1::allocator<ParameterAutomationEvent> > { struct ParameterAutomationEvent {} *x_4_1_1; struct ParameterAutomationEvent {} *x_4_1_2; struct __compressed_pair<ParameterAutomationEvent *, std::__1::allocator<ParameterAutomationEvent> > { struct ParameterAutomationEvent {} *x_3_2_1; } x_4_1_3; } x4; }*)observerController;
- (id)parameterWithAddress:(unsigned long long)arg1;
- (id)parameterWithID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (struct AURemoteParameterObserver { }*)remoteObserverToken;
- (id)remoteParameterSynchronizer;
- (struct AURemoteParameterObserver { }*)remoteRecorderToken;
- (void)remoteSyncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (void)setAddrToParamIndex:(struct vector<AddressToParameter, std::__1::allocator<AddressToParameter> > { struct AddressToParameter {} *x1; struct AddressToParameter {} *x2; struct __compressed_pair<AddressToParameter *, std::__1::allocator<AddressToParameter> > { struct AddressToParameter {} *x_3_1_1; } x3; })arg1;
- (void)setNumRecorders:(int)arg1;
- (void)setObserverController:(struct AUObserverController { id x1; id x2; struct set<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator> > { struct __tree<AUObserverController::AddressOriginator, std::__1::less<AUObserverController::AddressOriginator>, std::__1::allocator<AUObserverController::AddressOriginator> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<AUObserverController::AddressOriginator, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<AUObserverController::AddressOriginator> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct vector<ParameterAutomationEvent, std::__1::allocator<ParameterAutomationEvent> > { struct ParameterAutomationEvent {} *x_4_1_1; struct ParameterAutomationEvent {} *x_4_1_2; struct __compressed_pair<ParameterAutomationEvent *, std::__1::allocator<ParameterAutomationEvent> > { struct ParameterAutomationEvent {} *x_3_2_1; } x_4_1_3; } x4; }*)arg1;
- (void)setRemoteObserverToken:(struct AURemoteParameterObserver { }*)arg1;
- (void)setRemoteParameterSynchronizer:(id)arg1;
- (void)setRemoteRecorderToken:(struct AURemoteParameterObserver { }*)arg1;
- (void)set_auXH:(id)arg1;
- (void)set_autoCreatedForV2AU:(bool)arg1;
- (void)set_suppressObserverCallbacks:(bool)arg1;
- (id)valueAccessQueue;

@end
