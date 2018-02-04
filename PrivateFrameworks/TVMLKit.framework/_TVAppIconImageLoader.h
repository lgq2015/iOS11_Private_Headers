/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAppIconImageLoader : NSObject <TVImageLoader> {
    NSOperationQueue * _imageLoaderQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createApplicationIconForIdentifier:(id)arg1;
- (void)cancelLoad:(id)arg1;
- (id)imageKeyForObject:(id)arg1;
- (id)init;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 completionHandler:(id /* block */)arg5;

@end
