/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageManagerRequest : NSObject {
    PLCPLDownloadContext * _CPLDownloadContext;
    bool  _CPLDownloadDegraded;
    NSObject<OS_dispatch_group> * _CPLDownloadWaitGroup;
    <_PLImageLoadingAsset> * _asset;
    NSString * _assetUUID;
    PLImageFormat * _bestFormatIssuedSoFar;
    id /* block */  _cancellationHandler;
    bool  _cancelled;
    long long  _cloudSharedAssetPlaceholderKind;
    double  _creationTime;
    double  _creationTimeInterval;
    NSString * _debugFilename;
    id  _domain;
    bool  _finalResultSubmitted;
    bool  _isCloudSharedAsset;
    bool  _isPartOfBurst;
    PHImageManagerRequest * _nextRequest;
    long long  _originalImageOrientation;
    NSString * _pathForAdjustmentFile;
    unsigned long long  _phase;
    int  _registrationRefCount;
    int  _requestID;
    PLPreheatItem * _transientPreheatlItem;
}

@property (retain) PLCPLDownloadContext *CPLDownloadContext;
@property bool CPLDownloadDegraded;
@property (retain) NSObject<OS_dispatch_group> *CPLDownloadWaitGroup;
@property (nonatomic, readonly) <_PLImageLoadingAsset> *asset;
@property (nonatomic, readonly) NSString *assetUUID;
@property (nonatomic, retain) PLImageFormat *bestFormatIssuedSoFar;
@property (copy) id /* block */ cancellationHandler;
@property (nonatomic, readonly) long long cloudSharedAssetPlaceholderKind;
@property (nonatomic, readonly) double creationTime;
@property (nonatomic, readonly) double creationTimeInterval;
@property (nonatomic, readonly) NSString *debugFilename;
@property (nonatomic, readonly) id domain;
@property (nonatomic) bool finalResultSubmitted;
@property (nonatomic, readonly) bool isCloudSharedAsset;
@property (nonatomic, readonly) bool isPartOfBurst;
@property (nonatomic, readonly) bool isVideo;
@property (retain) PHImageManagerRequest *nextRequest;
@property (nonatomic, readonly) NSString *pathForAdjustmentFile;
@property (nonatomic) unsigned long long phase;
@property (nonatomic, readonly) int registrationRefCount;
@property (nonatomic, readonly) int requestID;
@property (retain) PLPreheatItem *transientPreheatlItem;

+ (int)nextRequestID;

- (void).cxx_destruct;
- (id)CPLDownloadContext;
- (bool)CPLDownloadDegraded;
- (id)CPLDownloadWaitGroup;
- (id)asset;
- (id)assetUUID;
- (bool)atomicDecrementRegistrationRefCountIfOne;
- (bool)atomicIncrementRegistrationRefCountIfZero;
- (id)bestFormatIssuedSoFar;
- (id /* block */)cancellationHandler;
- (void)clearResultHandler;
- (void)cloneIDAndResultHandlerFromRequest:(id)arg1;
- (long long)cloudSharedAssetPlaceholderKind;
- (double)creationTime;
- (double)creationTimeInterval;
- (id)debugFilename;
- (int)decrementRegistrationRefCount;
- (id)domain;
- (bool)finalResultSubmitted;
- (int)incrementRegistrationRefCount;
- (id)init;
- (id)initRequestWithAsset:(id)arg1 domain:(id)arg2;
- (id)initRequestWithID:(int)arg1 asset:(id)arg2 domain:(id)arg3;
- (id)initWithRequestID:(int)arg1;
- (bool)isCancelled;
- (bool)isCloudSharedAsset;
- (bool)isPartOfBurst;
- (bool)isVideo;
- (id)nextRequest;
- (long long)originalImageOrientation;
- (id)pathForAdjustmentFile;
- (unsigned long long)phase;
- (int)registrationRefCount;
- (int)requestID;
- (void)setBestFormatIssuedSoFar:(id)arg1;
- (void)setCPLDownloadContext:(id)arg1;
- (void)setCPLDownloadDegraded:(bool)arg1;
- (void)setCPLDownloadWaitGroup:(id)arg1;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setFinalResultSubmitted:(bool)arg1;
- (void)setNextRequest:(id)arg1;
- (void)setPhase:(unsigned long long)arg1;
- (void)setTransientPreheatlItem:(id)arg1;
- (id)transientPreheatlItem;

@end
