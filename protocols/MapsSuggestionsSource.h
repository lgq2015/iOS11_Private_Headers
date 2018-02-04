/* made by EzioChiu.
 */

@protocol MapsSuggestionsSource <MapsSuggestionsObject>

@required

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (bool)canProduceEntriesOfType:(unsigned long long)arg1;
- (<MapsSuggestionsSourceDelegate> *)delegate;
- (id)init;
- (id)initWithDelegate:(id <MapsSuggestionsSourceDelegate>)arg1;
- (void)setDelegate:(id <MapsSuggestionsSourceDelegate>)arg1;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntries;

@end
