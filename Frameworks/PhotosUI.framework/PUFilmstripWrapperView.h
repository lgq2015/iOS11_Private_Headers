/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilmstripWrapperView : UIView {
    NSNumber * _anchoredLeft;
    struct CGSize { 
        double width; 
        double height; 
    }  _expandedSize;
    PUFilmstripView * _filmstripView;
    bool  _isAnimating;
    bool  _isExpanded;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
}

@property (nonatomic, copy) NSNumber *anchoredLeft;
@property (setter=setExpandedSize:, nonatomic) struct CGSize { double x1; double x2; } expandedSize;
@property (nonatomic, retain) PUFilmstripView *filmstripView;
@property (setter=setAnimating:, nonatomic) bool isAnimating;
@property (setter=setExpanded:, nonatomic) bool isExpanded;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (void).cxx_destruct;
- (id)anchoredLeft;
- (struct CGSize { double x1; double x2; })expandedSize;
- (id)filmstripView;
- (bool)isAnimating;
- (bool)isExpanded;
- (void)layoutSubviews;
- (void)setAnchoredLeft:(id)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpandedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFilmstripView:(id)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
