/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
 */

@interface BRInterface : NSObject {
    bool  _isReady;
    unsigned long long  _maxAssetSlots;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _timestampDict;
    unsigned long long  _unusedAssetSlots;
}

@property (nonatomic, readonly) bool isReady;
@property (nonatomic, readonly) unsigned long long maxAssetSlots;
@property (nonatomic, readonly) id propertyList;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) unsigned long long unusedAssetSlots;

+ (id)interface;
+ (id)interfaces;

- (void)dealloc;
- (id)description;
- (bool)disableStates:(id)arg1 clearAsset:(bool)arg2 error:(id*)arg3;
- (bool)enableStates:(id)arg1 error:(id*)arg2;
- (id)init;
- (bool)isReady;
- (unsigned long long)maxAssetSlots;
- (bool)playState:(unsigned long long)arg1 forSpeed:(unsigned long long)arg2 error:(id*)arg3;
- (id)propertyList;
- (id)queue;
- (void)scheduleReadyNotificationWithBlock:(id /* block */)arg1;
- (bool)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4;
- (bool)setGlobalConfigs:(id)arg1 error:(id*)arg2;
- (void)timestampWithLabel:(id)arg1;
- (unsigned long long)unusedAssetSlots;

@end
