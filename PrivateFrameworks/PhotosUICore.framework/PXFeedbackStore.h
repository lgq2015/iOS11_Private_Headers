/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackStore : NSObject {
    NSMutableDictionary * _store;
}

@property (nonatomic, readonly) NSDictionary *store;

- (void).cxx_destruct;
- (void)_cleanupStore;
- (bool)_loadStore;
- (bool)_saveStore;
- (id)_storePath;
- (void)addFeedbackEntry:(id)arg1;
- (id)init;
- (id)longDescription;
- (void)removeFeedbackEntry:(id)arg1;
- (unsigned long long)sentFeedbackCount;
- (id)store;
- (unsigned long long)unsentFeedbackCount;

@end
