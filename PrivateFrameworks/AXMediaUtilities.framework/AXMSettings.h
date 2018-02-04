/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMSettings : NSObject {
    NSUserDefaults * _defaults;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _queue_settingObservers;
}

@property (nonatomic) bool writeOutInputImages;
@property (nonatomic) bool writeOutOCRInputImages;
@property (nonatomic) bool writeOutScreenCaptures;

+ (id)settings;

- (void).cxx_destruct;
- (id)_init;
- (void)_queue_removeObserver:(id)arg1 forSetting:(id)arg2;
- (void)addObserver:(id)arg1 forSeetting:(id)arg2 withBlock:(id /* block */)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1 forSetting:(id)arg2;
- (void)removeObserverForAllSettings:(id)arg1;
- (void)setWriteOutInputImages:(bool)arg1;
- (void)setWriteOutOCRInputImages:(bool)arg1;
- (void)setWriteOutScreenCaptures:(bool)arg1;
- (bool)writeOutInputImages;
- (bool)writeOutOCRInputImages;
- (bool)writeOutScreenCaptures;

@end
