/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPTextExporter : NSObject <TSKExporter> {
    TPDocumentRoot * mDocumentRoot;
    bool  mIsCancelled;
    TSUProgressContext * mProgressContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSUProgressContext *progressContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (bool)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isCancelled;
- (id)progressContext;
- (void)quit;
- (void)setProgressContext:(id)arg1;
- (void)setup;

@end
