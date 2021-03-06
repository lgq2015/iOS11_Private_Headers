/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStartBackgroundActionRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *backgroundAction;
@property (nonatomic, retain) <SAAceSerializable> *backgroundActionPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)startBackgroundActionRequest;
+ (id)startBackgroundActionRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)backgroundAction;
- (id)backgroundActionPayload;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setBackgroundAction:(id)arg1;
- (void)setBackgroundActionPayload:(id)arg1;

@end
