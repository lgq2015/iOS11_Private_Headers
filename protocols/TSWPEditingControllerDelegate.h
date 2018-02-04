/* made by EzioChiu.
 */

@protocol TSWPEditingControllerDelegate <NSObject>

@optional

- (void)didSetTappedSelectionWithWPEditor:(TSWPEditingController *)arg1 onWPRep:(TSWPRep *)arg2;
- (bool)disallowEditingOfTextStringWithStorage:(TSWPStorage *)arg1;
- (void)editingController:(TSWPEditingController *)arg1 willDeleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)editorAllowsCaret;
- (bool)editorAllowsEditMenu;
- (bool)editorAllowsHyperlinkInteraction;
- (bool)editorAllowsKeyboard;
- (bool)editorAllowsListInteraction;
- (bool)editorAllowsMagnifier;
- (bool)editorAllowsParagraphMode;
- (bool)editorAllowsRubyInteraction;
- (bool)editorShouldAlwaysBeInParagraphMode;
- (void)filterPasteboardTextStorages:(NSArray *)arg1 forTargetStorage:(TSWPStorage *)arg2;
- (UIView *)formatBarAccessoryView;
- (void)knobTrackingDidBegin;
- (void)knobTrackingDidEnd;
- (void)showCustomEditMenuForStorage:(TSWPStorage *)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (<TSWPStyleProvider> *)styleProviderForStorage:(TSWPStorage *)arg1;
- (UIViewController *)viewControllerForPresenting;
- (bool)willChangeContentOffsetIfKeyboardHidden;

@end
