/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactSuggestionViewController : UITableViewController {
    CNPropertySuggestionAction * _action;
    UIButton * _addToContactButton;
    NSLayoutConstraint * _addToContactLeadingMargin;
    UILabel * _contentLabel;
    <CNContactSuggestionViewControllerDataSource> * _dataSource;
    UILabel * _dateLabel;
    NSLayoutConstraint * _dateTrailingMargin;
    UILabel * _fromLabel;
    NSLayoutConstraint * _fromLeadingMargin;
    UIButton * _ignoreButton;
    NSLayoutConstraint * _ignoreTrailingMargin;
    CNPropertyCell * _propertyCell;
    UILabel * _subjectLabel;
}

@property (nonatomic, retain) CNPropertySuggestionAction *action;
@property (nonatomic, retain) UIButton *addToContactButton;
@property (nonatomic, retain) NSLayoutConstraint *addToContactLeadingMargin;
@property (nonatomic, retain) UILabel *contentLabel;
@property (nonatomic, retain) <CNContactSuggestionViewControllerDataSource> *dataSource;
@property (nonatomic, retain) UILabel *dateLabel;
@property (nonatomic, retain) NSLayoutConstraint *dateTrailingMargin;
@property (nonatomic, retain) UILabel *fromLabel;
@property (nonatomic, retain) NSLayoutConstraint *fromLeadingMargin;
@property (nonatomic, retain) UIButton *ignoreButton;
@property (nonatomic, retain) NSLayoutConstraint *ignoreTrailingMargin;
@property (nonatomic, retain) CNPropertyCell *propertyCell;
@property (nonatomic, retain) UILabel *subjectLabel;

+ (id)viewControllerWithDataSource:(id)arg1;

- (void).cxx_destruct;
- (id)action;
- (void)addToContact:(id)arg1;
- (id)addToContactButton;
- (id)addToContactLeadingMargin;
- (id)contentLabel;
- (id)dataSource;
- (id)dateLabel;
- (id)dateTrailingMargin;
- (id)fromLabel;
- (id)fromLeadingMargin;
- (void)ignore:(id)arg1;
- (id)ignoreButton;
- (id)ignoreTrailingMargin;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)propertyCell;
- (bool)sectionAtIndexContainsAddAndIgnoreControls:(unsigned long long)arg1;
- (void)setAction:(id)arg1;
- (void)setAddToContactButton:(id)arg1;
- (void)setAddToContactLeadingMargin:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setDateTrailingMargin:(id)arg1;
- (void)setFromLabel:(id)arg1;
- (void)setFromLeadingMargin:(id)arg1;
- (void)setIgnoreButton:(id)arg1;
- (void)setIgnoreTrailingMargin:(id)arg1;
- (void)setPropertyCell:(id)arg1;
- (void)setSubjectLabel:(id)arg1;
- (bool)shouldShowAddIgnoreControls;
- (bool)shouldShowPreview;
- (void)showSource:(id)arg1;
- (id)subjectLabel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updatePreview;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
