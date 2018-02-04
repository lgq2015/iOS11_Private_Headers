/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAssetStore : NSObject {
    NSString * _directoryPath;
    NSMutableDictionary * _fileURLsByKey;
    NSString * _preferredExtension;
}

@property (nonatomic, copy) NSString *directoryPath;
@property (nonatomic, copy) NSMutableDictionary *fileURLsByKey;
@property (nonatomic, copy) NSString *preferredExtension;

- (void).cxx_destruct;
- (id)_filePathForKey:(id)arg1;
- (id)_keyForFileName:(id)arg1;
- (unsigned long long)_sizeOfFileAtURL:(id)arg1;
- (id)allKeys;
- (id)copyData:(id)arg1 withKey:(id)arg2;
- (id)copyFileAtPath:(id)arg1 withKey:(id)arg2;
- (id)directoryPath;
- (id)filePathForKey:(id)arg1;
- (id)fileURLForKey:(id)arg1;
- (id)fileURLsByKey;
- (id)initWithDirectoryAtPath:(id)arg1 preferredAssetPathExtension:(id)arg2;
- (id)moveFileAtPath:(id)arg1 withKey:(id)arg2;
- (id)preferredExtension;
- (bool)removeAllFiles;
- (bool)removeFileWithKey:(id)arg1;
- (void)setDirectoryPath:(id)arg1;
- (void)setFileURLsByKey:(id)arg1;
- (void)setPreferredExtension:(id)arg1;
- (unsigned long long)sizeOfFileForKey:(id)arg1;
- (unsigned long long)storeSize;

@end
