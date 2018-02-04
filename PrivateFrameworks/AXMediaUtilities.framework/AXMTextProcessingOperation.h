/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMTextProcessingOperation : NSObject {
    AXMLanguage * _language;
}

@property (nonatomic, readonly) AXMLanguage *language;
@property (nonatomic, readonly) NSLocale *lexiconLocale;

+ (id)operationWithLanguage:(id)arg1;
+ (id)operationWithSystemLanguage;

- (void).cxx_destruct;
- (id)_initWithLanguage:(id)arg1;
- (id)language;
- (id)lexiconLocale;

@end
