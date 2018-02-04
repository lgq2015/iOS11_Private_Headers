/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailAddressing.framework/EmailAddressing
 */

@interface EAEmailAddressSet : NSMutableSet {
    NSMutableSet * _internalSet;
}

@property (nonatomic, retain) NSMutableSet *internalSet;

+ (id)set;
+ (id)setWithCapacity:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)internalSet;
- (void)intersectSet:(id)arg1;
- (bool)intersectsSet:(id)arg1;
- (bool)isEqualToSet:(id)arg1;
- (bool)isSubsetOfSet:(id)arg1;
- (id)member:(id)arg1;
- (void)minusSet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)setInternalSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;

@end
