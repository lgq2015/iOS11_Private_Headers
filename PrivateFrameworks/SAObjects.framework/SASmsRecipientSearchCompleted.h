/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASmsRecipientSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)recipientSearchCompleted;
+ (id)recipientSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)recipients;
- (bool)requiresResponse;
- (void)setRecipients:(id)arg1;

@end
