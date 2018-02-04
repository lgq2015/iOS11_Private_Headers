/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFSettingsIPV4 : NSObject <WFSettingsPersistable> {
    NSArray * _addresses;
    NSString * _dhcpClientID;
    NSDictionary * _items;
    long long  _method;
    NSString * _router;
    NSArray * _subnetMasks;
}

@property (nonatomic, retain) NSArray *addresses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dhcpClientID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *items;
@property (nonatomic) long long method;
@property (nonatomic, copy) NSString *router;
@property (nonatomic, retain) NSArray *subnetMasks;
@property (readonly) Class superclass;

+ (id)automaticConfig;
+ (id)bootPConfig;

- (void).cxx_destruct;
- (id)addresses;
- (id)description;
- (id)dhcpClientID;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMethod:(long long)arg1 addresses:(id)arg2 subnetMasks:(id)arg3 router:(id)arg4 dhcpClientID:(id)arg5;
- (id)items;
- (long long)method;
- (id)protocol;
- (id)router;
- (void)setAddresses:(id)arg1;
- (void)setDhcpClientID:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setMethod:(long long)arg1;
- (void)setRouter:(id)arg1;
- (void)setSubnetMasks:(id)arg1;
- (id)subnetMasks;

@end
