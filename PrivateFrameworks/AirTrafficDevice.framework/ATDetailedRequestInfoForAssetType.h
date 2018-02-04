/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATDetailedRequestInfoForAssetType : NSObject {
    NSDictionary * _contributors;
    NSMutableDictionary * _mutableContributors;
    unsigned long long  _totalAssetsToSync;
    unsigned long long  _totalBytesSynced;
    unsigned long long  _totalBytesToSync;
}

@property (getter=getContributors, nonatomic, retain) NSDictionary *contributors;
@property (getter=getTotalAssetsToSync, nonatomic) unsigned long long totalAssetsToSync;
@property (getter=getTotalBytesSynced, nonatomic) unsigned long long totalBytesSynced;
@property (getter=getTotalBytesToSync, nonatomic) unsigned long long totalBytesToSync;

+ (id)serializedRequestInfoFromATDetailedRequestInfoForAssetType:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)getContributors;
- (unsigned long long)getTotalAssetsToSync;
- (unsigned long long)getTotalBytesSynced;
- (unsigned long long)getTotalBytesToSync;
- (void)incrementAssetCountToSync;
- (id)init;
- (void)setContributors:(id)arg1;
- (void)setTotalAssetsToSync:(unsigned long long)arg1;
- (void)setTotalBytesSynced:(unsigned long long)arg1;
- (void)setTotalBytesToSync:(unsigned long long)arg1;
- (void)updateBytesSynced:(unsigned long long)arg1;
- (void)updateBytesToSync:(unsigned long long)arg1 forItemIdentifier:(id)arg2;

@end
