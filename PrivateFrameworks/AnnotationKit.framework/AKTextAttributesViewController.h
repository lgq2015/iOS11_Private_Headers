/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKTextAttributesViewController : UITableViewController <AKFontChooserUserInterfaceItem, AKTextAttributesUserInterfaceItem> {
    UITableViewCell * _alignmentTableCell;
    AKController * _controller;
    id  _currentAlignment;
    UIColor * _currentFontColor;
    NSString * _currentFontFamilyName;
    NSNumber * _currentFontSize;
    id  _currentStyle;
    AKFontChooserUIItemDelegate * _fontUIItemDelegate;
    long long  _lastActionID;
    id  _lastActionValue;
    AKFontListController * _presetFontController;
    UITableViewCell * _sizeTableCell;
    AKTextAttributesUIItemDelegate * _textAttributesUIItemDelegate;
}

@property (nonatomic, retain) UITableViewCell *alignmentTableCell;
@property (nonatomic) AKController *controller;
@property (nonatomic) id currentAlignment;
@property (nonatomic, retain) UIColor *currentFontColor;
@property (nonatomic, retain) NSString *currentFontFamilyName;
@property (nonatomic, retain) NSNumber *currentFontSize;
@property (nonatomic) id currentStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AKFontChooserUIItemDelegate *fontUIItemDelegate;
@property (readonly) unsigned long long hash;
@property long long lastActionID;
@property (retain) id lastActionValue;
@property (nonatomic, retain) AKFontListController *presetFontController;
@property (nonatomic, retain) UITableViewCell *sizeTableCell;
@property (readonly) Class superclass;
@property (nonatomic, retain) AKTextAttributesUIItemDelegate *textAttributesUIItemDelegate;

+ (id)fontSizeNumberFormatter;

- (void).cxx_destruct;
- (void)_alignmentSegmentChanged:(id)arg1;
- (void)_commonInit;
- (void)_sendFontAction;
- (void)_sendTextAttributesAction;
- (void)_sizeStepperValueChanged:(id)arg1;
- (void)_styleSegmentChanged:(id)arg1;
- (id)alignmentTableCell;
- (id)controller;
- (id)convertFont:(id)arg1;
- (id)convertTextAttributes:(id)arg1;
- (id)createRowAlignmentCell;
- (id)createRowFontSizeCell;
- (id)currentAlignment;
- (id)currentFontColor;
- (id)currentFontFamilyName;
- (id)currentFontSize;
- (id)currentStyle;
- (void)didSelectFont:(id)arg1;
- (id)fontUIItemDelegate;
- (id)initWithController:(id)arg1;
- (long long)lastActionID;
- (id)lastActionValue;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)presetFontController;
- (void)setAlignmentTableCell:(id)arg1;
- (void)setController:(id)arg1;
- (void)setCurrentAlignment:(id)arg1;
- (void)setCurrentFontColor:(id)arg1;
- (void)setCurrentFontFamilyName:(id)arg1;
- (void)setCurrentFontSize:(id)arg1;
- (void)setCurrentStyle:(id)arg1;
- (void)setFontUIItemDelegate:(id)arg1;
- (void)setLastActionID:(long long)arg1;
- (void)setLastActionValue:(id)arg1;
- (void)setPresetFontController:(id)arg1;
- (void)setSizeTableCell:(id)arg1;
- (void)setTextAttributesUIItemDelegate:(id)arg1;
- (id)sizeTableCell;
- (void)syncFontsToUI:(id)arg1;
- (void)syncTextAttributesToUI:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)textAttributesUIItemDelegate;
- (bool)validateUserInterfaceItems;
- (void)viewDidLoad;

@end
