/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetTokenRequest : NSObject {
    NSMutableArray * _assetBatches;
    NSMutableSet * _failedAssetBatches;
    unsigned int  _size;
    unsigned int  _sizeUpperBound;
}

@property (nonatomic, retain) NSMutableArray *assetBatches;
@property (nonatomic, retain) NSMutableSet *failedAssetBatches;
@property (nonatomic) unsigned int size;
@property (nonatomic) unsigned int sizeUpperBound;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addAssetBatch:(id)arg1;
- (void)addFailedBatch:(id)arg1;
- (id)assetBatches;
- (id)description;
- (id)failedAssetBatches;
- (bool)hasSuccessfulBatches;
- (id)init;
- (bool)isEmpty;
- (void)setAssetBatches:(id)arg1;
- (void)setFailedAssetBatches:(id)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setSizeUpperBound:(unsigned int)arg1;
- (unsigned int)size;
- (unsigned int)sizeUpperBound;
- (id)successfulBatches;

@end
