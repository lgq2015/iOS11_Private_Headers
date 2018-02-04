/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSCountersignatureAttribute : NSObject <MSCMSAttributeCoder> {
    NSArray * _signerInfoSet;
}

@property (readonly) NSArray *signerInfoSet;

- (void).cxx_destruct;
- (void)addSignerInfo:(id)arg1;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)initWithAttribute:(id)arg1 LAContext:(id)arg2 error:(id*)arg3;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithSignerInfo:(id)arg1;
- (id)signerInfoSet;
- (bool)verifyCountersignatures:(id)arg1 error:(id*)arg2;
- (bool)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg1 verifyTime:(id)arg2 signature:(id)arg3 error:(id*)arg4;

@end
