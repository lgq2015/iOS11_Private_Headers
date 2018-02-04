/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPNSBundleResourceRequest : NSObject <TSPDocumentResourceBundleProvider, TSUResourceRequest> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    struct { 
        unsigned int didBeginAccessingResources : 1; 
        unsigned int resourcesAvailable : 1; 
    }  _accessQueue_flags;
    NSError * _accessQueue_resourceAccessError;
    NSBundle * _bundle;
    NSProgress * _progress;
    NSBundleResourceRequest * _resourceRequest;
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
- (id)bundle;
- (void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)description;
- (unsigned long long)estimatedDownloadSize;
- (id)init;
- (id)initWithTags:(id)arg1 bundle:(id)arg2;
- (id)initWithTags:(id)arg1 preinstalledTags:(id)arg2 bundle:(id)arg3;
- (void)performResourceAccessAsynchronouslyUsingQueue:(id)arg1 block:(id /* block */)arg2;
- (void)performResourceAccessUsingQueue:(id)arg1 block:(id /* block */)arg2;
- (id)progress;
- (id)tags;

@end
