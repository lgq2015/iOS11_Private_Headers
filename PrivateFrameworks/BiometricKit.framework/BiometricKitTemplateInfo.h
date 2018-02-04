/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BiometricKitTemplateInfo : NSObject {
    NSDictionary * _details;
    NSArray * _topology;
}

@property (nonatomic, retain) NSDictionary *details;
@property (nonatomic, retain) NSArray *topology;

- (void).cxx_destruct;
- (void)dealloc;
- (id)details;
- (id)init;
- (void)setDetails:(id)arg1;
- (void)setTopology:(id)arg1;
- (id)topology;

@end
