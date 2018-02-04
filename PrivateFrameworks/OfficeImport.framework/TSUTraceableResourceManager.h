/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUTraceableResourceManager : NSObject {
    NSHashTable * _knownTraceableResources;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)registerTraceableResource:(id)arg1;
- (id)serializationDescription;

@end
