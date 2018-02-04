/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICSearchResult : NSObject {
    unsigned long long  _cachedHash;
    NSString * _displayingSnippet;
    NSTextCheckingResult * _displayingSnippetCheckingResult;
    NSString * _displayingTitle;
    NSTextCheckingResult * _displayingTitleCheckingResult;
    NSString * _highlightString;
    <ICSearchIndexable> * _object;
    double  _rankingScore;
    unsigned long long  _relevanceBitField;
    NSString * _searchString;
    NSAttributedString * _snippetAttributedString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _snippetAttributedStringInsideFrame;
    NSAttributedString * _titleAttributedString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleAttributedStringInsideFrame;
}

@property (nonatomic, readonly) NSString *displayingSnippet;
@property (nonatomic, readonly) NSTextCheckingResult *displayingSnippetCheckingResult;
@property (nonatomic, readonly) NSString *displayingTitle;
@property (nonatomic, readonly) NSTextCheckingResult *displayingTitleCheckingResult;
@property (nonatomic, readonly) NSString *highlightString;
@property (nonatomic, readonly) <ICSearchIndexable> *object;
@property (nonatomic, readonly) double rankingScore;
@property (nonatomic, readonly) unsigned long long relevanceBitField;
@property (nonatomic, readonly, copy) NSString *searchString;
@property (nonatomic, retain) NSAttributedString *snippetAttributedString;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } snippetAttributedStringInsideFrame;
@property (nonatomic, retain) NSAttributedString *titleAttributedString;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleAttributedStringInsideFrame;

+ (id)attributedStringWithMatchHighlighted:(id)arg1 textCheckingResult:(id)arg2 usingAttributes:(id)arg3 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (id)attributesByHighlightingAttributes:(id)arg1;
+ (id)authorNameToHighlightForNote:(id)arg1 fromSearchResult:(id)arg2 matchWordBoundaries:(bool)arg3;
+ (id)bestMatchOfString:(id)arg1 withinString:(id)arg2 matchWordBoundaries:(bool)arg3;
+ (id)bestMatchTokensForString:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForAttributedString:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)canFitAttributedString:(id)arg1 ellipses:(id)arg2 shouldPrefixWithEllipses:(bool)arg3 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (id)firstMatchOfString:(id)arg1 withinString:(id)arg2 matchWordBoundaries:(bool)arg3;
+ (id)regularExpressionForSearchingWithString:(id)arg1 matchWordBoundaries:(bool)arg2;
+ (id)stringMatchHighlightedForAttributedString:(id)arg1 fromSearchResult:(id)arg2;
+ (id)stringMatchHighlightedForString:(id)arg1 atributedString:(id)arg2 highlightString:(id)arg3;
+ (id)stringMatchHighlightedForString:(id)arg1 fromSearchResult:(id)arg2;

- (void).cxx_destruct;
- (id)bestMatchWithinString:(id)arg1;
- (id)bestMatchWithinString:(id)arg1 matchWordBoundaries:(bool)arg2;
- (long long)compareByModificationDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayingSnippet;
- (id)displayingSnippetCheckingResult;
- (id)displayingTitle;
- (id)displayingTitleCheckingResult;
- (unsigned long long)hash;
- (id)highlightString;
- (id)initWithMainContextObject:(id)arg1 currentContextObject:(id)arg2 rankingScore:(double)arg3 relevanceBitField:(unsigned long long)arg4 searchString:(id)arg5 highlightString:(id)arg6;
- (id)initWithObject:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3 searchString:(id)arg4 highlightString:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)object;
- (void)prepareDisplayingSnippetWithAccessingObject:(id)arg1;
- (void)prepareDisplayingTitleWithAccessingObject:(id)arg1;
- (double)rankingScore;
- (void)refetchObjectFromContext:(id)arg1;
- (unsigned long long)relevanceBitField;
- (id)searchString;
- (void)setSnippetAttributedString:(id)arg1;
- (void)setSnippetAttributedStringInsideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitleAttributedString:(id)arg1;
- (void)setTitleAttributedStringInsideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)snippetAttributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snippetAttributedStringInsideFrame;
- (id)snippetWithMatchHighlightedUsingAttributes:(id)arg1 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)titleAttributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleAttributedStringInsideFrame;
- (id)titleWithMatchHighlightedUsingAttributes:(id)arg1 insideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
