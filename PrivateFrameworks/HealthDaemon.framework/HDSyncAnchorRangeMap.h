/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSyncAnchorRangeMap : NSObject <NSSecureCoding> {
    NSMutableDictionary * _anchorRangesByObjectType;
}

@property (nonatomic, retain) NSMutableDictionary *anchorRangesByObjectType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)anchorRangeCount;
- (id)anchorRangesByObjectType;
- (id)codableSyncAnchorRangeMap;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAnchorRangesAndSyncEntitiesWithBlock:(id /* block */)arg1;
- (bool)getAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; }*)arg1 forSyncEntityClass:(Class)arg2;
- (id)initWithCodableSyncAnchorRangeMap:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)reset;
- (void)setAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg1 forSyncEntityClass:(Class)arg2;
- (void)setAnchorRangesByObjectType:(id)arg1;

@end
