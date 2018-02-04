/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPRenderingExporter : TSARenderingExporter {
    bool  mDidLimitPageLayout;
    TPPdfHyperlinkController * mHyperlinkController;
    long long  mLastPageIndexForLayout;
    unsigned long long  mPageCount;
    unsigned long long  mPageIndex;
}

@property (nonatomic, readonly) bool didLimitPageLayout;
@property (nonatomic) long long lastPageIndexForLayout;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRect;
- (id)currentInfos;
- (bool)didLimitPageLayout;
- (void)finalizeContext:(struct CGContext { }*)arg1;
- (bool)incrementPage;
- (id)initWithDocumentRoot:(id)arg1;
- (long long)lastPageIndexForLayout;
- (unsigned long long)pageCount;
- (bool)preparePage:(unsigned long long)arg1;
- (double)progressForCurrentPage;
- (void)setLastPageIndexForLayout:(long long)arg1;
- (void)setup;
- (void)teardown;
- (double)totalProgess;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledClipRect;

@end
