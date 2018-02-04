/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBrowserToolbar : _SFToolbar {
    UIBarButtonItem * _actionItem;
    UIBarButtonItem * _backItem;
    <_SFBrowserToolbarDelegate> * _browserDelegate;
    <_SFBrowserToolbarDataSource> * _dataSource;
    UIBarButtonItem * _forwardItem;
    UIBarButtonItem * _openInSafariItem;
}

@property (nonatomic, readonly) UIBarButtonItem *actionItem;
@property (nonatomic) <_SFBrowserToolbarDelegate> *browserDelegate;
@property (nonatomic) <_SFBrowserToolbarDataSource> *dataSource;
@property (nonatomic, readonly) double differenceBetweenWidthsOfLeadingAndTrailingItems;
@property (nonatomic, readonly) UIBarButtonItem *openInSafariItem;

- (void).cxx_destruct;
- (double)URLFieldHorizontalMargin;
- (double)_contentMargin;
- (id)_toolbarItems;
- (double)_totalWidthOfLeadingItems;
- (double)_totalWidthOfTrailingItems;
- (void)actionButtonPressed;
- (id)actionItem;
- (void)backButtonPressed;
- (id)browserDelegate;
- (id)dataSource;
- (double)differenceBetweenWidthsOfLeadingAndTrailingItems;
- (void)forwardButtonPressed;
- (bool)isMinibar;
- (void)layoutSubviews;
- (void)openInSafariButtonPressed;
- (id)openInSafariItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverPresentationRectForButtonItem:(id)arg1;
- (void)setBrowserDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)updateButtonStates;

@end
