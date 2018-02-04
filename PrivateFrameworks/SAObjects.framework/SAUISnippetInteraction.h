/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUISnippetInteraction : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *requestId;
@property (nonatomic, copy) NSString *snippetId;
@property (readonly) Class superclass;

+ (id)snippetInteraction;
+ (id)snippetInteractionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)requestId;
- (bool)requiresResponse;
- (void)setRequestId:(id)arg1;
- (void)setSnippetId:(id)arg1;
- (id)snippetId;

@end
