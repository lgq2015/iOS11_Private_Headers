/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseDataRepresentation : SFUDataRepresentation {
    TSPDatabase * _database;
    long long  _identifier;
}

- (void).cxx_destruct;
- (struct sqlite3_blob { }*)_openBlob;
- (struct ZeroCopyInputStream { int (**x1)(); }*)createProtobufInputStream;
- (long long)dataLength;
- (bool)hasSameLocationAs:(id)arg1;
- (id)initWithDatabase:(id)arg1 identifier:(long long)arg2;
- (id)inputStream;

@end
