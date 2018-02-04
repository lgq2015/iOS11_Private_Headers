/* made by EzioChiu.
 */

@protocol CHStrokeProvider <NSObject>

@required

- (long long)compareOrderOfStrokeWithIdentifier:(id <CHStrokeIdentifier>)arg1 toStrokeWithIdentifier:(id <CHStrokeIdentifier>)arg2;
- (bool)enumerateChangesSinceVersion:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 9: <CHStrokeProviderVersion> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSSet *, bool*, void*
- (NSArray *)orderedStrokes;
- (<CHStroke> *)strokeForIdentifier:(id <CHStrokeIdentifier>)arg1;
- (<CHStrokeProviderVersion> *)strokeProviderVersion;

@optional

- (long long)compareOrderOfStroke:(id <CHStroke>)arg1 toStroke:(id <CHStroke>)arg2;

@end
