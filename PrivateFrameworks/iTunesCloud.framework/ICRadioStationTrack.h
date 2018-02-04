/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioStationTrack : NSObject {
    NSDate * _expirationDate;
    ICRadioStationTrack * _parentTrack;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly) ICRadioStationTrack *afterPromoContentTrack;
@property (nonatomic, readonly) ICRadioStationTrack *beforePromoContentTrack;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSArray *fileAssets;
@property (nonatomic, readonly) bool hasStartTime;
@property (nonatomic, readonly, copy) ICStoreHLSAssetInfo *hlsAsset;
@property (nonatomic, readonly) long long likeState;
@property (nonatomic, readonly) ICRadioStationTrack *parentTrack;
@property (nonatomic, readonly, copy) NSDictionary *serverTrackInfo;
@property (getter=isSkippable, nonatomic, readonly) bool skippable;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) long long storeAdamID;
@property (nonatomic, readonly, copy) ICStorePlatformMetadata *storePlatformMetadata;
@property (nonatomic, readonly) long long trackType;

+ (id)flattenedTracksWithTracks:(id)arg1;

- (void).cxx_destruct;
- (id)afterPromoContentTrack;
- (id)beforePromoContentTrack;
- (id)expirationDate;
- (id)fileAssets;
- (bool)hasStartTime;
- (id)hlsAsset;
- (id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2;
- (bool)isSkippable;
- (long long)likeState;
- (id)parentTrack;
- (id)serverTrackInfo;
- (double)startTime;
- (long long)storeAdamID;
- (id)storePlatformMetadata;
- (long long)trackType;

@end
