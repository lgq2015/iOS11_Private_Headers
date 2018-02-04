/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAEmailSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *emailResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchCompletedWithEmailResults:(id)arg1;

- (id)emailResults;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithEmailResults:(id)arg1;
- (bool)requiresResponse;
- (void)setEmailResults:(id)arg1;

@end
