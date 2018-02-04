/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUpdater : NSObject {
    bool  _extraChecksEnabled;
    bool  _isPerformingUpdates;
    SEL  _needsUpdateSelector;
    SEL * _orderedUpdateSelectors;
    unsigned long long  _orderedUpdateSelectorsCapacity;
    unsigned long long  _orderedUpdateSelectorsCount;
    id  _target;
    bool  _updatePassScheduled;
    NSMutableIndexSet * _updateSelectorsAlreadyUpdated;
    NSMutableIndexSet * _updateSelectorsNeedingUpdate;
}

@property (nonatomic) bool extraChecksEnabled;
@property (nonatomic) SEL needsUpdateSelector;
@property (nonatomic, readonly) id target;
@property (getter=isUpdatePassScheduled, nonatomic) bool updatePassScheduled;

- (void).cxx_destruct;
- (void)_scheduleUpdatePassIfNeeded;
- (void)addUpdateSelector:(SEL)arg1;
- (void)dealloc;
- (bool)extraChecksEnabled;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (bool)isUpdatePassScheduled;
- (SEL)needsUpdateSelector;
- (void)setExtraChecksEnabled:(bool)arg1;
- (void)setNeedsUpdateOf:(SEL)arg1;
- (void)setNeedsUpdateSelector:(SEL)arg1;
- (void)setUpdatePassScheduled:(bool)arg1;
- (id)target;
- (void)updateIfNeeded;

@end
