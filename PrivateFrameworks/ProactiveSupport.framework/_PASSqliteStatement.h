/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASSqliteStatement : NSObject <NSCopying, NSDiscardableContent> {
    bool  _isFinalized;
    _PASSqliteDatabase * _owner;
    struct sqlite3_stmt { } * _stmt;
    unsigned int  _useCount;
}

@property (nonatomic, readonly) struct sqlite3_stmt { }*stmt;

- (void).cxx_destruct;
- (void)_finalizeWithLogWarning:(id)arg1;
- (bool)beginContentAccess;
- (int)bindNamedParam:(const char *)arg1 toDouble:(double)arg2;
- (int)bindNamedParam:(const char *)arg1 toInt64:(long long)arg2;
- (int)bindNamedParam:(const char *)arg1 toInteger:(long long)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSData:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSString:(id)arg2;
- (int)bindNamedParamToNull:(const char *)arg1;
- (int)bindParam:(int)arg1 toDouble:(double)arg2;
- (int)bindParam:(int)arg1 toInt64:(long long)arg2;
- (int)bindParam:(int)arg1 toInteger:(long long)arg2;
- (int)bindParam:(int)arg1 toNSData:(id)arg2;
- (int)bindParam:(int)arg1 toNSString:(id)arg2;
- (int)bindParamToNull:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (double)getDoubleForColumn:(int)arg1;
- (long long)getInt64ForColumn:(int)arg1;
- (long long)getIntegerForColumn:(int)arg1;
- (id)getNSDataForColumn:(int)arg1;
- (id)getNSStringForColumn:(int)arg1;
- (id)init;
- (id)initWithStatementPointer:(struct sqlite3_stmt { }*)arg1 owner:(id)arg2;
- (bool)isContentDiscarded;
- (struct sqlite3_stmt { }*)stmt;

@end
