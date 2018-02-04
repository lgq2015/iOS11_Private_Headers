/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFWebPageDecorator : NSObject <WFWebPageProtocol> {
    NSString * URLString;
    WFImgArrayCache * pageImagesPropertyCache;
    NSObject<WFWebPageProtocol> * webPageStripper;
}

@property (retain) NSString *URLString;

+ (id)_plainTextWithSelector:(SEL)arg1 object:(id)arg2;
+ (id)plainTextWithWebPageData:(id)arg1;
+ (id)plainTextWithWebPageString:(id)arg1;
+ (id)webPageWithData:(id)arg1;
+ (id)webPageWithData:(id)arg1 URLString:(id)arg2;
+ (id)webPageWithString:(id)arg1;
+ (id)webPageWithString:(id)arg1 URLString:(id)arg2;

- (id)URLString;
- (void)_cacheImgProperties;
- (void)dealloc;
- (bool)hasFrameset;
- (bool)hasShortRefresh;
- (id)imageAltsText;
- (id)images;
- (id)initWithWebPageData:(id)arg1;
- (id)initWithWebPageString:(id)arg1;
- (id)initWithWebPageStripper:(id)arg1;
- (id)linkTitlesText;
- (id)links;
- (id)metaTagDescription;
- (id)metaTagKeywords;
- (id)metaTagsLabeled;
- (id)metaTagsUnlabeled;
- (long long)numberOfImages;
- (long long)numberOfKnownImagePixels;
- (long long)numberOfUnknownSizedImages;
- (id)pageContent;
- (id)pageTitle;
- (id)plainText;
- (id)plainTextAttributeWithSelector:(SEL)arg1 title:(id)arg2;
- (id)plainTextAttributeWithSelector:(SEL)arg1 title:(id)arg2 weight:(int)arg3;
- (id)rawPlainText;
- (id)scriptBlocks;
- (void)setURLString:(id)arg1;
- (id)tags;
- (long long)wordCount;

@end
