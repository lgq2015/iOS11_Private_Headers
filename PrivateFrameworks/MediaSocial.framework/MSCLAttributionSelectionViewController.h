/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAttributionSelectionViewController : SKUIViewController <SKUIArtworkRequestDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _authors;
    SKUIMediaSocialAuthor * _destinationAuthor;
    SKUIStyledImageDataConsumer * _imageDataConsumer;
    UIImage * _placeholderImage;
    SKUIResourceLoader * _resourceLoader;
    long long  _selectedAuthorIndex;
    id /* block */  _selectionBlock;
    UITableView * _tableView;
}

@property (nonatomic, copy) NSArray *authors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) SKUIMediaSocialAuthor *destinationAuthor;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long selectedAuthorIndex;
@property (nonatomic, copy) id /* block */ selectionBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributedTitleForAuthor:(id)arg1;
- (id)_imageDataConsumer;
- (id)_imageForAuthor:(id)arg1;
- (id)_placeholderImage;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)authors;
- (void)dealloc;
- (id)destinationAuthor;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)reloadData;
- (long long)selectedAuthorIndex;
- (id /* block */)selectionBlock;
- (void)setAuthors:(id)arg1;
- (void)setDestinationAuthor:(id)arg1;
- (void)setSelectedAuthorIndex:(long long)arg1;
- (void)setSelectionBlock:(id /* block */)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
