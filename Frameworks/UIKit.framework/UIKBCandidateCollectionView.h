/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBCandidateCollectionView : UICollectionView

@property (nonatomic, readonly) NSIndexPath *selectedItemIndexPath;

- (bool)_selectAndScrollToItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)configureAsCandidatesBar;
- (bool)delaysContentTouches;
- (id)selectedItemIndexPath;

@end
