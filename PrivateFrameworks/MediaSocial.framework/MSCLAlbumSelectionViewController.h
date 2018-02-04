/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAlbumSelectionViewController : SKUIViewController <SKUIArtworkRequestDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _albumItems;
    NSString * _headerText;
    bool  _loading;
    UIImage * _placeholderImage;
    SKUIResourceLoader * _resourceLoader;
    long long  _selectedItemIndex;
    id /* block */  _selectionBlock;
    UITableView * _tableView;
}

@property (nonatomic, copy) NSArray *albumItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *headerText;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic) long long selectedItemIndex;
@property (nonatomic, copy) id /* block */ selectionBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_imageDataConsumer;
- (id)_imageForItemIndex:(long long)arg1;
- (id)_placeholderImage;
- (id)_resourceLoader;
- (id)albumItems;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)dealloc;
- (id)headerText;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isLoading;
- (void)loadView;
- (long long)selectedItemIndex;
- (id /* block */)selectionBlock;
- (void)setAlbumItems:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setSelectedItemIndex:(long long)arg1;
- (void)setSelectionBlock:(id /* block */)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
