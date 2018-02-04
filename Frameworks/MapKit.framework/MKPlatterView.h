/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlatterView : UIView {
    NSString * _glyph;
    UIColor * _glyphColor;
    UIFont * _glyphFont;
    _MKUILabel * _glyphLabel;
    bool  _highlighted;
    UIView * _platterView;
}

@property (nonatomic, retain) NSString *glyph;
@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic, retain) UIFont *glyphFont;
@property (getter=isHighlighted, nonatomic) bool highlighted;

- (void).cxx_destruct;
- (id)glyph;
- (id)glyphColor;
- (id)glyphFont;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)setGlyph:(id)arg1;
- (void)setGlyphColor:(id)arg1;
- (void)setGlyphFont:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateGlyph;

@end
