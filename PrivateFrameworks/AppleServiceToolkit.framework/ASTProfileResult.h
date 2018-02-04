/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTProfileResult : ASTSealablePayload {
    NSArray * _properties;
    NSString * _serialNumber;
    NSArray * _tests;
}

@property (nonatomic, retain) NSArray *properties;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, retain) NSArray *tests;

+ (id)resultWithSerialNumber:(id)arg1;
+ (id)sealedProfileResultWithPayload:(id)arg1 signature:(id)arg2;

- (void).cxx_destruct;
- (id)generatePayload;
- (id)init;
- (id)initWithSerialNumber:(id)arg1;
- (id)properties;
- (id)serialNumber;
- (void)setProperties:(id)arg1;
- (void)setTests:(id)arg1;
- (id)tests;

@end
