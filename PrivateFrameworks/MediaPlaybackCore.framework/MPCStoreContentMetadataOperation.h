/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCStoreContentMetadataOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    MPCStoreContentMetadataResponse * _response;
    NSDictionary * _storeBagDictionary;
    NSArray * _storeIDs;
}

@property (readonly) MPCStoreContentMetadataResponse *response;
@property (copy) NSDictionary *storeBagDictionary;
@property (copy) NSArray *storeIDs;

- (void).cxx_destruct;
- (void)execute;
- (id)init;
- (id)response;
- (void)setStoreBagDictionary:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (id)storeBagDictionary;
- (id)storeIDs;

@end
