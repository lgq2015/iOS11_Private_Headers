/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgPolicyConfiguration : NSObject {
    NSLock * _supportedPoliciesLock;
}

+ (id)sharedLogMsgPolicyConfiguration;

- (void).cxx_destruct;
- (void)_configureSupportedLogMsgPolicies;
- (id)_logMsgPolicyUsageForLogMessageType:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)supportedLogMsgPolicies;

@end