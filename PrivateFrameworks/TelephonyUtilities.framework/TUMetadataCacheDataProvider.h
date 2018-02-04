/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMetadataCacheDataProvider : NSObject {
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    <TUMetadataCacheDataProviderDelegate> * _delegate;
    NSMutableDictionary * _providerCache;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (nonatomic) <TUMetadataCacheDataProviderDelegate> *delegate;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) NSMutableDictionary *providerCache;

- (void).cxx_destruct;
- (id)concurrentQueue;
- (id)delegate;
- (id)description;
- (id)init;
- (bool)isEmpty;
- (id)metadataForDestinationID:(id)arg1;
- (id)providerCache;
- (void)refresh;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 forDestinationID:(id)arg2;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;

@end
