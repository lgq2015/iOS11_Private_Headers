/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsReInjectSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {
    NSString * _path;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *path;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (struct NSArray { Class x1; }*)_entriesFromFileAtPath:(id)arg1;
+ (struct NSArray { Class x1; }*)_entriesFromMultilineString:(id)arg1;
+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (void)_processFileAtPath:(id)arg1;
- (bool)canProduceEntriesOfType:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntries;

@end