/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUAssertionPolicyComposite : NSObject <NUAssertionPolicyHandler> {
    NSMutableArray * _policies;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *policies;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPolicy:(id)arg1;
- (id)init;
- (void)notifyAssertion:(id)arg1;
- (id)policies;

@end
