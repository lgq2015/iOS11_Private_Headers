/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARSpeechRecognitionResult : NSObject <NSCopying> {
    struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { 
        struct Token {} *__begin_; 
        struct Token {} *__end_; 
        struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { 
            struct Token {} *__first_; 
        } __end_cap_; 
    }  _quasarPreItnTokens;
    struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { 
        struct Token {} *__begin_; 
        struct Token {} *__end_; 
        struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { 
            struct Token {} *__first_; 
        } __end_cap_; 
    }  _quasarTokens;
}

@property (nonatomic, readonly, copy) NSArray *preITNTokens;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<quasar::Token' */ struct  quasarPreItnTokens; /* unknown property attribute:  std::__1::allocator<quasar::Token> >=^{Token}}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<quasar::Token' */ struct  quasarTokens; /* unknown property attribute:  std::__1::allocator<quasar::Token> >=^{Token}}} */
@property (nonatomic, readonly, copy) NSArray *tokens;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithTokens:(struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; })arg1 preITNTokens:(struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)preITNTokens;
- (struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; })quasarPreItnTokens;
- (struct vector<quasar::Token, std::__1::allocator<quasar::Token> > { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<quasar::Token *, std::__1::allocator<quasar::Token> > { struct Token {} *x_3_1_1; } x3; })quasarTokens;
- (id)tokens;

@end
