/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUPersistentCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSURL * _directoryURL;
}

@property (nonatomic, readonly) NSURL *directoryURL;

- (bool)createDirectoryAtURL:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dataForKey:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)directoryURL;
- (id)fileURLWithName:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)performAccessWithKey:(id)arg1 barrier:(bool)arg2 async:(bool)arg3 usingBlock:(id /* block */)arg4;
- (void)performAccessWithKey:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)removeAllDataAndWaitUntilDone:(bool)arg1;
- (void)removeDataForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;

@end
