/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCMaterialButton : UIButton {
    NSMutableDictionary * _imageViewStyling;
    NSMutableDictionary * _styling;
}

@property (nonatomic, retain) NSMutableDictionary *imageViewStyling;
@property (nonatomic, retain) NSMutableDictionary *styling;

- (void).cxx_destruct;
- (void)_applyButtonStyling;
- (void)_applyImageViewStyling;
- (void)_applyStyling;
- (void)_setFlagsRelatedToState:(unsigned long long)arg1 to:(bool)arg2;
- (id)imageViewStyling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageViewStyling:(id)arg1;
- (void)setImageViewStyling:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSelected:(bool)arg1;
- (void)setStyling:(id)arg1;
- (void)setStyling:(id)arg1 forState:(unsigned long long)arg2;
- (id)styling;

@end
