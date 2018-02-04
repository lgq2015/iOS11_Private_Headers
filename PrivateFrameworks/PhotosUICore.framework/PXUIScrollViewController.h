/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIScrollViewController : PXScrollViewController <PXUIScrollViewDelegate, UIScrollViewDelegate> {
    UIView * _contentView;
    bool  _isUpdatingContentBounds;
    _PXUIScrollView * _scrollView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (void)addGestureRecognizer:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)addSubviewToScrollView:(struct NSObject { Class x1; }*)arg1;
- (void)applyScrollInfo:(id)arg1;
- (id)contentCoordinateSpace;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 avoidingContentInsetEdges:(unsigned long long)arg2 animated:(bool)arg3;
- (id)scrollView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewActiveRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewConstrainedVisibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewContentBounds;
- (struct CGSize { double x1; double x2; })scrollViewContentSize;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidLayoutSubviews:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewLayoutIfNeeded;
- (struct CGSize { double x1; double x2; })scrollViewReferenceSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewVisibleRect;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)scrollViewWillLayoutSubviews:(id)arg1;
- (void)setScrollViewContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScrollViewNeedsLayout;

// Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer

- (void)ae_ensureSubview:(id)arg1;

@end
