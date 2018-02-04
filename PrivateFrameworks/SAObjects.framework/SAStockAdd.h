/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockAdd : SADomainCommand

@property (nonatomic, copy) NSArray *stocks;

+ (id)add;
+ (id)addWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setStocks:(id)arg1;
- (id)stocks;

@end
