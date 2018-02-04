/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
 */

@interface NMBUIMediaTableCell : PSSwitchTableCell {
    UIStackView * _accessoryStackView;
    UIButton * _errorButton;
}

+ (struct CGSize { double x1; double x2; })artworkSize;
+ (long long)cellStyle;
+ (double)defaultCellHeight;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end
