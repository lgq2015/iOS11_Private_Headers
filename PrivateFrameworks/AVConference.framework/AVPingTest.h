/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVPingTest : NSObject {
    float  avg;
    NSString * interfaceNameToTest;
    NSString * ipAsString;
    long long  lastReturnedError;
    float  max;
    float  min;
    float  packetLossRate;
    float  stddev;
    bool  usingWifi;
}

@property (nonatomic, readonly) float avg;
@property (nonatomic, readonly) float max;
@property (nonatomic, readonly) float min;
@property (nonatomic, readonly) float packetLossRate;
@property (nonatomic, readonly) float stddev;
@property (nonatomic, readonly) bool usingWifi;

- (float)avg;
- (void)calculateInterfaceName;
- (void)dealloc;
- (id)description;
- (id)initWithIPAsString:(id)arg1 usingWifi:(bool)arg2;
- (float)max;
- (float)min;
- (float)packetLossRate;
- (bool)parsePingLineForBadCommand:(char *)arg1;
- (bool)parsePingLineForBadInterface:(char *)arg1;
- (bool)parsePingLineForLatencyStats:(char *)arg1;
- (bool)parsePingLineForPLR:(char *)arg1;
- (long long)parseResults:(char *)arg1 secondLastLine:(char *)arg2;
- (long long)start;
- (float)stddev;
- (bool)usingWifi;

@end
