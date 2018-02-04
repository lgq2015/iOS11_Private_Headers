/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
 */

@interface CKContextRequest : NSObject <NSSecureCoding> {
    bool  _debug;
    bool  _dontSkip;
    NSString * _languageTag;
    NSNumber * _overrideBlendAlpha;
    NSNumber * _overrideBlendBeta;
    NSNumber * _overrideBlendGamma;
    bool  _prepareOnly;
    NSString * _text;
    bool  _timing;
    unsigned int  _topk;
    long long  _type;
}

@property (nonatomic) bool debug;
@property (nonatomic) bool dontSkip;
@property (nonatomic, retain) NSString *languageTag;
@property (nonatomic, retain) NSNumber *overrideBlendAlpha;
@property (nonatomic, retain) NSNumber *overrideBlendBeta;
@property (nonatomic, retain) NSNumber *overrideBlendGamma;
@property (nonatomic) bool prepareOnly;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) bool timing;
@property (nonatomic) unsigned int topk;
@property (nonatomic) long long type;

+ (id)_newXpcConnection;
+ (id)_xpcConnection;
+ (void)findResponseByID:(id)arg1 withReply:(id /* block */)arg2;
+ (void)findResultsForText:(id)arg1 languageTag:(id)arg2 requestType:(long long)arg3 withReply:(id /* block */)arg4;
+ (void)findResultsForText:(id)arg1 languageTag:(id)arg2 withReply:(id /* block */)arg3;
+ (void)findResultsForText:(id)arg1 withReply:(id /* block */)arg2;
+ (void)initialize;
+ (void)logEngagementForResponseId:(id)arg1 result:(id)arg2 rank:(unsigned long long)arg3 inputLength:(unsigned long long)arg4 completionLength:(unsigned long long)arg5 requestType:(long long)arg6 logType:(unsigned long long)arg7;
+ (void)logResultsShownForResponseId:(id)arg1 shown:(unsigned long long)arg2 couldHaveShown:(unsigned long long)arg3 serverOverride:(bool)arg4 inputLength:(unsigned long long)arg5 requestType:(long long)arg6 logType:(unsigned long long)arg7;
+ (void)logTransactionSuccessfulForResponseId:(id)arg1 inputLength:(unsigned long long)arg2 completionLength:(unsigned long long)arg3 requestType:(long long)arg4 logType:(unsigned long long)arg5;
+ (bool)pingService;
+ (void)portraitBlacklistWithReply:(id /* block */)arg1;
+ (void)prepareRequestForText:(id)arg1 withReply:(id /* block */)arg2;
+ (id)requestWithText:(id)arg1;
+ (void)runOffMainThread:(id /* block */)arg1;
+ (void)setDefaultRequestType:(long long)arg1;
+ (bool)shutdownService;
+ (void)statusWithReply:(id /* block */)arg1;
+ (bool)supportsSecureCoding;
+ (id)trimTextToSize:(id)arg1;
+ (void)warmUpForRequestType:(long long)arg1 withReply:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)debug;
- (bool)dontSkip;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithReply:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1;
- (id)languageTag;
- (id)overrideBlendAlpha;
- (id)overrideBlendBeta;
- (id)overrideBlendGamma;
- (bool)prepareOnly;
- (void)setDebug:(bool)arg1;
- (void)setDontSkip:(bool)arg1;
- (void)setLanguageTag:(id)arg1;
- (void)setOverrideBlendAlpha:(id)arg1;
- (void)setOverrideBlendBeta:(id)arg1;
- (void)setOverrideBlendGamma:(id)arg1;
- (void)setPrepareOnly:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTiming:(bool)arg1;
- (void)setTopk:(unsigned int)arg1;
- (void)setType:(long long)arg1;
- (id)text;
- (bool)timing;
- (unsigned int)topk;
- (long long)type;

@end
