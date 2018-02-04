/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerSearch : SADomainCommand

@property (nonatomic, retain) SALocation *address;
@property (nonatomic, copy) NSString *attribute;
@property (nonatomic, copy) NSString *miscQuestion;
@property (nonatomic, copy) NSString *placeAttribute;
@property (nonatomic, copy) NSArray *product;
@property (nonatomic, copy) NSString *timeQuestion;
@property (nonatomic, copy) NSString *verbType;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)address;
- (id)attribute;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)miscQuestion;
- (id)placeAttribute;
- (id)product;
- (bool)requiresResponse;
- (void)setAddress:(id)arg1;
- (void)setAttribute:(id)arg1;
- (void)setMiscQuestion:(id)arg1;
- (void)setPlaceAttribute:(id)arg1;
- (void)setProduct:(id)arg1;
- (void)setTimeQuestion:(id)arg1;
- (void)setVerbType:(id)arg1;
- (id)timeQuestion;
- (id)verbType;

@end
