/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFProtectedSQLiteConnection : MFSQLiteConnection {
    bool  _attached;
    NSString * _vfsName;
}

@property (nonatomic, readonly) bool isProtectedDatabaseAttached;

- (const char *)_vfsModuleName;
- (int)attachProtectedDatabase;
- (void)close;
- (void)dealloc;
- (int)detachProtectedDatabase;
- (id)initWithConfiguration:(id)arg1;
- (bool)isProtectedDatabaseAttached;

@end
