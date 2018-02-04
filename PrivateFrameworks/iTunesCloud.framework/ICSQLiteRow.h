/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICSQLiteRow : NSObject {
    NSDictionary * _columnIndexByName;
    struct sqlite3_stmt { } * _statement;
    ICSQLiteStatement * _statementWrapper;
}

@property (nonatomic, readonly) long long numberOfColumns;

- (void).cxx_destruct;
- (int)columnIndexForColumnName:(id)arg1;
- (id)dataForColumnIndex:(int)arg1;
- (id)dataForColumnName:(id)arg1;
- (double)doubleForColumnIndex:(int)arg1;
- (double)doubleForColumnName:(id)arg1;
- (id)initWithStatement:(id)arg1;
- (long long)int64ForColumnIndex:(int)arg1;
- (long long)int64ForColumnName:(id)arg1;
- (int)intForColumnIndex:(int)arg1;
- (int)intForColumnName:(id)arg1;
- (id)numberForColumnIndex:(int)arg1;
- (id)numberForColumnName:(id)arg1;
- (long long)numberOfColumns;
- (id)stringForColumnIndex:(int)arg1;
- (id)stringForColumnName:(id)arg1;

@end
