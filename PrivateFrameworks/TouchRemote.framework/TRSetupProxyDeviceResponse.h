/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRSetupProxyDeviceResponse : TRResponseMessage {
    AKDevice * _proxyDevice;
}

@property (nonatomic, retain) AKDevice *proxyDevice;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)proxyDevice;
- (void)setProxyDevice:(id)arg1;

@end
