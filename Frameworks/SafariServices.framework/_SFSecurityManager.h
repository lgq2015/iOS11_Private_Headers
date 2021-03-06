/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSecurityManager : NSObject {
    NSString * _provider;
    NSString * _securityTypeDescription;
}

@property (nonatomic, readonly) NSString *provider;
@property (nonatomic, readonly) NSString *securityTypeDescription;

- (void).cxx_destruct;
- (id)initWithProvider:(id)arg1 securityTypeDescription:(id)arg2;
- (id)provider;
- (id)securityTypeDescription;

@end
