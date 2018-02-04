/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNTabletStyleProvider : CNStyleProvider

- (int)abCellStyleForGroupsTablePlain;
- (int)abCellStyleForMembersTable;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardActionButtonImageInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cardActionButtonTitleSingleLineInsets;
- (id)cardTableCellBorderColor;
- (long long)composeModalPresentationStyle;
- (id)editorViewColor;
- (id)editorViewLargeFont;
- (id)editorViewSmallFont;
- (bool)labelPickerShouldPushCustomLabelCreator;
- (id)membersHeaderBackgroundColor;
- (bool)membersSearchBarIsInTableHeader;
- (id)personActionColor;
- (id)personActionFont;
- (double)personEditorFieldVerticalInset;
- (id)personHeaderPasteboardColor;
- (id)personHeaderShadowColor;
- (id)personLabelColor;
- (id)personLabelFont;
- (double)personLabelFontMinSize;
- (id)personValueColor;
- (id)personValueEmphasizedColor;
- (double)personValueFontMinSize;
- (id)personValueHighlightColor;
- (id)personValueImportantColor;
- (double)personViewHorizontalCellInset;
- (bool)searchControllerForceKeyboardDisplayEnabled;
- (bool)searchIsAlwaysActive;
- (long long)separatorStyleForCellStyle:(int)arg1;
- (bool)serverSearchNavigationBarHidingEnabled;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

@end