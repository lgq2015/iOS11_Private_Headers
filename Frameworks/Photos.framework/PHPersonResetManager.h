/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPersonResetManager : NSObject {
    unsigned long long  _batchSize;
    PHPhotoLibrary * _library;
    id /* block */  _progressHandler;
    bool  _requiresPhotoAnalysisReset;
    NSOperationQueue * _resetOperationQueue;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) bool requiresPhotoAnalysisReset;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (id /* block */)progressHandler;
- (bool)requiresPhotoAnalysisReset;
- (void)resetPersons:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetPersonsWithCompletionHandler:(id /* block */)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setRequiresPhotoAnalysisReset:(bool)arg1;

@end
