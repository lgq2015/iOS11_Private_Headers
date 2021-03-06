/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFileBasedKeyedDataStore : NSObject <CRKKeyedDataStoreProtocol> {
    NSURL * mDirectoryURL;
    NSFileManager * mFileManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)dataForKey:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1;
- (bool)isKeyValid:(id)arg1;
- (bool)removeDataForKey:(id)arg1 error:(id*)arg2;
- (bool)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3;

@end
