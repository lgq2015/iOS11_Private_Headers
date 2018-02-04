/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHACurrentHome : AceObject <SABackgroundContextObject>

@property (nonatomic, copy) NSString *currentHomeIdentifier;
@property (nonatomic, copy) NSString *currentHomeName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)currentHome;
+ (id)currentHomeWithDictionary:(id)arg1 context:(id)arg2;

- (id)currentHomeIdentifier;
- (id)currentHomeName;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCurrentHomeIdentifier:(id)arg1;
- (void)setCurrentHomeName:(id)arg1;

@end
