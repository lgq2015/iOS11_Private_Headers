/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPReplicaEditUpdateContents : MSPReplicaEdit {
    NSData * _contents;
    MSPVectorTimestamp * _contentsTimestamp;
}

@property (nonatomic, readonly) NSData *contents;
@property (nonatomic, readonly) MSPVectorTimestamp *contentsTimestamp;

- (void).cxx_destruct;
- (id)_initToMoveRecordWithIdentifier:(id)arg1 toContents:(id)arg2 contentsTimestamp:(id)arg3;
- (id)_initToTurnIntoTombstoneRecordWithIdentifier:(id)arg1;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;
- (id)contents;
- (id)contentsTimestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
