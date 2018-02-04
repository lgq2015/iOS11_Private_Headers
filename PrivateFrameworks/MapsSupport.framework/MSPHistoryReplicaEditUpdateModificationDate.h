/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPHistoryReplicaEditUpdateModificationDate : MSPReplicaEdit {
    NSDate * _modificationDate;
}

@property (nonatomic, readonly) NSDate *modificationDate;

- (void).cxx_destruct;
- (id)_initToMoveRecordWithIdentifier:(id)arg1 toModificationDate:(id)arg2;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)modificationDate;

@end
