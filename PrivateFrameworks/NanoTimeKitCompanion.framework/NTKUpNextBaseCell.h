/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    NTKUpNextElementContent * _content;
    double  _contentBrightness;
    UIImage * _contentImage;
    double  _darkeningAmount;
    <NTKUpNextCellDelegate> * _delegate;
    CALayer * _imageLayer;
    UILongPressGestureRecognizer * _longPressRecognizer;
    UIView * _overlayView;
    UIImage * _overrideContentImage;
    NSString * _representedElementIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowSize;
    UIImageView * _shadowView;
}

@property (nonatomic, readonly) NTKUpNextElementContent *content;
@property (nonatomic, readonly) UIImage *contentImage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKUpNextCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALayer *imageLayer;
@property (nonatomic, retain) UIImage *overrideContentImage;
@property (nonatomic, retain) NSString *representedElementIdentifier;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_updateColorOverlay;
- (void)applyLayoutAttributes:(id)arg1;
- (void)configureWithContent:(id)arg1;
- (id)content;
- (id)contentImage;
- (id)delegate;
- (void)didLongPress:(id)arg1;
- (id)imageLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)overrideContentImage;
- (void)prepareForReuse;
- (id)representedElementIdentifier;
- (void)setContentBrightness:(double)arg1 animated:(bool)arg2;
- (void)setContentImage:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOverrideContentImage:(id)arg1;
- (void)setRepresentedElementIdentifier:(id)arg1;
- (id)transitionContext;

@end
