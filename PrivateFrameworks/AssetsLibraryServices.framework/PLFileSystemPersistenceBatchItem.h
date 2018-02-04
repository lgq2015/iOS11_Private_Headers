/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLFileSystemPersistenceBatchItem : NSObject {
    NSMutableDictionary * _attributes;
    NSURL * _fileURL;
}

@property (nonatomic, retain) NSMutableDictionary *attributes;
@property (nonatomic, readonly, retain) NSURL *fileURL;

- (id)attributes;
- (void)dealloc;
- (id)description;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1;
- (void)persist;
- (void)setAttributes:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setInt32:(int)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setUInt16:(unsigned short)arg1 forKey:(id)arg2;
- (void)setUInt64:(unsigned long long)arg1 forKey:(id)arg2;
- (void)setUUIDString:(id)arg1 forKey:(id)arg2;

@end
