/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRedundancyControlAlgorithmAudioLegacy : NSObject <VCRedundancyControlAlgorithm> {
    bool  _isUplinkRecentlyCongested;
    unsigned int  _packetLossPercentage;
    double  _redundancyInterval;
    unsigned int  _redundancyPercentage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double redundancyInterval;
@property (nonatomic, readonly) unsigned int redundancyPercentage;
@property (readonly) Class superclass;

- (void)computeRedundancyInfo;
- (double)redundancyInterval;
- (unsigned int)redundancyPercentage;
- (void)updateRedundancyStrategyWithNetworkStatistics:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; })arg1;

@end
