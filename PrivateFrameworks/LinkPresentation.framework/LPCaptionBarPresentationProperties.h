/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCaptionBarPresentationProperties : NSObject {
    LPCaptionRowPresentationProperties * _aboveTop;
    LPCaptionRowPresentationProperties * _belowBottom;
    LPImage * _belowLeadingIcon;
    UIColor * _belowLeadingIconMaskColor;
    LPCaptionRowPresentationProperties * _bottom;
    long long  _leadingAccessoryType;
    LPImage * _leadingIcon;
    UIColor * _leadingIconMaskColor;
    LPCaptionRowPresentationProperties * _top;
    long long  _trailingAccessoryType;
    LPImage * _trailingIcon;
    UIColor * _trailingIconMaskColor;
}

@property (nonatomic, readonly, retain) LPCaptionRowPresentationProperties *aboveTop;
@property (nonatomic, readonly, retain) LPCaptionRowPresentationProperties *belowBottom;
@property (nonatomic, retain) LPImage *belowLeadingIcon;
@property (nonatomic, retain) UIColor *belowLeadingIconMaskColor;
@property (nonatomic, readonly, retain) LPCaptionRowPresentationProperties *bottom;
@property (nonatomic) long long leadingAccessoryType;
@property (nonatomic, retain) LPImage *leadingIcon;
@property (nonatomic, retain) UIColor *leadingIconMaskColor;
@property (nonatomic, readonly, retain) LPCaptionRowPresentationProperties *top;
@property (nonatomic) long long trailingAccessoryType;
@property (nonatomic, retain) LPImage *trailingIcon;
@property (nonatomic, retain) UIColor *trailingIconMaskColor;

- (void).cxx_destruct;
- (id)aboveTop;
- (id)belowBottom;
- (id)belowLeadingIcon;
- (id)belowLeadingIconMaskColor;
- (id)belowLeftIcon;
- (id)belowLeftIconMaskColor;
- (id)belowRightIcon;
- (id)belowRightIconMaskColor;
- (id)bottom;
- (bool)hasAnyContent;
- (id)init;
- (long long)leadingAccessoryType;
- (id)leadingIcon;
- (id)leadingIconMaskColor;
- (long long)leftAccessoryType;
- (id)leftIcon;
- (id)leftIconMaskColor;
- (long long)rightAccessoryType;
- (id)rightIcon;
- (id)rightIconMaskColor;
- (void)setBelowLeadingIcon:(id)arg1;
- (void)setBelowLeadingIconMaskColor:(id)arg1;
- (void)setLeadingAccessoryType:(long long)arg1;
- (void)setLeadingIcon:(id)arg1;
- (void)setLeadingIconMaskColor:(id)arg1;
- (void)setTrailingAccessoryType:(long long)arg1;
- (void)setTrailingIcon:(id)arg1;
- (void)setTrailingIconMaskColor:(id)arg1;
- (id)top;
- (long long)trailingAccessoryType;
- (id)trailingIcon;
- (id)trailingIconMaskColor;

@end
