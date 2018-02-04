/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKNumericSuggestionButton : PKNumericBorderButton {
    PKNumericSuggestion * _suggestion;
    UIColor * _textColor;
}

@property (nonatomic, retain) PKNumericSuggestion *suggestion;
@property (nonatomic, copy) UIColor *textColor;

+ (id)buttonWithSuggestion:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)setHighlighted:(bool)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)suggestion;
- (id)textColor;

@end
