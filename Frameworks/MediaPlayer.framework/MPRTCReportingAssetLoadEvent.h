/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRTCReportingAssetLoadEvent : MPRTCReportingEvent {
    double  _duration;
    NSError * _error;
    NSString * _siriSessionIdentifier;
}

@property (nonatomic) double duration;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSString *siriSessionIdentifier;

- (void).cxx_destruct;
- (double)duration;
- (id)error;
- (id)newRTCReportingPayloadDictionary;
- (unsigned short)rtcReportingCategory;
- (unsigned short)rtcReportingType;
- (void)setDuration:(double)arg1;
- (void)setError:(id)arg1;
- (void)setSiriSessionIdentifier:(id)arg1;
- (id)siriSessionIdentifier;

@end
