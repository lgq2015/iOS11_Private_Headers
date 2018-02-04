/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPunchoutOutcome : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *originalCommandId;
@property (nonatomic, copy) NSDictionary *outcomes;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)punchoutOutcome;
+ (id)punchoutOutcomeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)originalCommandId;
- (id)outcomes;
- (bool)requiresResponse;
- (void)setOriginalCommandId:(id)arg1;
- (void)setOutcomes:(id)arg1;

@end
