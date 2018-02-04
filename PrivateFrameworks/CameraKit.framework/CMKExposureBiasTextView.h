/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKExposureBiasTextView : CMKBadgeTextView {
    NSString * __lastText;
    float  _exposureBias;
}

@property (nonatomic, retain) NSString *_lastText;
@property (nonatomic) float exposureBias;

- (void).cxx_destruct;
- (id)_lastText;
- (id)_text;
- (id)_textAttributes;
- (id)_textForExposureBias:(float)arg1;
- (double)_textHorizontalInset;
- (double)_textHorizontalKerningOffset;
- (struct CGSize { double x1; double x2; })_textSize;
- (double)_textVerticalInset;
- (float)exposureBias;
- (void)setExposureBias:(float)arg1;
- (void)set_lastText:(id)arg1;

@end
