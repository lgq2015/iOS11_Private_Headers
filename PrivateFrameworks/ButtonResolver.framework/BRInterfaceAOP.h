/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
 */

@interface BRInterfaceAOP : BRInterface {
    unsigned int  _arrivalNotification;
    unsigned int  _connect;
    bool  _fastHaptics;
    NSMutableIndexSet * _freeSlots;
    bool  _isReady;
    HAButtonHapticsLoader * _loader;
    unsigned long long  _maxAssetSlots;
    id /* block */  _notificationBlock;
    NSString * _notificationName;
    struct IONotificationPort { } * _notificationPort;
    unsigned int  _service;
    NSMutableArray * _slotArray;
    NSMutableDictionary * _stateDict;
}

@property (nonatomic) unsigned int connect;
@property (nonatomic, readonly) bool fastHaptics;
@property (nonatomic) unsigned int service;

+ (int)_convertAssertion:(unsigned long long)arg1;
+ (int)_convertClickState:(unsigned long long)arg1;
+ (int)_convertForceFeel:(unsigned long long)arg1;
+ (id)interface;

- (void)_findService;
- (void)_receiveLoaderAvailableNotification:(id)arg1;
- (bool)_serviceSetProperty:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (bool)_setDefaultAOPConfigs;
- (bool)_setGlobalAOPConfigsFromBRFConfigs:(id)arg1;
- (bool)_setStateAOPConfigsFromStateData:(id)arg1 andSlotData:(id)arg2;
- (unsigned int)connect;
- (id)dataForSlot:(id)arg1 fromArray:(id)arg2;
- (void)dealloc;
- (id)description;
- (bool)disableStates:(id)arg1 clearAsset:(bool)arg2 error:(id*)arg3;
- (bool)enableStates:(id)arg1 error:(id*)arg2;
- (bool)fastHaptics;
- (id)init;
- (id)initWithFastHaptics:(bool)arg1;
- (bool)isReady;
- (unsigned long long)maxAssetSlots;
- (void)mergeStateChanges:(id)arg1 into:(id)arg2;
- (bool)playState:(unsigned long long)arg1 forSpeed:(unsigned long long)arg2 error:(id*)arg3;
- (id)propertyList;
- (void)scheduleReadyNotificationWithBlock:(id /* block */)arg1;
- (unsigned int)service;
- (bool)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4;
- (void)setConnect:(unsigned int)arg1;
- (bool)setGlobalConfigs:(id)arg1 error:(id*)arg2;
- (void)setService:(unsigned int)arg1;
- (unsigned long long)unusedAssetSlots;
- (bool)updateReadyState;

@end
