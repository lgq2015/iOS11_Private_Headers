/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface _WLKUIMediaPlayerImageLoaderConfiguration : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSNumber * _persistentidentifier;
    bool  _screenshot;
    NSURL * _sourceURL;
    NSNumber * _storeIdentifier;
}

@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, copy) NSNumber *persistentidentifier;
@property (getter=isScreenshot, nonatomic) bool screenshot;
@property (nonatomic, copy) NSURL *sourceURL;
@property (nonatomic, copy) NSNumber *storeIdentifier;

- (void).cxx_destruct;
- (void)_populateValuesFromQueryItems;
- (unsigned long long)hash;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isScreenshot;
- (id)persistentidentifier;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPersistentidentifier:(id)arg1;
- (void)setScreenshot:(bool)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)sourceURL;
- (id)storeIdentifier;

@end
