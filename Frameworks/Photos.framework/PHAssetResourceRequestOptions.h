/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetResourceRequestOptions : NSObject <NSCopying> {
    bool  _downloadIsTransient;
    bool  _networkAccessAllowed;
    id /* block */  _progressHandler;
    bool  _resistentToPrune;
}

@property (nonatomic) bool downloadIsTransient;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) bool resistentToPrune;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)downloadIsTransient;
- (bool)isNetworkAccessAllowed;
- (id /* block */)progressHandler;
- (bool)resistentToPrune;
- (void)setDownloadIsTransient:(bool)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setResistentToPrune:(bool)arg1;

@end
