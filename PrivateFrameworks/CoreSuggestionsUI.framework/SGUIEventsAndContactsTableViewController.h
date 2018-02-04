/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGUIEventsAndContactsTableViewController : UITableViewController <SGUIAddAllTableViewCellDelegate, SGUISuggestionTableViewCellDelegate, UIPopoverPresentationControllerDelegate> {
    SGUISuggestionConfirmationController * _confirmationController;
    <SGUIEventsAndContactsTableViewControllerDelegate> * _delegate;
    id  _presentedSuggestion;
    NSMutableArray * _realtimeContacts;
    NSMutableArray * _realtimeEvents;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SGUIEventsAndContactsTableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneWithSuggestion:(id)arg1;
- (void)_removeSuggestion:(id)arg1;
- (void)addAllTableViewCellDidTapAddAll:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithRealtimeEvents:(id)arg1 realtimeContacts:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (void)suggestionCell:(id)arg1 didTapConfirmForSuggestion:(id)arg2;
- (void)suggestionCell:(id)arg1 didTapIgnoreForSuggestion:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
