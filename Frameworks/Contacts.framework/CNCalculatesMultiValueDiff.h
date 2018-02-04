/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNCalculatesMultiValueDiff : NSObject {
    NSMutableOrderedSet * _addedIdentifiers;
    NSMutableOrderedSet * _calculatedFinalIdentifiers;
    NSOrderedSet * _finalIdentifiers;
    NSArray * _multiValue1;
    NSArray * _multiValue2;
    NSOrderedSet * _originalIdentifiers;
    NSMutableOrderedSet * _removedIdentifiers;
    NSMutableOrderedSet * _sameIdentifiers;
    NSMutableArray * _updates;
}

+ (id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2;

- (void).cxx_destruct;
- (void)appendAddUpdates;
- (void)appendRemoveUpdates;
- (void)appendReorderUpdates;
- (void)appendReplaceUpdates;
- (void)calculateDiff;
- (id)initWithMultiValue1:(id)arg1 multiValue2:(id)arg2;
- (void)setupAddedIdentifiers;
- (void)setupCalculatedFinalIdentifiers;
- (void)setupFinalIdentifiers;
- (void)setupOriginalIdentifiers;
- (void)setupRemovedIdentifiers;
- (void)setupSameIdentifiers;
- (id)updates;

@end
