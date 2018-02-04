/* made by EzioChiu.
 */

@protocol HDHealthDatabase <NSObject>

@required

- (bool)addJournalEntries:(NSArray *)arg1 error:(id*)arg2;
- (bool)addJournalEntry:(HDJournalEntry *)arg1 error:(id*)arg2;
- (void)addProtectedDataObserver:(id <HDDatabaseProtectedDataObserver>)arg1;
- (HDExtendedDatabaseTransaction *)beginExtendedTransactionWithOptions:(unsigned long long)arg1 transactionTimeout:(double)arg2 continuationTimeout:(double)arg3 error:(id*)arg4;
- (HDExtendedDatabaseTransaction *)extendedDatabaseTransactionForIdentifier:(NSUUID *)arg1;
- (void)finalizeExtendedTransactionForIdentifier:(NSUUID *)arg1;
- (bool)isDataProtectedByFirstUnlockAvailable;
- (bool)isProtectedDataAvailable;
- (void)performAsynchronously:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)performJournalMergeWithOptions:(void *)arg1 error:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, HDSQLiteDatabase *, id*
- (bool)performTransactionWithOptions:(void *)arg1 error:(void *)arg2 usingBlock:(void *)arg3 inaccessibilityHandler:(void *)arg4; // needs 4 arg types, found 14: unsigned long long, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, HDSQLiteDatabase *, id*, id /* block */, void*, bool, id /* block */, NSError *, id*
- (void)performWhenDataProtectedByFirstUnlockIsAvailable:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)performWithSecondaryJournal:(void *)arg1 error:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 7: long long, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, id*
- (void)removeProtectedDataObserver:(id <HDDatabaseProtectedDataObserver>)arg1;

@end
