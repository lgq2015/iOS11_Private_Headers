/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEndOfArticlePublisherViewController : UIViewController <NUViewControllerEndOfArticleProviding> {
    NUCanvas * _canvas;
    NUANFEndOfArticlePublisherDataProvider * _dataProvider;
    NUFeedViewController * _feedViewController;
    NUViewNode * _hairlineViewNode;
    NSObject<OS_dispatch_group> * _loadLayoutGroup;
    NUViewNode * _publisherNameButtonNode;
    NUViewNode * _titleLabelNode;
    <NUViewControllerEndOfArticleProvidingDelegate> * delegate;
    bool  isVisible;
}

@property (nonatomic, readonly) NUCanvas *canvas;
@property (nonatomic, readonly) NUANFEndOfArticlePublisherDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NUViewControllerEndOfArticleProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUFeedViewController *feedViewController;
@property (nonatomic, readonly) NUViewNode *hairlineViewNode;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isVisible;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *loadLayoutGroup;
@property (nonatomic, readonly) NUViewNode *publisherNameButtonNode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NUViewNode *titleLabelNode;

- (void).cxx_destruct;
- (id)buildCanvasForPublisherOperationResult:(id)arg1 andScale:(double)arg2 andSettings:(id)arg3;
- (id)canvas;
- (id)dataProvider;
- (id)delegate;
- (void)doMoreFromPublisher:(id)arg1;
- (id)feedViewController;
- (id)hairlineViewNode;
- (id)initWithDataProvider:(id)arg1;
- (bool)isVisible;
- (id)loadLayoutGroup;
- (void)loadLayoutWithLoadGroup:(id)arg1 andArticle:(id)arg2 andSettings:(id)arg3;
- (id)publisherNameButtonNode;
- (double)sectionItemHeightFor:(double)arg1;
- (id)sectionItemViewController;
- (void)setDelegate:(id)arg1;
- (void)setIsVisible:(bool)arg1;
- (id)titleLabelNode;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)whenLoaded:(id /* block */)arg1;

@end
