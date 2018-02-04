/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKLexicalEntity : NSObject {
    NSString * _internalWord;
    NSString * _language;
    NSString * _lemma;
    NSString * _partOfSpeech;
    NSString * _string;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _tokenRange;
    NSString * _tokenType;
}

@property (retain) NSString *internalWord;
@property (retain) NSString *language;
@property (retain) NSString *lemma;
@property (retain) NSString *partOfSpeech;
@property (retain) NSString *string;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } tokenRange;
@property (retain) NSString *tokenType;
@property (readonly) NSString *word;

- (void).cxx_destruct;
- (id)description;
- (id)internalWord;
- (id)language;
- (id)lemma;
- (id)partOfSpeech;
- (void)setInternalWord:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLemma:(id)arg1;
- (void)setPartOfSpeech:(id)arg1;
- (void)setString:(id)arg1;
- (void)setTokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTokenType:(id)arg1;
- (id)string;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tokenRange;
- (id)tokenType;
- (id)word;

@end
