/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKAlternateResult : AceObject <SAAceSerializable>

@property (nonatomic, retain) <SAClientBoundCommand> *command;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)alternateResult;
+ (id)alternateResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)command;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)name;
- (void)setCommand:(id)arg1;
- (void)setName:(id)arg1;

@end
