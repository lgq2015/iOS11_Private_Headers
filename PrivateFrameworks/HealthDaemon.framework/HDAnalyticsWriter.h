/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAnalyticsWriter : NSObject {
    NSString * _bugType;
    struct __SecCertificate { } * _certificate;
}

- (void).cxx_destruct;
- (bool)_loadCertificateWithError:(id*)arg1;
- (id)initWithBugType:(id)arg1;
- (bool)submitJSONAnaltyicsData:(id)arg1 error:(id*)arg2;

@end
