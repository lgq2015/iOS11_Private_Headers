/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaContainerQuotaData : NSObject {
    unsigned long long  _incrementalSize;
    unsigned long long  _incrementalTracksCount;
    unsigned long long  _incrementalTracksOmittedForQuota;
    unsigned long long  _quotaBehavior;
    id  _quotaRefObj;
}

@property (nonatomic) unsigned long long incrementalSize;
@property (nonatomic) unsigned long long incrementalTracksCount;
@property (nonatomic) unsigned long long incrementalTracksOmittedForQuota;
@property (nonatomic) unsigned long long quotaBehavior;
@property (nonatomic) id quotaRefObj;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)incrementalSize;
- (unsigned long long)incrementalTracksCount;
- (unsigned long long)incrementalTracksOmittedForQuota;
- (unsigned long long)quotaBehavior;
- (id)quotaRefObj;
- (void)setIncrementalSize:(unsigned long long)arg1;
- (void)setIncrementalTracksCount:(unsigned long long)arg1;
- (void)setIncrementalTracksOmittedForQuota:(unsigned long long)arg1;
- (void)setQuotaBehavior:(unsigned long long)arg1;
- (void)setQuotaRefObj:(id)arg1;

@end
