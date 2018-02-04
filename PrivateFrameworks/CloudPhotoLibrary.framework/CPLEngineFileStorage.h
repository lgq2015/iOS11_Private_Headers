/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineFileStorage : NSObject <CPLAbstractObject> {
    NSURL * _baseURL;
    NSURL * _crashMarkerURL;
    bool  _deleteImmediately;
    bool  _keepOriginals;
    NSObject<OS_dispatch_queue> * _lock;
    NSString * _logDomain;
    CPLPlatformObject * _platformObject;
    NSMutableArray * _uncommittedFiles;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deleteImmediately;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool keepOriginals;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (void)_addIdentityToUncommittedFiles:(id)arg1;
- (bool)_compactStorageIncludeOriginals:(bool)arg1 desiredFreeSpace:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)_fixupIdentity:(id)arg1 fileURL:(id)arg2 data:(id)arg3 error:(id*)arg4;
- (bool)_recoverFromCrashWithRecoveryHandler:(id /* block */)arg1 error:(id*)arg2;
- (void)_removeIdentityFromUncommittedFiles:(id)arg1;
- (id)baseURL;
- (void)checkFileSizeForIdentity:(id)arg1;
- (bool)checkIsEmpty;
- (bool)closeWithError:(id*)arg1;
- (bool)commitFileWithIdentity:(id)arg1 error:(id*)arg2;
- (bool)compactStorage:(id*)arg1;
- (bool)compactStorageIncludeOriginals:(bool)arg1 error:(id*)arg2;
- (unsigned long long)countOfUncommittedFiles;
- (bool)deleteFileWithIdentity:(id)arg1 error:(id*)arg2;
- (bool)deleteFileWithIdentity:(id)arg1 includingOriginal:(bool)arg2 error:(id*)arg3;
- (bool)deleteImmediately;
- (bool)discardAllRetainedFileURLsWithError:(id*)arg1;
- (bool)discardUncommittedFileWithIdentity:(id)arg1 error:(id*)arg2;
- (void)doRead:(id /* block */)arg1;
- (bool)doWrite:(id /* block */)arg1 error:(id*)arg2;
- (id)fileEnumerator;
- (id)fileEnumeratorIncludingPropertiesForKeys:(id)arg1 errorHandler:(id /* block */)arg2;
- (bool)hasCrashMarker;
- (bool)hasFileWithIdentity:(id)arg1;
- (id)initWithBaseURL:(id)arg1;
- (bool)keepOriginals;
- (bool)openWithRecoveryHandler:(id /* block */)arg1 error:(id*)arg2;
- (id)platformObject;
- (bool)releaseFileURL:(id)arg1 error:(id*)arg2;
- (id)retainFileURLForIdentity:(id)arg1 resourceType:(unsigned long long)arg2 error:(id*)arg3;
- (void)setDeleteImmediately:(bool)arg1;
- (void)setKeepOriginals:(bool)arg1;
- (bool)storeData:(id)arg1 identity:(id)arg2 isOriginal:(bool)arg3 needsCommit:(bool*)arg4 error:(id*)arg5;
- (bool)storeFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(bool)arg3 needsCommit:(bool*)arg4 error:(id*)arg5;
- (bool)storeUnretainedData:(id)arg1 identity:(id)arg2 isOriginal:(bool)arg3 error:(id*)arg4;
- (bool)storeUnretainedFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(bool)arg3 error:(id*)arg4;
- (bool)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long*)arg2 includeOriginals:(bool)arg3 error:(id*)arg4;

@end
