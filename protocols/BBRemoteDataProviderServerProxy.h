/* made by EzioChiu.
 */

@protocol BBRemoteDataProviderServerProxy <NSObject>

@required

- (void)addBulletin:(BBBulletinRequest *)arg1 forDestinations:(unsigned long long)arg2;
- (void)getClearedInfoWithCompletion:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)getSectionInfoWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BBSectionInfo *, NSError *, void*
- (void)invalidateBulletins;
- (void)modifyBulletin:(BBBulletinRequest *)arg1;
- (void)reloadDefaultSectionInfo:(BBDataProviderIdentity *)arg1;
- (void)reloadSectionParameters:(BBDataProviderIdentity *)arg1;
- (void)setClearedInfo:(id)arg1;
- (void)setSectionInfo:(BBSectionInfo *)arg1;
- (void)withdrawBulletinWithPublisherBulletinID:(NSString *)arg1;
- (void)withdrawBulletinsWithRecordID:(NSString *)arg1;

@end
