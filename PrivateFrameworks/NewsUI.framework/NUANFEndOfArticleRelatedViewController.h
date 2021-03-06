/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEndOfArticleRelatedViewController : UIViewController <NUViewControllerEndOfArticleProviding> {
    NUCanvas * _canvas;
    NUANFEndOfArticleRelatedDataProvider * _dataProvider;
    NUFeedViewController * _feedViewController;
    NUViewNode * _hairlineViewNode;
    NSObject<OS_dispatch_group> * _loadLayoutGroup;
    NUViewNode * _titleLabelNode;
    NUANFEndOfArticleTopicViewController * _topicsViewController;
    <NUViewControllerEndOfArticleProvidingDelegate> * delegate;
    bool  isVisible;
}

@property (nonatomic, readonly) NUCanvas *canvas;
@property (nonatomic, readonly) NUANFEndOfArticleRelatedDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NUViewControllerEndOfArticleProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUFeedViewController *feedViewController;
@property (nonatomic, readonly) NUViewNode *hairlineViewNode;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isVisible;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *loadLayoutGroup;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NUViewNode *titleLabelNode;
@property (nonatomic, readonly) NUANFEndOfArticleTopicViewController *topicsViewController;

+ (id)titleAttributes;

- (void).cxx_destruct;
- (id)buildCanvasWithTitle:(id)arg1 withScale:(double)arg2 andSettings:(id)arg3;
- (id)canvas;
- (id)dataProvider;
- (id)delegate;
- (id)feedViewController;
- (id)hairlineViewNode;
- (id)initWithDataProvider:(id)arg1;
- (bool)isVisible;
- (id)loadLayoutGroup;
- (void)loadLayoutWithLoadGroup:(id)arg1 andSettings:(id)arg2;
- (double)sectionItemHeightFor:(double)arg1;
- (id)sectionItemViewController;
- (void)setDelegate:(id)arg1;
- (void)setIsVisible:(bool)arg1;
- (id)titleLabelNode;
- (id)topicsViewController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)whenLoaded:(id /* block */)arg1;

@end
