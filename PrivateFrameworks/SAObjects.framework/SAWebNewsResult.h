/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebNewsResult : SAWebWebResult

@property (nonatomic, copy) NSDate *publicationDate;
@property (nonatomic, copy) NSString *source;

+ (id)newsResult;
+ (id)newsResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)publicationDate;
- (void)setPublicationDate:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
