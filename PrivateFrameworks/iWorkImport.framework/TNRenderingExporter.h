/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNRenderingExporter : TSARenderingExporter {
    bool  _renderingAllSheets;
    NSMutableArray * mCanvasBasedSheets;
    TNPdfHyperlinkController * mHyperlinkController;
    TNPageController * mPageController;
    unsigned long long  mPageIndex;
    unsigned long long  mSheetIndex;
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__first_; 
        } __end_cap_; 
    }  mSheetPageCountArray;
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__first_; 
        } __end_cap_; 
    }  mSheetPageStartArray;
    unsigned long long  mTotalPagesCount;
}

@property (getter=isRenderingAllSheets, nonatomic) bool renderingAllSheets;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRect;
- (id)currentInfos;
- (void)dealloc;
- (void)drawAllPagesWithContext:(struct CGContext { }*)arg1 returnSuccess:(bool*)arg2;
- (bool)drawCurrentPageInContext:(struct CGContext { }*)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 createPage:(bool)arg4;
- (void)drawCurrentPageWithContext:(struct CGContext { }*)arg1 returnSuccess:(bool*)arg2;
- (unsigned long long)inSheetPageIndexForPage:(unsigned long long)arg1;
- (bool)incrementPage;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isPageInPortraitOrientation:(unsigned long long)arg1;
- (bool)isRenderingAllSheets;
- (unsigned long long)numberOfCanvasBasedSheets;
- (id)p_activeSheet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_boundsRectForFirstPage;
- (id)p_canvasBasedSheets;
- (bool)p_isActiveSheetForm;
- (struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; })p_pageCountArray;
- (struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; })p_pageStartArray;
- (id)pageController;
- (unsigned long long)pageCount;
- (long long)pageIndexFromQuickLookSheet:(id)arg1;
- (bool)preparePage:(unsigned long long)arg1;
- (double)progressForCurrentPage;
- (id)quickLookSheets;
- (void)setRenderingAllSheets:(bool)arg1;
- (void)setSheetIndex:(unsigned long long)arg1 andPageIndex:(unsigned long long)arg2;
- (void)setup;
- (unsigned long long)sheetIndexForPage:(unsigned long long)arg1;
- (void)teardown;
- (double)totalProgess;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledClipRect;

@end
