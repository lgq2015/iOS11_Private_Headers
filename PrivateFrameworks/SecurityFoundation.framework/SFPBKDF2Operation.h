/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFPBKDF2Operation : NSObject <SFKeyDerivingOperation> {
    id  _pbkdf2OperationInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long iterationCount;
@property (nonatomic, copy) <SFPseudoRandomFunction> *pseudoRandomFunction;
@property (nonatomic, copy) NSData *salt;
@property (readonly) Class superclass;

+ (id)_randomSalt;
+ (long long)keySource;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPseudoRandomFunction:(id)arg1 iterationCount:(long long)arg2 salt:(id)arg3;
- (long long)iterationCount;
- (id)pseudoRandomFunction;
- (id)salt;
- (void)setIterationCount:(long long)arg1;
- (void)setPseudoRandomFunction:(id)arg1;
- (void)setSalt:(id)arg1;

@end
