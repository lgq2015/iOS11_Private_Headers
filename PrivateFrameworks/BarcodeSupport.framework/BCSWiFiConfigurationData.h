/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSWiFiConfigurationData : NSObject <BCSParsedDataPrivate> {
    bool  _WEP;
    NSString * _password;
    NSString * _ssid;
}

@property (getter=isWEP, nonatomic, readonly) bool WEP;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extraPreviewText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly, copy) NSString *ssid;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)extraPreviewText;
- (id)initWithCoder:(id)arg1;
- (id)initWithSSID:(id)arg1 isWEP:(bool)arg2 password:(id)arg3;
- (bool)isWEP;
- (id)password;
- (id)ssid;
- (long long)type;

@end
