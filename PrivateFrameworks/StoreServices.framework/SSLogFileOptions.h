/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLogFileOptions : NSObject <NSCopying> {
    NSString * _directoryPath;
    NSString * _fileName;
    long long  _maxNumberOfLogFiles;
    unsigned long long  _maxSizeInBytes;
}

@property (nonatomic, copy) NSString *logDirectoryPath;
@property (nonatomic, copy) NSString *logFileBaseName;
@property (nonatomic) unsigned long long maxLogFileSize;
@property (nonatomic) long long maxNumberOfLogFiles;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)logDirectoryPath;
- (id)logFileBaseName;
- (unsigned long long)maxLogFileSize;
- (long long)maxNumberOfLogFiles;
- (void)setLogDirectoryPath:(id)arg1;
- (void)setLogFileBaseName:(id)arg1;
- (void)setMaxLogFileSize:(unsigned long long)arg1;
- (void)setMaxNumberOfLogFiles:(long long)arg1;

@end
