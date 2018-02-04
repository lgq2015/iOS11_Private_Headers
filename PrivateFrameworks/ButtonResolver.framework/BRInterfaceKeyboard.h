/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
 */

@interface BRInterfaceKeyboard : BRInterface {
    struct __IOHIDEventSystemClient { } * _client;
    unsigned long long  _doublePressTimeoutUs;
    bool  _isReady;
    unsigned long long  _longPressTimeoutUs;
    unsigned long long  _maxAssetSlots;
    NSMutableDictionary * _propertyCache;
    NSMutableSet * _services;
    unsigned long long  _triplePressTimeoutUs;
    unsigned long long  _unusedAssetSlots;
}

@property (nonatomic, readonly) NSMutableSet *services;

+ (id)interface;

- (bool)_disableState:(unsigned long long)arg1;
- (bool)_enableState:(unsigned long long)arg1;
- (void)_findServices;
- (bool)_servicesSetProperty:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (bool)_setCachedPropertiesOnService:(struct __IOHIDServiceClient { }*)arg1;
- (bool)_setConfig:(id)arg1 forState:(unsigned long long)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)description;
- (bool)disableStates:(id)arg1 clearAsset:(bool)arg2 error:(id*)arg3;
- (bool)enableStates:(id)arg1 error:(id*)arg2;
- (id)init;
- (bool)isReady;
- (unsigned long long)maxAssetSlots;
- (id)propertyList;
- (void)scheduleReadyNotificationWithBlock:(id /* block */)arg1;
- (id)services;
- (bool)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4;
- (bool)setGlobalConfigs:(id)arg1 error:(id*)arg2;
- (unsigned long long)unusedAssetSlots;

@end
