/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXDatabaseStatement : NSObject {
    struct sqlite3 { } * _database;
    struct sqlite3_stmt { } * _statement;
}

@property (nonatomic) struct sqlite3 { }*database;
@property (nonatomic) struct sqlite3_stmt { }*statement;

- (bool)bind:(id)arg1 error:(id*)arg2;
- (bool)bindInt64:(long long)arg1 atIndex:(int)arg2 error:(id*)arg3;
- (bool)bindText:(const char *)arg1 ofLength:(int)arg2 atIndex:(int)arg3 error:(id*)arg4;
- (struct sqlite3 { }*)database;
- (void)dealloc;
- (bool)executeWithError:(id*)arg1;
- (bool)executeWithExpectedColumnCount:(long long)arg1 resultRowHandler:(id /* block */)arg2 error:(id*)arg3;
- (void)finalize;
- (id)init;
- (id)initWithSQL:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (bool)processResultsWithExpectedColumnCount:(long long)arg1 resultRowHandler:(id /* block */)arg2 error:(id*)arg3;
- (void)setDatabase:(struct sqlite3 { }*)arg1;
- (void)setStatement:(struct sqlite3_stmt { }*)arg1;
- (struct sqlite3_stmt { }*)statement;

@end
