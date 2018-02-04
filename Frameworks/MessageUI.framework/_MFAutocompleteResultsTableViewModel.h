/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFAutocompleteResultsTableViewModel : NSObject {
    unsigned long long  _numberOfSections;
    NSMutableDictionary * _sections;
}

@property (nonatomic, readonly) unsigned long long numberOfNonEmptySections;
@property (nonatomic) unsigned long long numberOfSections;

- (/* Warning: unhandled struct encoding: '{?=@@@}' */ struct { id x1; id x2; })computeDiffForModel:(id)arg1;
- (void)dealloc;
- (void)enumerateSections:(id /* block */)arg1;
- (id)initWithNumberOfSections:(unsigned long long)arg1;
- (unsigned long long)numberOfNonEmptySections;
- (unsigned long long)numberOfSections;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)setNumberOfSections:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setSection:(id)arg1 atIndex:(unsigned long long)arg2;

@end
