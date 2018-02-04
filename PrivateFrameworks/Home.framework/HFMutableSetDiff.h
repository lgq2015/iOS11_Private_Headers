/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMutableSetDiff : HFSetDiff {
    bool  _hasChanges;
}

@property (nonatomic, readonly) bool hasChanges;

- (void)_updateHasChanges;
- (void)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteAllObjects;
- (void)deleteObject:(id)arg1;
- (bool)hasChanges;
- (id)initWithFromSet:(id)arg1;
- (void)updateObject:(id)arg1;

@end
