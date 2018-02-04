/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLTagListViewController : SKUIViewController <SKUIArtworkRequestDelegate, UITableViewDataSource, UITableViewDelegate> {
    SKUIResourceLoader * _artworkLoader;
    MSCLConfiguration * _configuration;
    NSArray * _defaultTagSuggestions;
    <MSCLTagListDelegate> * _delegate;
    SSVLoadURLOperation * _loadTagsOperation;
    NSArray * _matchedTagSuggestions;
    UIImage * _placeholderImage;
    UITableView * _tableView;
    NSString * _tagString;
}

@property (nonatomic, readonly) MSCLConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLTagListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeTagSuggestions;
- (id)_imageDataConsumer;
- (void)_loadThumbnailsForTags:(id)arg1 reason:(long long)arg2;
- (void)_reloadWithMatchedTags:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (id)existingTagForString:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)loadView;
- (void)reloadWithTagString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
