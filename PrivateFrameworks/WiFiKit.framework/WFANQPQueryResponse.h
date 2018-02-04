/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFANQPQueryResponse : NSObject {
    NSString * _bssid;
    NSArray * _cellNetworkInfo;
    long long  _channel;
    NSArray * _domains;
    NSString * _operatorName;
    WFNetworkProfile * _profile;
    NSArray * _roamingConsortium;
    NSString * _ssid;
}

@property (nonatomic, copy) NSString *bssid;
@property (nonatomic, copy) NSArray *cellNetworkInfo;
@property long long channel;
@property (nonatomic, retain) NSArray *domains;
@property (nonatomic, copy) NSString *operatorName;
@property (nonatomic, copy) WFNetworkProfile *profile;
@property (nonatomic, retain) NSArray *roamingConsortium;
@property (nonatomic, copy) NSString *ssid;

- (void).cxx_destruct;
- (id)bssid;
- (id)cellNetworkInfo;
- (long long)channel;
- (id)description;
- (id)domains;
- (unsigned long long)hash;
- (id)initWithProfile:(id)arg1 ANQPResponse:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToWFANQPResponse:(id)arg1;
- (id)operatorName;
- (id)profile;
- (id)roamingConsortium;
- (void)setBssid:(id)arg1;
- (void)setCellNetworkInfo:(id)arg1;
- (void)setChannel:(long long)arg1;
- (void)setDomains:(id)arg1;
- (void)setOperatorName:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setRoamingConsortium:(id)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;

@end
