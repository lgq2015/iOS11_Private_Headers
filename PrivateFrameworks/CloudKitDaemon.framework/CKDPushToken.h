/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPushToken : NSObject {
    NSString * _apsEnvironmentString;
    NSData * _apsToken;
}

@property (nonatomic, retain) NSString *apsEnvironmentString;
@property (nonatomic, retain) NSData *apsToken;

- (void).cxx_destruct;
- (id)apsEnvironmentString;
- (id)apsToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setApsEnvironmentString:(id)arg1;
- (void)setApsToken:(id)arg1;

@end
