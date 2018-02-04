/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer * __tapGestureRecognizer;
    <PUFeedCellDelegate> * _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _edgeParallaxOffset;
    NSIndexPath * _indexPath;
    struct CGPoint { 
        double x; 
        double y; 
    }  _parallaxOffset;
    NSString * _representedElementKind;
    bool  _tappable;
}

@property (setter=_setTapGestureRecognizer:, nonatomic, retain) UITapGestureRecognizer *_tapGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUFeedCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint { double x1; double x2; } edgeParallaxOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic) struct CGPoint { double x1; double x2; } parallaxOffset;
@property (nonatomic, retain) NSString *representedElementKind;
@property (readonly) Class superclass;
@property (getter=isTappable, nonatomic) bool tappable;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectWithAspectRatio:(double)arg1 fillingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 parallaxOffset:(struct CGPoint { double x1; double x2; })arg3 edgeParallaxOffset:(struct CGPoint { double x1; double x2; })arg4;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (id)_tapGestureRecognizer;
- (void)_updateTapGestureRecognizer;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (struct CGPoint { double x1; double x2; })edgeParallaxOffset;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)indexPath;
- (bool)isTappable;
- (struct CGPoint { double x1; double x2; })parallaxOffset;
- (id)representedElementKind;
- (void)setDelegate:(id)arg1;
- (void)setEdgeParallaxOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIndexPath:(id)arg1;
- (void)setParallaxOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRepresentedElementKind:(id)arg1;
- (void)setTappable:(bool)arg1;
- (bool)shouldRecognizerTap:(id)arg1;

@end
