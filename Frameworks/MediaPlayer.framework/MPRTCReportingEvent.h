/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRTCReportingEvent : NSObject {
    long long  _networkInterfaceType;
    unsigned short  _rtcReportingCategory;
    unsigned short  _rtcReportingType;
}

@property (nonatomic) long long networkInterfaceType;
@property (nonatomic, readonly) unsigned short rtcReportingCategory;
@property (nonatomic, readonly) unsigned short rtcReportingType;

- (long long)networkInterfaceType;
- (id)newRTCReportingMessageDictionary;
- (id)newRTCReportingPayloadDictionary;
- (unsigned short)rtcReportingCategory;
- (unsigned short)rtcReportingType;
- (void)setNetworkInterfaceType:(long long)arg1;

@end
