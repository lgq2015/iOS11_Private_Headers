/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetRequestPlanner : NSObject {
    NSArray * _assetBatches;
    NSMutableDictionary * _assetBatchesByZoneID;
    unsigned int  _assetTokenRequestSizeLimit;
    NSArray * _assetTokenRequests;
    NSMutableDictionary * _assetZonesByZoneID;
    NSMutableOrderedSet * _items;
}

@property (nonatomic, retain) NSArray *assetBatches;
@property (nonatomic, retain) NSMutableDictionary *assetBatchesByZoneID;
@property (nonatomic, readonly) unsigned int assetTokenRequestSizeLimit;
@property (nonatomic, retain) NSArray *assetTokenRequests;
@property (nonatomic, retain) NSMutableDictionary *assetZonesByZoneID;
@property (nonatomic, retain) NSMutableOrderedSet *items;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addMMCSItem:(id)arg1;
- (void)addMMCSSectionItem:(id)arg1;
- (id)assetBatches;
- (id)assetBatchesByZoneID;
- (unsigned int)assetTokenRequestSizeLimit;
- (id)assetTokenRequests;
- (id)assetZonesByZoneID;
- (id)description;
- (void)failBatch:(id)arg1;
- (bool)hasSuccessfulAssetTokenRequests;
- (bool)hasSuccessfulBatches;
- (id)init;
- (id)items;
- (void)planAssetRequests;
- (void)planRegisterBatches;
- (void)setAssetBatches:(id)arg1;
- (void)setAssetBatchesByZoneID:(id)arg1;
- (void)setAssetTokenRequests:(id)arg1;
- (void)setAssetZonesByZoneID:(id)arg1;
- (void)setItems:(id)arg1;

@end
