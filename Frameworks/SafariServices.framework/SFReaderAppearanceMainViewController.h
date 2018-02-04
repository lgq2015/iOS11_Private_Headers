/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFReaderAppearanceMainViewController : _SFPopoverSizingTableViewController <SFReaderAppearanceFontSizeSelectorDelegate, SFReaderAppearanceThemeSelectorTableViewCellDelegate> {
    UIImage * _checkmarkImage;
    WBSReaderFontManager * _fontManager;
    NSDictionary * _initialReaderConfiguration;
    _SFReaderAppearanceViewController * _ownerAppearanceViewController;
    long long  _selectedFontIndex;
    NSString * _themeName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) _SFReaderAppearanceViewController *ownerAppearanceViewController;
@property (nonatomic, readonly) WBSReaderFont *selectedFont;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *themeName;

- (void).cxx_destruct;
- (bool)_canSelectRowAtIndexPath:(id)arg1;
- (void)_determineSelectedFontIndex;
- (void)_determineSelectedTheme;
- (void)_determineSelectedValues;
- (long long)_themeFromThemeName:(id)arg1;
- (id)_themeNameFromTheme:(long long)arg1;
- (id)checkmarkImage;
- (id)initWithInitialReaderConfiguration:(id)arg1 fontManager:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)ownerAppearanceViewController;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)readerAppearanceFontSizeDidDecrease:(id)arg1;
- (void)readerAppearanceFontSizeDidIncrease:(id)arg1;
- (void)readerAppearanceThemeSelectorDidChangeTheme:(id)arg1;
- (id)selectedFont;
- (void)setOwnerAppearanceViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)themeName;
- (void)viewDidLoad;

@end
