/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebSearch : SADomainCommand

@property (nonatomic, copy) NSString *provider;
@property (nonatomic, copy) NSString *query;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)provider;
- (id)query;
- (bool)requiresResponse;
- (void)setProvider:(id)arg1;
- (void)setQuery:(id)arg1;

@end
