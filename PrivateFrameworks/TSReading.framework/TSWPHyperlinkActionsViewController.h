/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPHyperlinkActionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    TSWPHyperlinkField * _hyperlink;
    TSWPHyperlinkSettingsViewController * _hyperlinkSettingsViewController;
    bool  _readOnly;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSWPHyperlinkField *hyperlink;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)hyperlink;
- (id)hyperlinkSettingsViewController;
- (id)initWithHyperlink:(id)arg1 readOnly:(bool)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setHyperlink:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
