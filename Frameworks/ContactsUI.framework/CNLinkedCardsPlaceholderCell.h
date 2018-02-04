/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNLinkedCardsPlaceholderCell : CNPropertyPlaceholderCell {
    <CNPropertyCellDelegate> * _delegate;
}

@property (nonatomic) <CNPropertyCellDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)performDefaultAction;
- (void)setDelegate:(id)arg1;

@end
