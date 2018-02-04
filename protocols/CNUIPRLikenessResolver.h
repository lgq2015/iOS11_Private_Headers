/* made by EzioChiu.
 */

@protocol CNUIPRLikenessResolver <NSObject>

@required

+ (<CNKeyDescriptor> *)descriptorForRequiredKeys;

- (CNObservable *)basicMonogramObservableFromString:(CNObservable *)arg1;
- (CNObservable *)likenessesForContact:(CNContact *)arg1;
- (<CNUIPlaceholderProviderFactory> *)placeholderProviderFactory;
- (<CNCancelable> *)resolveLikenessesForContacts:(void *)arg1 withContentHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
