/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsEngineBuilder : NSObject <MapsSuggestionsObject> {
    NSMutableArray * _excludeDedupers;
    NSMutableArray * _excludeFilters;
    NSMutableArray * _excludeImprovers;
    bool  _hasTracker;
    NSMutableArray * _includeDedupers;
    NSMutableArray * _includeFilters;
    NSMutableArray * _includeImprovers;
    <MapsSuggestionsLocationUpdater> * _locationUpdater;
    long long  _managerStyle;
    NSMutableArray * _sourceClasses;
    <MapsSuggestionsStrategy> * _strategy;
    struct NSMutableDictionary { Class x1; } * _titleFormatters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *excludeDedupers;
@property (nonatomic, retain) NSMutableArray *excludeFilters;
@property (nonatomic, retain) NSMutableArray *excludeImprovers;
@property (nonatomic) bool hasTracker;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *includeDedupers;
@property (nonatomic, retain) NSMutableArray *includeFilters;
@property (nonatomic, retain) NSMutableArray *includeImprovers;
@property (nonatomic, retain) <MapsSuggestionsLocationUpdater> *locationUpdater;
@property (nonatomic) long long managerStyle;
@property (nonatomic, retain) NSMutableArray *sourceClasses;
@property (nonatomic, retain) <MapsSuggestionsStrategy> *strategy;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *titleFormatters;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)_forPhone;
+ (id)currentEngine;
+ (id)forDevice;
+ (id)forEveryone;
+ (id)forSimulator;
+ (id)forTests;
+ (id)simpleStrategy;

- (void).cxx_destruct;
- (id)build;
- (id)excludeDedupers;
- (id)excludeFilters;
- (id)excludeImprovers;
- (bool)hasTracker;
- (id)includeDedupers;
- (id)includeFilters;
- (id)includeImprovers;
- (id)locationUpdater;
- (long long)managerStyle;
- (void)setExcludeDedupers:(id)arg1;
- (void)setExcludeFilters:(id)arg1;
- (void)setExcludeImprovers:(id)arg1;
- (void)setHasTracker:(bool)arg1;
- (void)setIncludeDedupers:(id)arg1;
- (void)setIncludeFilters:(id)arg1;
- (void)setIncludeImprovers:(id)arg1;
- (void)setLocationUpdater:(id)arg1;
- (void)setManagerStyle:(long long)arg1;
- (void)setSourceClasses:(id)arg1;
- (void)setStrategy:(id)arg1;
- (void)setTitleFormatters:(struct NSMutableDictionary { Class x1; }*)arg1;
- (id)sourceClasses;
- (id)strategy;
- (struct NSMutableDictionary { Class x1; }*)titleFormatters;
- (struct NSString { Class x1; }*)uniqueName;
- (id)withDedupers:(id)arg1;
- (id)withFilters:(id)arg1;
- (id)withImprovers:(id)arg1;
- (id)withLocationUpdater:(id)arg1;
- (id)withManagerStyle:(long long)arg1;
- (id)withSourceClasses:(id)arg1;
- (id)withTitleFormatter:(id)arg1 forType:(unsigned long long)arg2;
- (id)withoutDedupers:(id)arg1;
- (id)withoutFilters:(id)arg1;
- (id)withoutImprovers:(id)arg1;
- (id)withoutTracker;

@end
