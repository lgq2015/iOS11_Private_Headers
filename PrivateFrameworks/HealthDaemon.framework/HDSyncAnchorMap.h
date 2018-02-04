/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSyncAnchorMap : NSObject <HDSyncAnchorMap, NSSecureCoding> {
    NSMutableDictionary * _anchorsByObjectType;
}

@property (nonatomic, retain) NSMutableDictionary *anchorsByObjectType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)anchorMapWithAnchorMap:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)syncAnchorMapWithSyncAnchorRangeMap:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)anchorCount;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (id)anchorsByObjectType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAnchorsAndSyncEntitiesWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAllZero;
- (bool)isEqual:(id)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
- (void)setAnchorsByObjectType:(id)arg1;

@end
