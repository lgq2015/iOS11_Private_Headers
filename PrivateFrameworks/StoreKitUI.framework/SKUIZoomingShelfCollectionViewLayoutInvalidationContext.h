/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIZoomingShelfCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    bool  _invalidateGeometryOnlyOfExistingLayoutAttributes;
}

@property (nonatomic) bool invalidateGeometryOnlyOfExistingLayoutAttributes;

- (bool)invalidateGeometryOnlyOfExistingLayoutAttributes;
- (void)setInvalidateGeometryOnlyOfExistingLayoutAttributes:(bool)arg1;

@end
