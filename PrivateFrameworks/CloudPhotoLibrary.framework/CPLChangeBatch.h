/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLChangeBatch : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding> {
    NSMutableDictionary * _additionalRecords;
    bool  _calculateEstimatedBatchSize;
    unsigned long long  _estimatedBatchSize;
    NSMutableDictionary * _localResources;
    NSMutableArray * _records;
}

@property (nonatomic, readonly) NSArray *records;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addAdditionalRecord:(id)arg1;
- (void)_addChange:(id)arg1 resultBatch:(id)arg2 changesPerIdentifier:(id)arg3 changesPerClass:(id)arg4;
- (id)_additionalRecords;
- (id)_initWithRecords:(id)arg1;
- (void)_setAdditionalRecords:(id)arg1;
- (void)_setRecords:(id)arg1;
- (void)addRecord:(id)arg1;
- (void)addRecordsFromBatch:(id)arg1;
- (id)additionalRecordWithIdentifier:(id)arg1;
- (void)appendLocalResources:(id)arg1 forItemWithCloudIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)cplFullDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)estimatedBatchSize;
- (void)extractInitialDownloadBatch:(id*)arg1 shouldConsiderRecordFilter:(id /* block */)arg2;
- (bool)hasChangeWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecords:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localResourceOfType:(unsigned long long)arg1 forItemWithCloudIdentifier:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)records;
- (void)removeRecordWithIdentifier:(id)arg1;
- (bool)sortBatchWithError:(id*)arg1;
- (id)summaryDescription;

@end
