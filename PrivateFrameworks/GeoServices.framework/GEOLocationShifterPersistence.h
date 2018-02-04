/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShifterPersistence : NSObject {
    GEOSQLiteDB * _db;
    NSString * _dbPath;
}

+ (id)sharedPersister;

- (void).cxx_destruct;
- (void)_findResponseForCoordinate:(struct { double x1; double x2; })arg1 usingStatement:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (bool)_setup:(id)arg1;
- (void)findExactResponseForCoordinate:(struct { double x1; double x2; })arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)findResponseForCoordinate:(struct { double x1; double x2; })arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithDBFilePath:(id)arg1;
- (void)pruneEntriesOlderThan:(id)arg1 maximumEntriesToKeep:(int)arg2;
- (void)removeAllEntries;
- (void)storeResponse:(id)arg1;
- (void)tearDown;

@end
