/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPHistoryReplicaSimpleRecord : NSObject <MSPHistoryReplicaRecord> {
    NSData * _contents;
    MSPVectorTimestamp * _contentsTimestamp;
    NSDate * _modificationDate;
}

@property (nonatomic, readonly, copy) NSData *contents;
@property (nonatomic, readonly, copy) MSPVectorTimestamp *contentsTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (readonly) Class superclass;

+ (id)recordWithContentsOfRecord:(id)arg1;
+ (id)recordsByApplyingEdits:(id)arg1 toArbitraryRecords:(id)arg2;

- (void).cxx_destruct;
- (id)contents;
- (id)contentsTimestamp;
- (id)derivedRecordWithContents:(id)arg1 contentsTimestamp:(id)arg2;
- (id)derivedRecordWithModificationDate:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 modificationDate:(id)arg3;
- (id)modificationDate;

@end
