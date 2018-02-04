/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSTableCell : UITableViewCell {
    int  _alignment;
    bool  _cellEnabled;
    bool  _checked;
    UIImageView * _checkedImageView;
    PSTableCellHighlightContext * _customHighlightContext;
    bool  _forceHideDisclosureIndicator;
    NSString * _hiddenTitle;
    bool  _isCopyable;
    bool  _lazyIcon;
    NSString * _lazyIconAppID;
    bool  _lazyIconDontUnload;
    bool  _lazyIconForceSynchronous;
    NSURL * _lazyIconURL;
    UILongPressGestureRecognizer * _longTapRecognizer;
    SEL  _pAction;
    id  _pTarget;
    bool  _reusedCell;
    bool  _shouldHideTitle;
    PSSpecifier * _specifier;
    long long  _type;
    NSURLSession * _urlSession;
    id  _value;
}

@property (nonatomic) bool forceHideDisclosureIndicator;
@property (nonatomic) bool isCopyable;
@property (nonatomic, retain) UILongPressGestureRecognizer *longTapRecognizer;
@property (nonatomic) bool reusedCell;
@property (nonatomic, retain) PSSpecifier *specifier;
@property (nonatomic) long long type;

+ (Class)cellClassForSpecifier:(id)arg1;
+ (long long)cellStyle;
+ (long long)cellTypeFromString:(id)arg1;
+ (double)defaultCellHeight;
+ (id)reuseIdentifierForBasicCellTypes:(long long)arg1;
+ (id)reuseIdentifierForClassAndType:(long long)arg1;
+ (id)reuseIdentifierForSpecifier:(id)arg1;
+ (id)stringFromCellType:(long long)arg1;

- (void).cxx_destruct;
- (id)_automationID;
- (id)_checkmarkImage:(bool)arg1;
- (id)_contentString;
- (id)_copyableText;
- (id)_disclosureChevronImage:(bool)arg1;
- (void)_invalidateHighlightContext;
- (void)_updateAccessoryTypeForSpecifier:(id)arg1;
- (id)_urlSession;
- (SEL)action;
- (id)blankIcon;
- (bool)canBeChecked;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canReload;
- (SEL)cellAction;
- (bool)cellEnabled;
- (void)cellRemovedFromView;
- (id)cellTarget;
- (void)copy:(id)arg1;
- (void)dealloc;
- (bool)forceHideDisclosureIndicator;
- (void)forceSynchronousIconLoadOnNextIconLoad;
- (id)getIcon;
- (id)getLazyIcon;
- (id)getLazyIconID;
- (void)highlightCellForDuration:(double)arg1 animateUnighlight:(bool)arg2;
- (id)iconImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (bool)isChecked;
- (bool)isCopyable;
- (void)layoutSubviews;
- (id)lazyIconQueue:(id)arg1;
- (void)longPressed:(id)arg1;
- (id)longTapRecognizer;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)reloadWithSpecifier:(id)arg1 animated:(bool)arg2;
- (bool)reusedCell;
- (id)scriptingInfoWithChildren;
- (void)setAction:(SEL)arg1;
- (void)setAlignment:(int)arg1;
- (void)setCellAction:(SEL)arg1;
- (void)setCellEnabled:(bool)arg1;
- (void)setCellTarget:(id)arg1;
- (void)setChecked:(bool)arg1;
- (void)setForceHideDisclosureIndicator:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setIcon:(id)arg1;
- (void)setIsCopyable:(bool)arg1;
- (void)setLongTapRecognizer:(id)arg1;
- (void)setReusedCell:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setShouldHideTitle:(bool)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(id)arg1;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (id)specifier;
- (id)target;
- (double)textFieldOffset;
- (id)title;
- (id)titleLabel;
- (id)titleTextLabel;
- (long long)type;
- (id)value;
- (id)valueLabel;

@end
