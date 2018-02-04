/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUSandboxExtendedURL : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSString * _sandboxExtensionClass;
    long long  _sandboxExtensionHandle;
    NSString * _sandboxExtensionToken;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, copy) NSString *sandboxExtensionClass;
@property (nonatomic) long long sandboxExtensionHandle;
@property (nonatomic, copy) NSString *sandboxExtensionToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSandboxExtendedURL:(id)arg1;
- (id)sandboxExtensionClass;
- (long long)sandboxExtensionHandle;
- (id)sandboxExtensionToken;
- (void)setSandboxExtensionClass:(id)arg1;
- (void)setSandboxExtensionHandle:(long long)arg1;
- (void)setSandboxExtensionToken:(id)arg1;
- (void)setURL:(id)arg1;

@end
