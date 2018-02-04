/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNToneKitPickerStyleProvider : NSObject <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *tonePickerCellBackgroundColor;
@property (nonatomic, readonly) UIColor *tonePickerCellHighlightedTextColor;
@property (nonatomic, readonly) UIColor *tonePickerCellTextColor;
@property (nonatomic, readonly) UIFont *tonePickerCellTextFont;
@property (nonatomic, readonly) long long tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
@property (nonatomic, readonly) UIColor *tonePickerCustomTableSeparatorColor;
@property (nonatomic, readonly) UIColor *tonePickerHeaderTextColor;
@property (nonatomic, readonly) UIFont *tonePickerHeaderTextFont;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tonePickerHeaderTextPaddingInsets;
@property (nonatomic, readonly) UIColor *tonePickerHeaderTextShadowColor;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } tonePickerHeaderTextShadowOffset;
@property (nonatomic, readonly) bool tonePickerHeaderTextShouldBeUppercase;
@property (nonatomic, readonly) long long tonePickerTableViewSeparatorStyle;
@property (nonatomic, readonly) bool tonePickerUsesOpaqueBackground;
@property (nonatomic, readonly) UIColor *vibrationPickerCellBackgroundColor;
@property (nonatomic, readonly) UIColor *vibrationPickerCellHighlightedTextColor;
@property (nonatomic, readonly) UIColor *vibrationPickerCellTextColor;
@property (nonatomic, readonly) UIFont *vibrationPickerCellTextFont;
@property (nonatomic, readonly) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
@property (nonatomic, readonly) UIColor *vibrationPickerCustomTableSeparatorColor;
@property (nonatomic, readonly) UIColor *vibrationPickerHeaderTextColor;
@property (nonatomic, readonly) UIFont *vibrationPickerHeaderTextFont;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } vibrationPickerHeaderTextPaddingInsets;
@property (nonatomic, readonly) UIColor *vibrationPickerHeaderTextShadowColor;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } vibrationPickerHeaderTextShadowOffset;
@property (nonatomic, readonly) bool vibrationPickerHeaderTextShouldBeUppercase;
@property (nonatomic, readonly) long long vibrationPickerTableViewSeparatorStyle;
@property (nonatomic, readonly) bool vibrationPickerUsesOpaqueBackground;
@property (nonatomic, readonly) bool wantsCustomTonePickerHeaderView;
@property (nonatomic, readonly) bool wantsCustomVibrationPickerHeaderView;

- (id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (id)newBackgroundViewForSelectedTonePickerCell:(bool)arg1;
- (id)newBackgroundViewForSelectedVibrationPickerCell:(bool)arg1;
- (id)tonePickerCellBackgroundColor;
- (id)tonePickerCellHighlightedTextColor;
- (id)tonePickerCellTextColor;
- (id)tonePickerCellTextFont;
- (long long)tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
- (id)tonePickerCustomTableSeparatorColor;
- (id)tonePickerHeaderTextColor;
- (id)tonePickerHeaderTextFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tonePickerHeaderTextPaddingInsets;
- (id)tonePickerHeaderTextShadowColor;
- (struct UIOffset { double x1; double x2; })tonePickerHeaderTextShadowOffset;
- (bool)tonePickerHeaderTextShouldBeUppercase;
- (long long)tonePickerTableViewSeparatorStyle;
- (bool)tonePickerUsesOpaqueBackground;
- (id)vibrationPickerCellBackgroundColor;
- (id)vibrationPickerCellHighlightedTextColor;
- (id)vibrationPickerCellTextColor;
- (id)vibrationPickerCellTextFont;
- (long long)vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
- (id)vibrationPickerCustomTableSeparatorColor;
- (id)vibrationPickerHeaderTextColor;
- (id)vibrationPickerHeaderTextFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })vibrationPickerHeaderTextPaddingInsets;
- (id)vibrationPickerHeaderTextShadowColor;
- (struct UIOffset { double x1; double x2; })vibrationPickerHeaderTextShadowOffset;
- (bool)vibrationPickerHeaderTextShouldBeUppercase;
- (long long)vibrationPickerTableViewSeparatorStyle;
- (bool)vibrationPickerUsesOpaqueBackground;
- (bool)wantsCustomTonePickerHeaderView;
- (bool)wantsCustomVibrationPickerHeaderView;

@end
