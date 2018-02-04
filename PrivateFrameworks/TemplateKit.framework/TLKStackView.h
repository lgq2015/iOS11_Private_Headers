/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKStackView : NUIContainerStackView {
    bool  _flipsToVerticalAxisForAccessibilityContentSizes;
    bool  _isForcedToBeVertical;
}

@property (nonatomic) bool flipsToVerticalAxisForAccessibilityContentSizes;
@property bool isForcedToBeVertical;

- (void)addArrangedSubview:(id)arg1;
- (bool)flipsToVerticalAxisForAccessibilityContentSizes;
- (bool)isForcedToBeVertical;
- (void)setAlignment:(long long)arg1;
- (void)setAxis:(long long)arg1;
- (void)setFlipsToVerticalAxisForAccessibilityContentSizes:(bool)arg1;
- (void)setIsForcedToBeVertical:(bool)arg1;

@end
