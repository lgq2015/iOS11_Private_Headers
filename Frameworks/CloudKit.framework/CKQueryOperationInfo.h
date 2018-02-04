/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQueryOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSDictionary * _assetTransferOptionsByKey;
    CKQueryCursor * _cursor;
    NSArray * _desiredKeys;
    bool  _fetchAllResults;
    CKQuery * _query;
    unsigned long long  _resultsLimit;
    bool  _shouldFetchAssetContent;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) NSDictionary *assetTransferOptionsByKey;
@property (nonatomic, retain) CKQueryCursor *cursor;
@property (nonatomic, retain) NSArray *desiredKeys;
@property (nonatomic) bool fetchAllResults;
@property (nonatomic, retain) CKQuery *query;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) bool shouldFetchAssetContent;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetTransferOptionsByKey;
- (id)cursor;
- (id)desiredKeys;
- (void)encodeWithCoder:(id)arg1;
- (bool)fetchAllResults;
- (id)initWithCoder:(id)arg1;
- (id)query;
- (unsigned long long)resultsLimit;
- (void)setAssetTransferOptionsByKey:(id)arg1;
- (void)setCursor:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchAllResults:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setZoneID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneID;

@end
