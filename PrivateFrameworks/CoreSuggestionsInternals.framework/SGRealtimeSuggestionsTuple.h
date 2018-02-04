/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGRealtimeSuggestionsTuple : NSObject {
    NSArray * _contacts;
    NSArray * _events;
    NSArray * _invalidatedIdentifiers;
}

@property (retain) NSArray *contacts;
@property (retain) NSArray *events;
@property (retain) NSArray *invalidatedIdentifiers;

- (void).cxx_destruct;
- (id)combinedSuggestions;
- (id)contacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)events;
- (id)invalidatedIdentifiers;
- (void)setContacts:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setInvalidatedIdentifiers:(id)arg1;
- (unsigned long long)suggestionsCount;

@end
