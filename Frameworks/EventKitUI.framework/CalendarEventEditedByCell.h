/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarEventEditedByCell : EKUIConstrainedFontsTableViewCell {
    <EKCellShortener> * _shortener;
    UILabel * _titleLabel2;
    UILabel * _valueLabel2;
    unsigned int  _valuePlaceholder;
}

@property (nonatomic, readonly, retain) UILabel *detailTextLabel2;
@property (nonatomic) <EKCellShortener> *shortener;
@property (nonatomic, readonly, retain) UILabel *textLabel2;

- (void).cxx_destruct;
- (void)_checkValueWidth;
- (void)_copyTextLabelAttributesFrom:(id)arg1 to:(id)arg2;
- (bool)detailText2IsPlaceholder;
- (bool)detailTextIsPlaceholder;
- (id)detailTextLabel2;
- (void)layoutSubviews;
- (void)setDetailText2IsPlaceholder:(bool)arg1;
- (void)setDetailTextIsPlaceholder:(bool)arg1;
- (void)setShortener:(id)arg1;
- (id)shortener;
- (id)textLabel2;

@end
