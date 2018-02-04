/* made by EzioChiu.
 */

@protocol CNUILikenessRendering <NSObject>

@required

+ (<CNKeyDescriptor> *)descriptorForRequiredKeys;

- (CNUIImage *)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(CNUILikenessRenderingScope *)arg2;
- (CNObservable *)renderedBasicMonogramFromString:(CNObservable *)arg1 scope:(CNUILikenessRenderingScope *)arg2;
- (CNObservable *)renderedLikenessesForContacts:(NSArray *)arg1 scope:(CNUILikenessRenderingScope *)arg2;

@end
