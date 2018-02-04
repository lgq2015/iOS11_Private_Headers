/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageImageCache : NSObject {
    UIPDFDocument * _document;
    unsigned long long  _jobCount;
    id * _jobsByPage;
    id * _jobsPrioritized;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _lookAhead;
    double  _lookAheadResolution;
    unsigned long long  _nextJobIndex;
    unsigned long long  _pageCount;
    NSOperationQueue * _renderQueue;
    int  jobsComplete;
}

@property (readonly) UIPDFDocument *document;
@property (readonly) unsigned long long lookAhead;
@property (readonly) double lookAheadResolution;
@property (readonly) unsigned long long pageCount;

- (void)addRenderJob:(id)arg1;
- (void)cacheImageOfPage:(unsigned long long)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2;
- (void)cancelPendingRenderOperations;
- (void)cancelPendingRenderOperationsForTarget:(id)arg1;
- (void)clearCache;
- (void)dealloc;
- (void)deliverImageOfPage:(unsigned long long)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 quality:(bool*)arg3 receiver:(id)arg4 selector:(SEL)arg5 info:(id)arg6;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)document;
- (id)getImageIfAvailableForPage:(unsigned long long)arg1;
- (int)getRenderQueueJobsCount;
- (id)initWithDocument:(id)arg1;
- (id)initWithDocument:(id)arg1 cacheCount:(unsigned long long)arg2 lookAhead:(unsigned long long)arg3 withLookAheadResolution:(double)arg4;
- (unsigned long long)lookAhead;
- (double)lookAheadResolution;
- (unsigned long long)pageCount;

@end
