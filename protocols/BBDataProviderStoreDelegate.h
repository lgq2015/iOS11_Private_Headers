/* made by EzioChiu.
 */

@protocol BBDataProviderStoreDelegate <NSObject>

@required

- (void)dataProviderStore:(void *)arg1 didAddDataProvider:(void *)arg2 performMigration:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: <BBDataProviderStore> *, BBDataProvider *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dataProviderStore:(id <BBDataProviderStore>)arg1 didRemoveDataProvider:(BBDataProvider *)arg2;

@optional

- (void)dataProviderStore:(id <BBDataProviderStore>)arg1 didAddParentSectionFactory:(BBParentSectionDataProviderFactory *)arg2;

@end
