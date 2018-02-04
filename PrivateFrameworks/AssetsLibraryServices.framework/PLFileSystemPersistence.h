/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLFileSystemPersistence : NSObject {
    NSObject<OS_dispatch_queue> * _writerQueue;
}

+ (id)filesystemPersistenceBatchItemForFileAtURL:(id)arg1;
+ (void)performBlockOnWriterQueue:(id /* block */)arg1;
+ (void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)persistMetadata:(id)arg1 fileURL:(id)arg2;
+ (void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (id)persistedAttributesForFileAtURL:(id)arg1;
+ (id)persistedAttributesForFileAtURL:(id)arg1 exists:(bool*)arg2;
+ (id)sharedInstance;

- (void)_backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2;
- (void)_performOnWriterQueueWithIdentifier:(const char *)arg1 block:(id /* block */)arg2;
- (void)dealloc;
- (id)init;

@end
