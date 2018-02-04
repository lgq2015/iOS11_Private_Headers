/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreTransactionActions : HMDBackingStoreTransactionOptions {
    bool  _changed;
    bool  _local;
    bool  _saveToAssistant;
    bool  _saveToSharedUserAccount;
}

@property (nonatomic, readonly) bool changed;
@property (nonatomic, readonly) bool local;
@property (nonatomic, readonly) bool saveToAssistant;
@property (nonatomic, readonly) bool saveToSharedUserAccount;

+ (id)logCategory;

- (bool)changed;
- (id)description;
- (id)initWithOptions:(id)arg1;
- (bool)local;
- (id)logIdentifier;
- (void)markChanged;
- (void)markLocalChanged;
- (void)markSaveToAssistant;
- (void)markSaveToSharedUserAccount;
- (bool)saveToAssistant;
- (bool)saveToSharedUserAccount;

@end
