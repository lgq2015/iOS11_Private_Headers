/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest

@property (nonatomic) double foregroundAlpha;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (getter=isLegacy, nonatomic) bool legacy;
@property (nonatomic) long long legibilityStyle;
@property (nonatomic, retain) NSNumber *overrideHeight;
@property (nonatomic) long long style;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setForegroundAlpha:(double)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setLegacy:(bool)arg1;
- (void)setLegibilityStyle:(long long)arg1;
- (void)setOverrideHeight:(id)arg1;
- (void)setStyle:(long long)arg1;

@end