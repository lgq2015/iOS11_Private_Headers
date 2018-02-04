/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDZIPArchivist : NSObject {
    NSObject<OS_dispatch_queue> * _unzipQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)zippedDataForPath:(id)arg1;

@end
