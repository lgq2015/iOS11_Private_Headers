/* made by EzioChiu.
 */

@protocol TIUserDictionaryServing <NSObject>

@required

- (id)addObserver:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getPhraseShortcutPairs:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)removeObserver:(id)arg1;
- (NSUUID *)userDictionaryUUID;

@end
