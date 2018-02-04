/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFActionSetSuggestionItemProvider : HFItemProvider {
    bool  _hasProvidedStaticSuggestionItems;
    HMHome * _home;
    NSSet * _staticSuggestionItems;
}

@property (nonatomic) bool hasProvidedStaticSuggestionItems;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSSet *staticSuggestionItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasProvidedStaticSuggestionItems;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)items;
- (id)reloadItems;
- (void)setHasProvidedStaticSuggestionItems:(bool)arg1;
- (void)setStaticSuggestionItems:(id)arg1;
- (id)staticSuggestionItems;

@end
