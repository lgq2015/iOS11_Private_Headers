/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSARenderingExporter : NSObject <TSKRenderingExporter> {
    TSDBitmapRenderingQualityInfo * mBitmapRenderingQualityInfo;
    TSADocumentRoot * mDocumentRoot;
    bool  mDoesDrawAllPages;
    TSDImager * mImager;
    NSObject<OS_dispatch_queue> * mImagerAccessLock;
    bool  mIsCancelled;
    bool  mIsQuit;
    bool  mPaginate;
    TSUProgressContext * mProgressContext;
    NSObject<TSARenderingExporterDelegate> * mRenderingExporterDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) TSUProgressContext *progressContext;
@property (readonly) Class superclass;

- (id)bitmapRenderingQualityInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRect;
- (void)cancel;
- (id)currentInfos;
- (void)dealloc;
- (id)documentRoot;
- (void)drawAllPagesWithContext:(struct CGContext { }*)arg1 returnSuccess:(bool*)arg2;
- (bool)drawCurrentPageInContext:(struct CGContext { }*)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 createPage:(bool)arg4;
- (void)drawCurrentPageWithContext:(struct CGContext { }*)arg1 returnSuccess:(bool*)arg2;
- (bool)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (bool)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4;
- (void)finalizeContext:(struct CGContext { }*)arg1;
- (bool)incrementPage;
- (id)initWithDocumentRoot:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1 imager:(id)arg2;
- (bool)isCancelled;
- (bool)isQuit;
- (void)p_drawCurrentPageWithContext:(struct CGContext { }*)arg1 returnSuccess:(bool*)arg2 createPage:(bool)arg3;
- (bool)p_exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4;
- (id)p_renderingExporterDelegate;
- (unsigned long long)pageCount;
- (bool)paginate;
- (void)performBlockWithImager:(id /* block */)arg1;
- (bool)preparePage:(unsigned long long)arg1;
- (id)progressContext;
- (double)progressForCurrentPage;
- (void)quit;
- (bool)setInfosToCurrentPage;
- (void)setPaginate:(bool)arg1;
- (void)setProgressContext:(id)arg1;
- (void)setup;
- (void)teardown;
- (double)totalProgess;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledClipRect;
- (void)waitForRecalcToFinish;

@end
