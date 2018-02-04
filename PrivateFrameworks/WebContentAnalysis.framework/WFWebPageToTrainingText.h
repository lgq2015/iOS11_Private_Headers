/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFWebPageToTrainingText : WFWebPageDecorator {
    NSString * categorySignature;
}

+ (id)documentSignature;
+ (id)signatureForCategory:(unsigned long long)arg1;

- (id)categorySignature;
- (void)dealloc;
- (id)rawPlainText;
- (void)setCategorySignature:(id)arg1;

@end
