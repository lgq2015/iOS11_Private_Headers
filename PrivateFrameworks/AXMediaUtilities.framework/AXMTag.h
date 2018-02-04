/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMTag : NSObject {
    unsigned long long  _datatype;
    NSString * _nlDerivedSubtoken;
    NSString * _nlLanguage;
    NSString * _nlLexicalClass;
    NSString * _nlNamedEntity;
    NSString * _nlScript;
    struct { 
        struct { 
            long long location; 
            long long length; 
        } range; 
        unsigned long long attributes; 
    }  _nlToken;
    NSString * _nlType;
    NSString * _originalText;
    AXMSpeechFormatter * _speechFormatter;
    NSTextCheckingResult * _textCheckingResult;
}

@property (nonatomic, readonly) bool isDate;
@property (nonatomic, readonly) bool isEmailAddress;
@property (nonatomic, readonly) bool isPhoneNumber;
@property (nonatomic, readonly) bool isPunctuation;
@property (nonatomic, readonly) bool isSentenceTerminator;
@property (nonatomic, readonly) bool isWhitespace;
@property (nonatomic, readonly) NSString *originalText;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSString *speakableText;

- (void).cxx_destruct;
- (id)_debugType;
- (id)_init;
- (id)description;
- (id)initWithNLToken:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; })arg1 text:(id)arg2 type:(id)arg3 lexicalClass:(id)arg4 language:(id)arg5 script:(id)arg6 namedEntity:(id)arg7 derivedSubtoken:(id)arg8 speechFormatter:(id)arg9;
- (id)initWithdatatype:(unsigned long long)arg1 text:(id)arg2 textCheckingResult:(id)arg3 speechFormatter:(id)arg4;
- (bool)isDate;
- (bool)isEmailAddress;
- (bool)isPhoneNumber;
- (bool)isPunctuation;
- (bool)isSentenceTerminator;
- (bool)isWhitespace;
- (id)originalText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)speakableText;

@end
