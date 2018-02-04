/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLMicroBlogMentionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSObject<SLMicroBlogMentionsDelegate> * _delegate;
    NSArray * _mentions;
    NSString * _searchString;
    NSObject<SLMicroBlogSheetDelegate> * _sheetDelegate;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SLMicroBlogMentionsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_blankSurrogateProfileImage;

- (void).cxx_destruct;
- (void)chooseRow:(long long)arg1;
- (void)completeWithSelectedMention:(id)arg1;
- (id)delegate;
- (id)initWithSheetDelegate:(id)arg1;
- (void)loadView;
- (id)mentions;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMentions:(id)arg1;
- (void)setSearchString:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateMentions;

@end
