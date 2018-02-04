/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHUploadOperation : TSHOperation {
    bool  mBytesSentTwice;
    NSArray * mExceptPaths;
    NSMutableDictionary * mFileSizes;
    NSNumber * mSizeOfIncludedFiles;
    NSNumber * mSizeOfUploadedFiles;
    NSNumber * mSizeOfUploadingFiles;
    NSURL * mSourceURL;
    TSURetainedPointerKeyDictionary * mSubpathsForRequests;
    TSURetainedPointerKeyDictionary * mTransmittedBytesForRequests;
    NSMutableArray * mUploadedPaths;
}

- (unsigned long long)bytesTransmittedOfUploadingFiles;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)dummyPutAtPath:(id)arg1;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 source:(id)arg3 exceptPaths:(id)arg4 delegate:(id)arg5;
- (id)initWithURL:(id)arg1 source:(id)arg2 user:(id)arg3 password:(id)arg4 persistence:(unsigned long long)arg5 exceptPaths:(id)arg6 delegate:(id)arg7;
- (id)makeCollectionAtPath:(id)arg1 error:(id*)arg2;
- (void)populateFileSizes:(id)arg1;
- (id)propFindAtPath:(id)arg1;
- (id)remoteURLForSourcePath:(id)arg1;
- (void)requestQueue:(id)arg1 didCompleteRequest:(id)arg2;
- (void)requestQueue:(id)arg1 willStartRequest:(id)arg2;
- (bool)shouldUploadPath:(id)arg1;
- (id)sizeOfIncludedFiles;
- (id)sizeOfUploadedFiles;
- (id)sizeOfUploadingFiles;
- (id)sourceURL;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;
- (id)uploadFileAtPath:(id)arg1 error:(id*)arg2;
- (bool)uploadResource:(id)arg1 after:(id)arg2 error:(id*)arg3;
- (void)uploadResources;
- (bool)uploadSubpath:(id)arg1 after:(id)arg2 error:(id*)arg3;

@end
