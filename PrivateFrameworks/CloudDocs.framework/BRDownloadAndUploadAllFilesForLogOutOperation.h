/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRDownloadAndUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting> {
    id /* block */  _downloadAllFilesCompletionBlock;
    NSMutableArray * _fileCoordinators;
    NSOperationQueue * _internalQueue;
    BRGlobalProgressProxy * _progress;
    BRUploadAllFilesForLogOutOperation * _uploadOp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ downloadAllFilesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (retain) BRGlobalProgressProxy *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)downloadAllFilesCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (void)main;
- (id)progress;
- (void)setDownloadAllFilesCompletionBlock:(id /* block */)arg1;
- (void)setProgress:(id)arg1;

@end
