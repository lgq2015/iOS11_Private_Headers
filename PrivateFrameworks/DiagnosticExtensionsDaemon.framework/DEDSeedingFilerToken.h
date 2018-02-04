/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDSeedingFilerToken : NSObject {
    NSNumber * _dsid;
    NSNumber * _entityID;
    long long  _submissionType;
    NSString * _token;
}

@property (nonatomic, readonly) NSNumber *dsid;
@property (nonatomic, readonly) NSNumber *entityID;
@property (nonatomic, readonly) long long submissionType;
@property (nonatomic, readonly) NSString *token;

- (void).cxx_destruct;
- (id)compiledEntityID;
- (id)dsid;
- (id)entityID;
- (id)initWithEntityID:(id)arg1 type:(long long)arg2 token:(id)arg3 dsid:(id)arg4;
- (long long)submissionType;
- (id)token;

@end
