/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleExcerptView : UIView <UIScrollViewDelegate> {
    UIScrollView * _contentScrollView;
    UIView * _contentView;
    <UIScrollViewDelegate> * _delegate;
    WKWebView * _excerptWebView;
    UIView * _hairlineSeparatorView;
    UILabel * _headlineDateLabel;
    UIImageView * _headlineImageView;
    UILabel * _headlineTitleLabel;
    UIScrollView * _imageScrollView;
    NUMultiDelegate * _multiDelegate;
    NUArticleExcerptReadMoreButton * _readMoreButton;
    NUArticleExcerptTraits * _traits;
}

@property (nonatomic, readonly) UIScrollView *contentScrollView;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIScrollViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WKWebView *excerptWebView;
@property (nonatomic, readonly) UIView *hairlineSeparatorView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILabel *headlineDateLabel;
@property (nonatomic, readonly) UIImageView *headlineImageView;
@property (nonatomic, readonly) UILabel *headlineTitleLabel;
@property (nonatomic, readonly) UIScrollView *imageScrollView;
@property (nonatomic, readonly) NUMultiDelegate *multiDelegate;
@property (nonatomic, readonly) NUArticleExcerptReadMoreButton *readMoreButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) NUArticleExcerptTraits *traits;

+ (id)webViewConfiguration;

- (void).cxx_destruct;
- (id)contentScrollView;
- (id)contentView;
- (void)dealloc;
- (id)delegate;
- (id)excerptWebView;
- (id)hairlineSeparatorView;
- (id)headlineDateLabel;
- (id)headlineImageView;
- (id)headlineTitleLabel;
- (id)imageScrollView;
- (id)initWithTraits:(id)arg1;
- (void)layoutSubviews;
- (id)multiDelegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)readMoreButton;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTraits:(id)arg1;
- (id)traits;

@end
