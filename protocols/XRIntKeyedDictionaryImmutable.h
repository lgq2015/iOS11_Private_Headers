/* made by EzioChiu.
 */

@protocol XRIntKeyedDictionaryImmutable <NSObject>

@required

- (NSArray *)allObjects;
- (unsigned long long)count;
- (void)enumerateObjectsAndIntegerKeys:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, bool*, void*
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForIntegerKey:(unsigned long long)arg1;

@end
