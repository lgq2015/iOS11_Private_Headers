/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKOptionPickerCell : UIPickerContentView {
    bool  _disabled;
}

@property (nonatomic) bool disabled;

- (bool)_isSelectable;
- (bool)disabled;
- (id)init;
- (id)initWithOptionItem:(const struct OptionItem { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; bool x2; bool x3; bool x4; int x5; }*)arg1;
- (void)setDisabled:(bool)arg1;

@end
