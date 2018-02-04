/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroPosterRequest : NSObject {
    MiroBlueprint * _blueprint;
    NSMutableArray * _completionHandlers;
    NSLock * _completionHandlersLock;
    NSString * _displaySubtitle;
    PHAsset * _keyAsset;
    NSString * _localizedTitle;
    MiroMemory * _memory;
    MiroPosterRequestOptions * _options;
    NSMutableArray * _scheduledRequestIDs;
    NSLock * _scheduledRequestIDsLock;
}

@property (nonatomic, retain) MiroBlueprint *blueprint;
@property (nonatomic, retain) NSString *displaySubtitle;
@property (nonatomic, retain) PHAsset *keyAsset;
@property (nonatomic, retain) NSString *localizedTitle;
@property (readonly) MiroMemory *memory;
@property (nonatomic, retain) MiroPosterRequestOptions *options;

- (void).cxx_destruct;
- (void)addCompletionHandlers:(id)arg1;
- (void)addScheduledRequestID:(id)arg1;
- (id)blueprint;
- (id)completionHandlers;
- (id)displaySubtitle;
- (id)initWithMemory:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)isEqualToRequest:(id)arg1;
- (bool)isUpToDate;
- (id)keyAsset;
- (id)localizedTitle;
- (id)memory;
- (id)options;
- (id)scheduledRequestIDs;
- (void)setBlueprint:(id)arg1;
- (void)setDisplaySubtitle:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)snapshotMemory;

@end
