/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusEffectSettings : NSObject <NSCoding, NSCopying> {
    bool  _blurEnabled;
    long long  _blurStyle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentRotation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentTranslation;
    double  _cornerRadius;
    double  _focusedSizeIncrease;
    UIColor * _highlightColor;
    double  _highlightScale;
    bool  _shadowEnabled;
    double  _zPerspective;
}

@property (nonatomic, readonly) bool _hasRotation;
@property (nonatomic, readonly) bool _hasTranslation;
@property (nonatomic, readonly) UIMotionEffectGroup *_motionEffectGroup;
@property (nonatomic) bool blurEnabled;
@property (nonatomic) long long blurStyle;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentRotation;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentTranslation;
@property (nonatomic) double cornerRadius;
@property (getter=_focusedSizeIncrease, setter=_setFocusedSizeIncrease:, nonatomic) double focusedSizeIncrease;
@property (nonatomic, retain) UIColor *highlightColor;
@property (getter=_highlightScale, setter=_setHighlightScale:, nonatomic) double highlightScale;
@property (nonatomic) bool shadowEnabled;
@property (getter=_zPerspective, setter=_setZPerspective:, nonatomic) double zPerspective;

+ (id)settingsWithPrivateStyle:(long long)arg1;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_focusDirectionFromDictionary:(id)arg1;
- (double)_focusScaleFactorForSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_focusedSizeIncrease;
- (bool)_hasRotation;
- (bool)_hasTranslation;
- (double)_highlightScale;
- (id)_motionEffectGroup;
- (void)_setFocusedSizeIncrease:(double)arg1;
- (void)_setHighlightScale:(double)arg1;
- (void)_setZPerspective:(double)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_transformForViewWithSize:(struct CGSize { double x1; double x2; })arg1 focusDirection:(struct CGPoint { double x1; double x2; })arg2;
- (double)_zPerspective;
- (bool)blurEnabled;
- (long long)blurStyle;
- (struct CGPoint { double x1; double x2; })contentRotation;
- (struct CGPoint { double x1; double x2; })contentTranslation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)highlightColor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setBlurEnabled:(bool)arg1;
- (void)setBlurStyle:(long long)arg1;
- (void)setContentRotation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setShadowEnabled:(bool)arg1;
- (bool)shadowEnabled;

@end
