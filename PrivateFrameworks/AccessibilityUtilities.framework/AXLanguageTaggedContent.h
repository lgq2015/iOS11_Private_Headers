/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLanguageTaggedContent : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _currentChunk;
    NSArray * _currentDialects;
    NSLinguisticTagger * _linguisticTagger;
    bool  _predictedByTagger;
    bool  _splitContentOnNewlines;
    bool  _tagged;
    NSMutableArray * _tags;
    NSMutableOrderedSet * _unpredictedAmbiguousLangMaps;
    NSString * _userPreferredLangID;
}

@property (nonatomic, readonly) NSString *content;
@property (nonatomic, retain) NSArray *currentDialects;
@property (nonatomic, retain) NSLinguisticTagger *linguisticTagger;
@property (nonatomic) bool splitContentOnNewlines;
@property (getter=isTagged, nonatomic) bool tagged;
@property (nonatomic, retain) NSMutableArray *tags;
@property (nonatomic, retain) NSMutableOrderedSet *unpredictedAmbiguousLangMaps;
@property (nonatomic, copy) NSString *userPreferredLangID;

- (void).cxx_destruct;
- (void)_addTag;
- (bool)_isStringCombinationOfCommonAndEmoji:(id)arg1;
- (void)_manuallyProcessContentWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)ambiguousLangMaps;
- (id)content;
- (id)currentDialects;
- (id)description;
- (void)enumeratePredictedTags:(id /* block */)arg1;
- (void)enumerateUnpredictedTags:(id /* block */)arg1;
- (bool)hasOnlyNonWesternLangMaps;
- (bool)hasOnlyWesternLangMaps;
- (id)initWithContent:(id)arg1;
- (bool)isTagged;
- (bool)langMapIsSignificant:(id)arg1;
- (id)linguisticTagger;
- (id)primaryAmbiguousDialect;
- (id)primaryUnambiguousDialect;
- (void)setCurrentDialects:(id)arg1;
- (void)setLinguisticTagger:(id)arg1;
- (void)setSplitContentOnNewlines:(bool)arg1;
- (void)setTagged:(bool)arg1;
- (void)setTags:(id)arg1;
- (void)setUnpredictedAmbiguousLangMaps:(id)arg1;
- (void)setUserPreferredLangID:(id)arg1;
- (id)significantAmbiguousLangMaps;
- (id)significantAmbiguousLangMapsForUserKeyboards;
- (bool)splitContentOnNewlines;
- (void)tagContent;
- (id)tags;
- (id)unambiguousLangMaps;
- (id)unpredictedAmbiguousLangMaps;
- (void)updateTagsForLocalePrefChange;
- (id)userPreferredLangID;

@end
