/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADDimmerView : UIView {
    <ADDimmerViewDelegate> * _delegate;
    bool  _dimmed;
    ADTapGestureRecognizer * _gestureRecognizer;
}

@property (nonatomic) <ADDimmerViewDelegate> *delegate;
@property (nonatomic) bool dimmed;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, retain) ADTapGestureRecognizer *gestureRecognizer;

- (void)_tapRecognized:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)dimmed;
- (bool)enabled;
- (id)gestureRecognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeADTapGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setGestureRecognizer:(id)arg1;

@end
