/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFLibrarySQLiteConnectionWrapper : NSObject {
    MFProtectedSQLiteConnection * _connection;
    bool  _invalid;
    unsigned long long  _refcount;
    NSArray * _stack;
    bool  _writer;
}

@property (nonatomic, readonly) MFProtectedSQLiteConnection *connection;
@property (nonatomic) bool invalid;
@property (nonatomic, readonly) unsigned long long refcount;
@property (nonatomic, readonly) bool writer;

+ (id)wrapperWithConnection:(id)arg1 forWriting:(bool)arg2;

- (id)connection;
- (void)dealloc;
- (unsigned long long)decrementRefcount;
- (unsigned long long)incrementRefcount;
- (id)initWithConnection:(id)arg1 forWriting:(bool)arg2;
- (bool)invalid;
- (unsigned long long)refcount;
- (void)setInvalid:(bool)arg1;
- (bool)writer;

@end
