/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVCollectionWrappingView : UIView <TVRowHosting> {
    double  _collectionCenteredPadding;
    long long  _collectionGradientMask;
    _TVCollectionView * _collectionView;
    struct { 
        bool respondsToAugmentedSelectionFrameForFrame; 
    }  _collectionViewFlags;
    bool  _headerAuxiliarySelecting;
    bool  _headerCanBecomeFocused;
    bool  _headerFloating;
    bool  _headerFocused;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _headerFrame;
    bool  _headerHidden;
    double  _headerSelectionMargin;
    UIView * _headerView;
    UIView * _selectingView;
}

@property (nonatomic) double collectionCenteredPadding;
@property (nonatomic) long long collectionGradientMask;
@property (nonatomic, retain) _TVCollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHeaderAuxiliarySelecting, nonatomic) bool headerAuxiliarySelecting;
@property (nonatomic) bool headerCanBecomeFocused;
@property (getter=isHeaderFloating, nonatomic) bool headerFloating;
@property (getter=isHeaderFocused, nonatomic) bool headerFocused;
@property (getter=isHeaderHidden, nonatomic) bool headerHidden;
@property (nonatomic) double headerSelectionMargin;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, readonly) bool shouldBindRowsTogether;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedHeaderFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_adjustedPadding;
- (id)_currentHeaderView;
- (void)_updateSubviews;
- (double)collectionCenteredPadding;
- (long long)collectionGradientMask;
- (id)collectionView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)headerCanBecomeFocused;
- (double)headerSelectionMargin;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHeaderAuxiliarySelecting;
- (bool)isHeaderFloating;
- (bool)isHeaderFocused;
- (bool)isHeaderHidden;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (void)reevaluateHeaderFrame;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2;
- (void)setCollectionCenteredPadding:(double)arg1;
- (void)setCollectionGradientMask:(long long)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setHeaderAuxiliarySelecting:(bool)arg1;
- (void)setHeaderCanBecomeFocused:(bool)arg1;
- (void)setHeaderFloating:(bool)arg1;
- (void)setHeaderFocused:(bool)arg1;
- (void)setHeaderHidden:(bool)arg1;
- (void)setHeaderSelectionMargin:(double)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setValue:(id)arg1 forTVViewStyle:(id)arg2;
- (bool)shouldBindRowsTogether;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
