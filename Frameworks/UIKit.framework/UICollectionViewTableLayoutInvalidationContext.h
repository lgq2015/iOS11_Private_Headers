/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewTableLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    bool  _invalidateTableLayoutDelegateMetrics;
}

@property (nonatomic) bool invalidateTableLayoutDelegateMetrics;

- (bool)invalidateTableLayoutDelegateMetrics;
- (void)setInvalidateTableLayoutDelegateMetrics:(bool)arg1;

@end
