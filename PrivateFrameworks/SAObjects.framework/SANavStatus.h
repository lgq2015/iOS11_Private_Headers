/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANavStatus : AceObject <SABackgroundContextObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *statusValue;
@property (readonly) Class superclass;

+ (id)navStatus;
+ (id)navStatusWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setStatusValue:(id)arg1;
- (id)statusValue;

@end