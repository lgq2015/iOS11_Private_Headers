/* made by EzioChiu.
 */

@protocol SLMicroBlogSheetDelegate

@required

- (void)beginPotentialLocationUse;
- (void)deferExpensiveOperations;
- (void)endPotentialLocationUse;
- (void)fetchCurrentImageLimits:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)fetchCurrentUrlLimits:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, long long, NSError *, void*
- (void)fetchGeotagStatus:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSError *, void*
- (void)fetchProfileImageDataForScreenName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)fetchSessionInfo:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (id /* block */)locationInformationChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSDictionary *, void*, id, SEL
- (void)logDidSendStatusWithText:(NSString *)arg1 attachments:(NSArray *)arg2 locationAttached:(bool)arg3 fromProcessWithPID:(int)arg4;
- (void)recordsMatchingPrefixString:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSArray *, NSError *, void*
- (void)sendStatus:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SLMicroBlogStatus *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSString *)serviceAccountTypeIdentifier;
- (void)setActiveAccountIdentifier:(NSString *)arg1;
- (void)setGeotagStatus:(int)arg1;
- (void)setLocationInformationChangedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)showSettingsIfNeeded;
- (void)stopDeferringExpensiveOperations;

@optional

- (NSData *)cachedProfileImageDataForScreenName:(NSString *)arg1;
- (long long)characterCountForText:(NSString *)arg1 shortenedURLCost:(long long)arg2;
- (bool)countMediaAttachmentsTowardCharacterCount;
- (void)ensureUserRecordStore;

@end
