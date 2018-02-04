/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPMessageUnit : NSObject {
    NSString * _bestLanguage;
    NSArray * _dataFeatures;
    NSArray * _features;
    NSArray * _flatMessageThread;
    NSMutableArray * _followups;
    long long  _indexInOriginalMessage;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _interactedDateRange;
    NSArray * _keywordFeatures;
    NSString * _lowercaseText;
    NSIndexSet * _neutralRanges;
    IPMessage * _originalMessage;
    IPMessageUnit * _previous;
    NSIndexSet * _proposalAndAcceptationRanges;
    NSIndexSet * _rejectionRanges;
    NSArray * _sentenceFeatures;
    NSString * _text;
}

@property (readonly) NSArray *dataFeatures;
@property (readonly) NSArray *features;
@property (readonly) NSArray *followups;
@property (readonly) long long indexInOriginalMessage;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } interactedDateRange;
@property (readonly) NSArray *keywordFeatures;
@property (readonly, copy) NSString *lowercaseText;
@property (readonly) IPMessage *originalMessage;
@property (readonly) IPMessageUnit *previous;
@property (readonly) NSArray *sentenceFeatures;
@property (readonly, copy) NSString *text;

- (void).cxx_destruct;
- (void)addFollowup:(id)arg1;
- (id)bestLanguageID;
- (id)dataFeatures;
- (id)description;
- (id)features;
- (id)followups;
- (long long)indexInOriginalMessage;
- (id)initWithText:(id)arg1 originalMessage:(id)arg2 index:(long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })interactedDateRange;
- (id)keywordFeatures;
- (id)lowercaseText;
- (id)neutralRanges;
- (id)originalMessage;
- (id)previous;
- (id)proposalAndAcceptationRanges;
- (id)rejectionRanges;
- (id)sentenceFeatures;
- (void)setDataFeatures:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setInteractedDateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setKeywordFeatures:(id)arg1;
- (void)setSentenceFeatures:(id)arg1;
- (id)text;

@end