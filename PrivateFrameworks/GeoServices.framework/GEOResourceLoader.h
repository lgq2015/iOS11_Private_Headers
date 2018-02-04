/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceLoader : NSObject <NSProgressReporting> {
    NSString * _additionalDirectoryToConsider;
    bool  _allowResumingPartialDownloads;
    GEOApplicationAuditToken * _auditToken;
    NSString * _baseURLString;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _canceled;
    id /* block */  _completionHandler;
    NSString * _directory;
    NSMapTable * _inProgressResourceDownloads;
    NSMutableArray * _loadedResources;
    unsigned long long  _maxConcurrentLoads;
    long long  _numberOfCopiesInProgress;
    long long  _numberOfDownloadsInProgress;
    GEOPowerAssertion * _powerAssertion;
    GEOReportedProgress * _progress;
    bool  _requiresWiFi;
    NSArray * _resourceInfos;
    NSMutableArray * _resourcesToLoad;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (nonatomic) bool requiresWiFi;
@property (readonly) Class superclass;

+ (Class)resourceLoadOperationClass;

- (void).cxx_destruct;
- (void)_cleanup;
- (bool)_copyResource:(id)arg1 fromPath:(id)arg2 allowCreatingHardLink:(bool)arg3 error:(id*)arg4;
- (bool)_establishHardLinkIfPossibleForResource:(id)arg1 toResource:(id)arg2 error:(id*)arg3;
- (void)_loadNextResourceFromNetwork;
- (void)_loadResourcesFromDisk;
- (void)_writeResourceToDisk:(id)arg1 withData:(id)arg2 checksum:(id)arg3 completionHandler:(id /* block */)arg4 callbackQueue:(id)arg5;
- (id)auditToken;
- (void)cancel;
- (id)initWithTargetDirectory:(id)arg1 baseURLString:(id)arg2 resources:(id)arg3 maximumConcurrentLoads:(unsigned long long)arg4 additionalDirectoryToConsider:(id)arg5;
- (id)progress;
- (bool)requiresWiFi;
- (void)setAuditToken:(id)arg1;
- (void)setRequiresWiFi:(bool)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;

@end
