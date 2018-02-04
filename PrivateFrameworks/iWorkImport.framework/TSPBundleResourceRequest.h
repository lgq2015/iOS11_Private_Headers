/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPBundleResourceRequest : NSObject <NSURLSessionDelegate, TSPDocumentResourceBundleProvider, TSPDocumentResourceFileURLProvider, TSPResourceLocalStrategyProvider, TSUResourceRequest> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _accessQueue_documentResourceLocalURLs;
    TSPDocumentResourceRequest * _accessQueue_documentResourceRequest;
    struct { 
        unsigned int hasDocumentResourceWithDataAssetLocalStrategy : 1; 
        unsigned int isResourcesAvailable : 1; 
        unsigned int didPerformResourceAccess : 1; 
    }  _accessQueue_flags;
    NSBundle * _bundle;
    TSPDocumentResourceCache * _documentResourceCache;
    NSSet * _documentResourceInfos;
    TSPDocumentResourceRegistry * _documentResourceRegistry;
    <TSPResourceLocalStrategyProvider> * _localStrategyProvider;
    NSProgress * _progress;
    NSSet * _tags;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long estimatedDownloadSize;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (readonly) NSSet *tags;

- (void).cxx_destruct;
- (void)accessQueue_conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)alternateFileURLForDocumentResourceInfo:(id)arg1;
- (id)bundle;
- (void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (unsigned long long)estimatedDownloadSize;
- (id)fileURLForDocumentResourceInfo:(id)arg1;
- (id)init;
- (id)initWithDocumentResourceInfos:(id)arg1 documentResourceCache:(id)arg2 documentResourceRegistry:(id)arg3 bundle:(id)arg4;
- (id)initWithTags:(id)arg1 documentResourceCache:(id)arg2 documentResourceRegistry:(id)arg3 bundle:(id)arg4;
- (long long)localStrategyForDocumentResourceInfo:(id)arg1;
- (void)performResourceAccessAsynchronouslyUsingQueue:(id)arg1 block:(id /* block */)arg2;
- (void)performResourceAccessUsingQueue:(id)arg1 block:(id /* block */)arg2;
- (id)progress;
- (id)tags;

@end
