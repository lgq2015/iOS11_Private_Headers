/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKReportingConcurrentRequest : NSObject {
    DKExtensionAdapter * _generator;
    struct NSMutableSet { Class x1; } * _manifest;
}

@property (nonatomic, retain) DKExtensionAdapter *generator;
@property (nonatomic, retain) NSMutableSet *manifest;

+ (id)concurrentRequestWithGenerator:(id)arg1;

- (void).cxx_destruct;
- (id)generator;
- (id)initWithGenerator:(id)arg1;
- (struct NSMutableSet { Class x1; }*)manifest;
- (void)setGenerator:(id)arg1;
- (void)setManifest:(struct NSMutableSet { Class x1; }*)arg1;

@end
