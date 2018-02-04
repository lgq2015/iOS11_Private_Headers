/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseBlob : NSObject {
    struct sqlite3_blob { } * _sqliteHandle;
}

- (id)data;
- (void)dealloc;
- (id)init;
- (id)initWithSQLiteHandle:(struct sqlite3_blob { }*)arg1;
- (unsigned long long)length;
- (int)readData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (int)writeData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3;

@end
