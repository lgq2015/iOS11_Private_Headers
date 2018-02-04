/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSQLiteConnectionConfiguration : NSObject <NSCopying> {
    NSString * _basePath;
    NSString * _databaseName;
}

@property (nonatomic, copy) NSString *basePath;
@property (nonatomic, readonly) const char *databaseFileSystemPath;
@property (nonatomic, copy) NSString *databaseName;
@property (nonatomic, readonly) NSString *databasePath;

- (void).cxx_destruct;
- (id)_databasePathWithDatabaseName:(id)arg1;
- (id)basePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const char *)databaseFileSystemPath;
- (id)databaseName;
- (id)databasePath;
- (void)setBasePath:(id)arg1;
- (void)setDatabaseName:(id)arg1;

@end
