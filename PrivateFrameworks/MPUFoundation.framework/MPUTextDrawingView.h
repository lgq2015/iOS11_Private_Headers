/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUTextDrawingView : UIView {
    double  _cachedDisplayScale;
    MPUTextDrawingContext * _textDrawingContext;
}

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, retain) MPUTextDrawingContext *textDrawingContext;

- (void).cxx_destruct;
- (double)_cachedDisplayScale;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextDrawingContext:(id)arg1;
- (id)text;
- (id)textDrawingContext;
- (void)traitCollectionDidChange:(id)arg1;

@end
