/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestCounterPersistence : NSObject {
    GEOSQLiteDB * _db;
    bool  _enabled;
    double  _maxAge;
}

@property (nonatomic) bool enabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_purgeOlderThan:(id)arg1;
- (void)countsStartingFrom:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dealloc;
- (bool)enabled;
- (void)fetchTrafficProbeCollectionsStartingFrom:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)incrementAtTime:(id)arg1 app:(id)arg2 requestType:(unsigned char)arg3 result:(unsigned char)arg4 xmitBytes:(unsigned int)arg5 recvBytes:(unsigned int)arg6 withCompletion:(id /* block */)arg7;
- (void)incrementForApp:(id)arg1 requestType:(unsigned char)arg2 result:(unsigned char)arg3 xmitBytes:(unsigned int)arg4 recvBytes:(unsigned int)arg5 withCompletion:(id /* block */)arg6;
- (id)init;
- (id)initWithDBFilePath:(id)arg1 maxCountAge:(double)arg2;
- (void)purgeAllCounts;
- (void)recordTrafficProbeCollectionAt:(id)arg1 tripId:(id)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (void)setEnabled:(bool)arg1;

@end
