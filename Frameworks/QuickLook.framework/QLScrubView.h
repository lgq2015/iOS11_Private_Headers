/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLScrubView : UIView <UIGestureRecognizerDelegate> {
    double  _bottomOffset;
    <QLScrubViewDataSource> * _dataSource;
    <QLScrubViewDelegate> * _delegate;
    bool  _needsThumbLayout;
    long long  _pageCount;
    QLPageNumberView * _pageNumberLabel;
    long long  _selectedPage;
    QLThumbnailView * _selectedThumbnailView;
    double  _thumbEnd;
    double  _thumbHeight;
    double  _thumbOrigin;
    NSMutableDictionary * _thumbViews;
    double  _topOffset;
    NSMutableArray * _visibleThumbIndexes;
}

@property (nonatomic) double bottomOffset;
@property <QLScrubViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <QLScrubViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double topOffset;

+ (double)defaultWidth;

- (void).cxx_destruct;
- (void)_handleSwipAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_hidePageLabel;
- (void)_notifyPageChanged;
- (void)_removeThumbviews;
- (void)_showPageLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_thumbnailFrameForPageAtIndex:(long long)arg1;
- (void)_updatePageLabelPosition;
- (void)_updateSelectedThumbnailView;
- (double)bottomOffset;
- (id)dataSource;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (void)layoutSubviews;
- (void)longTapReceived:(id)arg1;
- (void)panReceived:(id)arg1;
- (void)reloadThumbnails;
- (void)selectPageNumber:(long long)arg1;
- (void)setBottomOffset:(double)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTopOffset:(double)arg1;
- (void)tapReceived:(id)arg1;
- (double)topOffset;

@end
