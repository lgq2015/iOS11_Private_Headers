/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCWebManifest : NSObject {
    NSString * _articleID;
    FCAssetHandle * _excerptAssetHandle;
    NSURL * _sourceURL;
    FCInterestToken * _webArchiveHoldToken;
    FCWebArchiveSource * _webArchiveSource;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, copy) NSString *articleID;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, retain) FCAssetHandle *excerptAssetHandle;
@property (nonatomic, retain) NSURL *sourceURL;
@property (nonatomic, retain) FCInterestToken *webArchiveHoldToken;
@property (nonatomic, retain) FCWebArchiveSource *webArchiveSource;

- (void).cxx_destruct;
- (id)URL;
- (id)articleID;
- (id)baseURL;
- (id)excerptAssetHandle;
- (id)init;
- (id)initWithArticleID:(id)arg1 sourceURL:(id)arg2 webArchiveSource:(id)arg3 excerptAssetHandle:(id)arg4;
- (void)setArticleID:(id)arg1;
- (void)setExcerptAssetHandle:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setWebArchiveHoldToken:(id)arg1;
- (void)setWebArchiveSource:(id)arg1;
- (id)sourceURL;
- (id)webArchiveHoldToken;
- (id)webArchiveSource;

@end
