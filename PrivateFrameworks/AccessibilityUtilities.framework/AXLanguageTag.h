/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLanguageTag : NSObject <NSCopying> {
    NSMutableOrderedSet * _ambiguousDialects;
    NSString * _content;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSMutableOrderedSet * _unambiguousDialects;
    bool  _wasPredicted;
}

@property (nonatomic, retain) NSMutableOrderedSet *ambiguousDialects;
@property (nonatomic) NSString *content;
@property (nonatomic, readonly) NSString *contentSubstring;
@property (nonatomic, readonly) AXDialectMap *dialect;
@property (nonatomic, readonly) AXDialectMap *preferredAmbiguousDialect;
@property (nonatomic, readonly) AXDialectMap *preferredUnambiguousDialect;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSMutableOrderedSet *unambiguousDialects;
@property (nonatomic) bool wasPredicted;

+ (id)tagWithDialects:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 content:(id)arg3 predictedByTagger:(bool)arg4;

- (void).cxx_destruct;
- (void)addAmbiguousDialect:(id)arg1;
- (void)addAmbiguousDialects:(id)arg1;
- (void)addUnambiguousDialect:(id)arg1;
- (id)ambiguousDialects;
- (bool)canBeSpokenByDialect:(id)arg1;
- (bool)canBeSpokenByLanguage:(id)arg1;
- (id)content;
- (id)contentSubstring;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dialect;
- (bool)hasAmbigiousDialects;
- (id)preferredAmbiguousDialect;
- (id)preferredUnambiguousDialect;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setAmbiguousDialects:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setUnambiguousDialects:(id)arg1;
- (void)setWasPredicted:(bool)arg1;
- (id)unambiguousDialects;
- (bool)wasPredicted;

@end
