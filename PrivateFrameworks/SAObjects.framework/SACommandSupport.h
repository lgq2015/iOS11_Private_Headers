/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACommandSupport : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *aceVersion;
@property (nonatomic, copy) NSString *commandId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAObjectSupport *resultSupport;
@property (nonatomic, copy) NSURL *serverEndpoint;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedConstraints;
@property (nonatomic) long long weight;

+ (id)commandSupport;
+ (id)commandSupportWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceVersion;
- (id)commandId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)resultSupport;
- (id)serverEndpoint;
- (void)setAceVersion:(id)arg1;
- (void)setCommandId:(id)arg1;
- (void)setResultSupport:(id)arg1;
- (void)setServerEndpoint:(id)arg1;
- (void)setSupportedConstraints:(id)arg1;
- (void)setWeight:(long long)arg1;
- (id)supportedConstraints;
- (long long)weight;

@end
