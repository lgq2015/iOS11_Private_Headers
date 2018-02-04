/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeSaveRequest : HMFObject {
    HMDHome * _home;
    bool  _incrementGeneration;
    NSDictionary * _information;
    HMDBackingStoreModelObject * _objectChange;
    NSString * _reason;
    unsigned long long  _saveOptions;
}

@property (nonatomic, readonly) HMDHome *home;
@property (nonatomic, readonly) bool incrementGeneration;
@property (nonatomic, readonly) NSDictionary *information;
@property (nonatomic, readonly) HMDBackingStoreModelObject *objectChange;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) unsigned long long saveOptions;

- (void).cxx_destruct;
- (void)_updateSaveOptions:(bool)arg1 reason:(id)arg2;
- (id)home;
- (bool)incrementGeneration;
- (id)information;
- (id)initWithHome:(id)arg1 reason:(id)arg2 information:(id)arg3 postSyncNotification:(bool)arg4 objectChange:(id)arg5;
- (id)initWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(bool)arg3;
- (id)initWithReason:(id)arg1 information:(id)arg2 saveOptions:(unsigned long long)arg3;
- (id)objectChange;
- (id)reason;
- (unsigned long long)saveOptions;

@end
