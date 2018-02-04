/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSectionedGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    bool  _invalidateForVerticalScroll;
    bool  _invalidationHasBeenRedispatched;
    bool  _samplingIsPreserved;
    bool  _sectioningIsPreserved;
}

@property (nonatomic) bool invalidateForVerticalScroll;
@property (nonatomic) bool invalidationHasBeenRedispatched;
@property (nonatomic) bool samplingIsPreserved;
@property (nonatomic) bool sectioningIsPreserved;

- (id)description;
- (bool)invalidateForVerticalScroll;
- (bool)invalidationHasBeenRedispatched;
- (bool)samplingIsPreserved;
- (bool)sectioningIsPreserved;
- (void)setInvalidateForVerticalScroll:(bool)arg1;
- (void)setInvalidationHasBeenRedispatched:(bool)arg1;
- (void)setSamplingIsPreserved:(bool)arg1;
- (void)setSectioningIsPreserved:(bool)arg1;

@end
