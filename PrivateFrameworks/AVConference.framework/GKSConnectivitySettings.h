/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface GKSConnectivitySettings : NSObject

+ (double)getAdaptiveLearningA;
+ (double)getAdaptiveLearningB;
+ (int)getAdaptiveLearningState;
+ (id)getAddressForService:(id)arg1;
+ (double)getAdjustmentFactorA;
+ (double)getAdjustmentFactorB;
+ (double)getAdjustmentFactorC;
+ (id)getAllSettings;
+ (struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)getCachedIPPort;
+ (id)getClientOption:(id)arg1;
+ (struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)getIPPortForService:(id)arg1;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (int)getLongTermHistoryLength;
+ (double)getLongTermValueWeightA;
+ (double)getLongTermValueWeightB;
+ (double)getLongTermValueWeightC;
+ (int)getNATTypeFromCarrierBundle;
+ (int)getShortTermHistoryLength;
+ (double)getShortTermValueWeightA;
+ (double)getShortTermValueWeightB;
+ (double)getShortTermValueWeightC;
+ (void)initialize;
+ (bool)isRedStateA;
+ (void)setAddress:(id)arg1 forService:(id)arg2;
+ (void)setClientOptions:(id)arg1;
+ (void)setServerAddresses:(id)arg1;
+ (bool)supportiRATRecommendation;
+ (bool)supportsEVSCodec;
+ (bool)supportsHEVCEncoding;
+ (bool)supportsRedAudio;

- (void)dealloc;
- (id)init;

@end
