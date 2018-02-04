/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNLinkedCardsCell : CNLabeledCell {
    <CNPropertyCellDelegate> * _delegate;
    UILabel * _nameLabel;
    UILabel * _sourceLabel;
}

@property (nonatomic) <CNPropertyCellDelegate> *delegate;
@property (nonatomic, readonly) UILabel *nameLabel;
@property (nonatomic, readonly) UILabel *sourceLabel;

+ (bool)wantsChevron;

- (void).cxx_destruct;
- (id)delegate;
- (id)labelView;
- (id)nameLabel;
- (void)performDefaultAction;
- (void)setCardGroupItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldPerformDefaultAction;
- (id)sourceLabel;
- (void)updateConstraints;
- (id)valueView;

@end
