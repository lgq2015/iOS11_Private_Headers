/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFHealthIssueOverrides : NSObject {
    bool  _carrierNetwork;
    bool  _commonSSID;
    bool  _hiddenNetwork;
    bool  _legacyPHY;
    bool  _noInternetConnection;
    long long  _securityOverride;
}

@property (nonatomic) bool carrierNetwork;
@property (nonatomic) bool commonSSID;
@property (nonatomic) bool hiddenNetwork;
@property (nonatomic) bool legacyPHY;
@property (nonatomic) bool noInternetConnection;
@property (nonatomic) long long securityOverride;

- (bool)carrierNetwork;
- (bool)commonSSID;
- (bool)hiddenNetwork;
- (bool)legacyPHY;
- (bool)noInternetConnection;
- (long long)securityOverride;
- (void)setCarrierNetwork:(bool)arg1;
- (void)setCommonSSID:(bool)arg1;
- (void)setHiddenNetwork:(bool)arg1;
- (void)setLegacyPHY:(bool)arg1;
- (void)setNoInternetConnection:(bool)arg1;
- (void)setSecurityOverride:(long long)arg1;

@end
